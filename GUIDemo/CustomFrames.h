//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file CustomFrames.h
//!
//! Custom frames for BScan & PPI widgets. Providing a common interface for handling
//! the display and acquiring of tracked targets.
//-----------------------------------------------------------------------------

#ifndef GUIDEMO_CUSTOMFRAMES_H
#define GUIDEMO_CUSTOMFRAMES_H

#include <QFrame>
#include <QMutex>

#include <RadarColourLookUpTable.h>

#include "OverlayManager.h"

//-----------------------------------------------------------------------------
// Forward References
//-----------------------------------------------------------------------------
class QImage;
class QMenu;

//-----------------------------------------------------------------------------
// Colour LookUp Tables
//-----------------------------------------------------------------------------
extern Navico::tRadarColourLookUpTableGreen   gGreenLUT;
extern Navico::tRadarColourLookUpTableNavico  gNavicoLUT;

//-----------------------------------------------------------------------------
// Target Locations
//-----------------------------------------------------------------------------
struct tTargetLocation
{
    bool    isValid;
    double  sample;
    double  degrees;
};

//-----------------------------------------------------------------------------
// tQCustomFrame Class
//-----------------------------------------------------------------------------
class tQCustomFrame : public QFrame
{
    Q_OBJECT

public:
    tQCustomFrame( tTargetLocation* pTargets, unsigned maxTargets, QWidget* pWidget, QImage* pImage, tOverlayManager& overlayManager );
    virtual ~tQCustomFrame() { }

    void setImage( QImage* pImage = NULL ) { m_pImage = pImage; }
    QImage* getImage() { return m_pImage; }
	void SetFullRange_m( uint32_t fullRange_m ) { m_FullRange_m = fullRange_m; }
	void SetBearing_deg( float bearing_deg ) { m_Bearing_deg = bearing_deg; }

    static QMutex* getImageMutex() { return &m_ImageMutex; }

signals:
    void AcquireTarget( double sample, double degrees );

protected:
    virtual void paintEvent( QPaintEvent * /*pEvent*/ );
    virtual void contextMenuEvent( QContextMenuEvent * pEvent );
    virtual void addActions( QMenu & /*menu*/ ) { }
    virtual void performAction( QAction & /*action*/ ) { }
    virtual void convertXYtoSD( int x, int y, double& s, double& d ) = 0;
    virtual void convertSDtoXY( double s, double d, int& x, int& y ) = 0;
	virtual void DrawOverlay(QPainter& painter, const tOverlay* pOverlay) = 0;

	uint32_t m_FullRange_m;
	float m_Bearing_deg;

private:
    QImage*           m_pImage;
    unsigned          m_MaxTargets;
    tTargetLocation*  m_pTargets;
    unsigned          m_TargetRadius;
    static QMutex     m_ImageMutex;

    tOverlayManager&  m_OverlayManager;
};

//-----------------------------------------------------------------------------

#endif  // inclusion guard
