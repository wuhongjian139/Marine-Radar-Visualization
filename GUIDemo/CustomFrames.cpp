//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include "CustomFrames.h"

#include <QContextMenuEvent>
#include <QImage>
#include <QMenu>
#include <QMutexLocker>
#include <QPainter>
#include <QTransform>
#include <NavRadarProtocol.h>

//-----------------------------------------------------------------------------
Navico::tRadarColourLookUpTableGreen   gGreenLUT;
Navico::tRadarColourLookUpTableNavico  gNavicoLUT;

QMutex tQCustomFrame::m_ImageMutex;

//-----------------------------------------------------------------------------
tQCustomFrame::tQCustomFrame( tTargetLocation * pTargets, unsigned maxTargets, QWidget *p, QImage *pImage, tOverlayManager& overlayManager )
    : QFrame(p)
    , m_pImage(pImage)
    , m_MaxTargets( maxTargets )
    , m_pTargets( pTargets )
    , m_TargetRadius( 6 )
    , m_OverlayManager( overlayManager )
{
}

//-----------------------------------------------------------------------------
void tQCustomFrame::paintEvent( QPaintEvent * /*pEvent*/ )
{
    if (m_pImage)
    {
        QPainter painter;
        QMutexLocker m( &m_ImageMutex );

        // draw the bitmap image
        painter.begin( this );

		painter.drawImage( rect(), *m_pImage, m_pImage->rect() );

		// now draw all valid targets
        painter.setBrush( Qt::yellow );
        for (unsigned i = 0; i < m_MaxTargets; ++i)
        {
            tTargetLocation* pTarget = &m_pTargets[ i ];
            if (pTarget->isValid)
            {
                int x, y;
                convertSDtoXY( pTarget->sample, pTarget->degrees, x, y );
                painter.drawEllipse( QPoint( x, y ), m_TargetRadius, m_TargetRadius );
            }
        }

        // draw overlays
        painter.setTransform( QTransform::fromTranslate(width() / 2, height() / 2) );
		for (int i = 0; i < Navico::Protocol::NRP::cMaxGuardZones; ++i)
		{
			const tOverlay* overlay = m_OverlayManager.GetGuardZone(i);
			if ((overlay != 0) && (overlay->enabled))
			{
				DrawOverlay(painter, overlay);
			}
		}
		for (int i = 0; i < Navico::Protocol::NRP::cMaxBlankSectors; ++i)
		{
			const tOverlay* overlay = m_OverlayManager.GetBlankingSector(i);
			if ((overlay != 0) && (overlay->enabled))
			{
				DrawOverlay(painter, overlay);
			}
		}

		painter.end();
    }
}

//-----------------------------------------------------------------------------
#define dimof(carray) (sizeof(carray)/sizeof(carray[0]))

namespace
{
    struct tTargetSize 
    {
        const char*  name;
        unsigned     radius;
    };
    tTargetSize targetSizes[] = 
    {
        { "Small",   3, },
        { "Medium",  6, },
        { "Large",  12, },
    };
}

void tQCustomFrame::contextMenuEvent( QContextMenuEvent* pEvent )
{
    if (m_pImage)
    {
        QMenu menu;
        QAction* pAcquireAction = menu.addAction( "Acquire Target" );
        addActions( menu );
        
        QMenu * pSizeMenu = menu.addMenu( "Target Size" );
        for (unsigned i = 0; i < dimof(targetSizes); ++i)
        {
            QAction * pAction = pSizeMenu->addAction( targetSizes[ i ].name );
            pAction->setData( targetSizes[ i ].radius );
            pAction->setCheckable( true );
            if (m_TargetRadius == targetSizes[ i ].radius)
                pAction->setChecked( true );
        }

        QAction* pSelected = menu.exec( this->mapToGlobal( pEvent->pos() ) );
        if (pSelected != 0)
        {
            if (pSelected == pAcquireAction)
            {
                double s, d;
                convertXYtoSD( pEvent->pos().x(), pEvent->pos().y(), s, d );
                emit AcquireTarget( s, d );
            }
            else if (pSelected->parentWidget() == pSizeMenu)
            {
                m_TargetRadius = pSelected->data().toInt();
            }
            else // derived classes action
            {
                performAction( *pSelected );
            }
        }
    }
}

