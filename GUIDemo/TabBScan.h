//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file TabBScan.h
//!
//! User interface for displaying spokes data in cartesian coordinates rather than
//! polar coordinates as provided by a PPI.
//---------------------------------------------------------------------------

#ifndef GUIDEMO_TABBSCAN_H
#define GUIDEMO_TABBSCAN_H

#include <QObject>
#include <QTimer>

#include "ImageClient.h"
#include "CustomFrames.h"
#include "OverlayManager.h"
#include "ui_GUIDemo.h"


using namespace Navico::Protocol;

//-----------------------------------------------------------------------------
//! tQBScanFrame Helper Class
//-----------------------------------------------------------------------------
class tQBScanFrame : public tQCustomFrame
{
    Q_OBJECT

public:
    tQBScanFrame( tTargetLocation * pTargets, unsigned maxTargets, QWidget *pParent, QImage *pImage, tOverlayManager& overlayManager )
        : tQCustomFrame( pTargets, maxTargets, pParent, pImage, overlayManager )
    { }

protected:
    void convertXYtoSD( int x, int y, double& s, double& d );
    void convertSDtoXY( double s, double d, int& x, int& y );
	void DrawOverlay( QPainter& painter, const tOverlay* pOverlay );
};

//-----------------------------------------------------------------------------
//! tTabBScan Class
//-----------------------------------------------------------------------------
class tTabBScan : public QObject
{
    Q_OBJECT

public:
    tTabBScan( Ui::GUIDemoClass& ui, tTargetLocation* pTargets, unsigned maxTargets, QObject* pParent, tOverlayManager& overlayManager );
    ~tTabBScan();

    void OnConnect();
    void OnDisconnect();

    void OnUpdateSpoke( const NRP::Spoke::t9174Spoke *pSpoke );

signals:
    void AcquireTarget( double sample, double degrees );

private slots:
    void Timer_timeout();

private:
    tQBScanFrame*  m_pFrame;
    QTimer         m_Timer;
    QImage*        m_pImage;
    unsigned       m_NumSamples;

    Ui::GUIDemoClass&  ui;
};

//-----------------------------------------------------------------------------

#endif  // inclusion guard
