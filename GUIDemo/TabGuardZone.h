//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file TabGuardZone.h
//!
//! User interface for radar guard-zones.
//---------------------------------------------------------------------------

#ifndef GUIDEMO_TABGUARDZONE_H
#define GUIDEMO_TABGUARDZONE_H

#include <QObject>
#include <QPainter>
#include <NavRadarProtocol.h>
#include "TabBase.h"
#include "OverlayManager.h"

//-----------------------------------------------------------------------------
//! tTabGuardZone Class
//-----------------------------------------------------------------------------
class tTabGuardZone : public tTabBase
{
    Q_OBJECT

public:
    //-----------------------------------------------------------------------------
    // Constructor, destructor and initialization
    //-----------------------------------------------------------------------------
    tTabGuardZone( Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab, tOverlayManager& overlayManager );
    ~tTabGuardZone();

    void OnConnect( Navico::Protocol::NRP::tImageClient* pImageClient );

public:
    void OnSetupChanged( const Navico::Protocol::NRP::tSetup* pSetup );
    void OnGuardZoneAlarmChanged( unsigned zone, const Navico::Protocol::NRP::tGuardZoneAlarm* pAlarm );

    void SetGuardZone(int zone);

private slots:
    void Guard1Enabled_clicked( bool checked );
    void Guard1RangeStart_valueChanged( int value );
    void Guard1RangeEnd_valueChanged( int value );
    void Guard1Bearing_valueChanged( int value );
    void Guard1Width_valueChanged( int value );
    void Guard1AlarmType_currentIndexChanged( int value );

    void Guard2Enabled_clicked( bool checked );
    void Guard2RangeStart_valueChanged( int value );
    void Guard2RangeEnd_valueChanged( int value );
    void Guard2Bearing_valueChanged( int value );
    void Guard2Width_valueChanged( int value );
    void Guard2AlarmType_currentIndexChanged( int value );

    void GuardSensitivity_valueChanged( int value );
    void Guard1Cancel_clicked( bool checked );
    void Guard2Cancel_clicked( bool checked );

private:
    bool m_UpdateOnSetup;
    bool m_AlarmTypes[ Navico::Protocol::NRP::cMaxGuardZones ];
	tOverlayManager& m_OverlayManager;
};

//-----------------------------------------------------------------------------

#endif  // inclusion guard
