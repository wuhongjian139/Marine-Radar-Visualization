//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include "TabBScan.h"
#include "QControlUtils.h"

#include <cassert>
#include <QPainter>

//-----------------------------------------------------------------------------
//  tQBScanFrame Implementation
//-----------------------------------------------------------------------------
void tQBScanFrame::convertXYtoSD( int x, int y, double& s, double& d )
{
    s = (getImage()->height() * y) / height();
    d = (360.0 * x) / width();
}

//-----------------------------------------------------------------------------
void tQBScanFrame::convertSDtoXY( double s, double d, int& x, int& y )
{
    y = ((s * height()) / getImage()->height()) + 0.5;
    x = (d * width() / 360.0) + 0.5;
}

//-----------------------------------------------------------------------------
void tQBScanFrame::DrawOverlay( QPainter& painter, const tOverlay* pOverlay )
{
	int width = this->width();
	int height = this->height();

    double x1 = (static_cast<double>(pOverlay->startBearing_deg) / 360.0) - 0.5;
	double x2 = (static_cast<double>(pOverlay->endBearing_deg) / 360.0) - 0.5;
	double y1 = (static_cast<double>(pOverlay->startRange_m) / m_FullRange_m) - 0.5;
	double y2 = (static_cast<double>(pOverlay->endRange_m) / m_FullRange_m) - 0.5;

	painter.setPen( pOverlay->lineColour );
	painter.setBrush( QBrush( pOverlay->fillColour ) );

	double leftBound = -0.5;
	double rightBound = 0.5;

	if (x2 >= x1)
	{
		painter.drawRect( x1 * width, y1 * height, (x2 - x1) * width, (y2 - y1) * height );
	}
	else
	{
		painter.drawRect( leftBound * width, y1 * height, (x2 - leftBound) * width, (y2 - y1) * height );
		painter.drawRect( x1 * width, y1 * height, (rightBound - x1) * width, (y2 - y1) * height );
	}
}

//-----------------------------------------------------------------------------
//  tTabBScan Implementation
//-----------------------------------------------------------------------------
tTabBScan::tTabBScan( Ui::GUIDemoClass& myUI, tTargetLocation* pTargets, unsigned maxTargets, QObject* pParent, tOverlayManager& overlayManager )
    : QObject( pParent )
    , m_pFrame( NULL )
    , m_pImage( NULL )
    , m_NumSamples( 0 )
    , ui( myUI )
{
    m_pFrame = new tQBScanFrame( pTargets, maxTargets, ui.tabBScan, NULL, overlayManager );
    ui.verticalLayout_tabBscan->addWidget( m_pFrame );

    Connect( true, &m_Timer, SIGNAL(timeout()),                    this, SLOT(Timer_timeout()) );
    Connect( true, m_pFrame, SIGNAL(AcquireTarget(double,double)), this, SIGNAL(AcquireTarget(double,double)) );
}

//-----------------------------------------------------------------------------
tTabBScan::~tTabBScan()
{
    m_Timer.stop();

    delete m_pFrame;
    delete m_pImage;
}

//-----------------------------------------------------------------------------
void tTabBScan::OnConnect()
{
    ui.tabBScan->setEnabled( true );
    m_Timer.setInterval( 50 );
    m_Timer.start();
}

//-----------------------------------------------------------------------------
void tTabBScan::OnDisconnect()
{
    m_Timer.stop();
    ui.tabBScan->setEnabled( false );
}

//-----------------------------------------------------------------------------
void tTabBScan::Timer_timeout()
{
    if (m_pFrame)
        m_pFrame->update();
}

//-----------------------------------------------------------------------------
void tTabBScan::OnUpdateSpoke( const NRP::Spoke::t9174Spoke *pSpoke )
{
    QMutexLocker locker( tQCustomFrame::getImageMutex() );

    const uint32_t cSpokesPerRevolution = 2048;
    if (m_pImage == NULL)
    {
        m_NumSamples = pSpoke->header.nOfSamples;
        
        // create the correct size of the frame buffer
        m_pImage = new QImage( cSpokesPerRevolution, m_NumSamples, QImage::Format_RGB32 );
        m_pImage->fill( 0 );
        m_pFrame->setImage( m_pImage );

        m_NumSamples = m_NumSamples / 2;
    }

    assert( pSpoke->header.bitsPerSample == 4 );   // only 4 bits sample are supported

    uint32_t *pRawImage = (uint32_t *)m_pImage->scanLine(0);
    uint32_t azimuth = (pSpoke->header.spokeAzimuth >> 1) & 0x7ff; // to be suer to have a value between 0-2047

    for (unsigned r = 0; r < m_NumSamples; ++r)
    {
        *(pRawImage + azimuth + ((r<<1)    ) * cSpokesPerRevolution) = gNavicoLUT.GetColour(((pSpoke->data[r]     ) & 0xf));
        *(pRawImage + azimuth + ((r<<1) + 1) * cSpokesPerRevolution) = gNavicoLUT.GetColour(((pSpoke->data[r] >> 4) & 0xf));
    }

	m_pFrame->SetFullRange_m( NRP::Spoke::GetSampleRange_mm( pSpoke->header ) * pSpoke->header.nOfSamples / 1000 );
}

