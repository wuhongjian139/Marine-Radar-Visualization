//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include <cassert>
#include "TabBase.h"
#include "TabGuardZone.h"
#include "ImageClient.h"
#include "ui_GUIDemo.h"
#include "QControlUtils.h"

using namespace Navico::Protocol::NRP;

enum
{
    eGuardZone1 = 0,
    eGuardZone2
};

//-----------------------------------------------------------------------------
tTabGuardZone::tTabGuardZone( Ui::GUIDemoClass& m_Ui, QObject* pParent, QWidget& tab, tOverlayManager& overlayManager )
    : tTabBase( m_Ui, pParent, tab )
	, m_OverlayManager( overlayManager )
{
    for (unsigned i = 0; i < cMaxGuardZones; ++i)
    {
        m_AlarmTypes[ i ] = eGZAlarmEntry;
    }
    ConnectControls( true, *this, tab );
}

//-----------------------------------------------------------------------------
tTabGuardZone::~tTabGuardZone()
{
    ConnectControls( false, *this, m_Tab );
}

//-----------------------------------------------------------------------------
void tTabGuardZone::OnConnect( tImageClient* pImageClient )
{
    tTabBase::OnConnect( pImageClient );
    m_UpdateOnSetup = true;
}

//-----------------------------------------------------------------------------
// Group: GuardZone 1
//-----------------------------------------------------------------------------
void tTabGuardZone::SetGuardZone(int zone)
{
	if (m_pImageClient)
	{
		bool enabled;
		uint32_t startRange_m;
		uint32_t endRange_m;
		uint16_t bearing_deg;
		uint16_t width_deg;

		switch (zone)
		{
		default:
		case eGuardZone1:
			enabled = m_Ui.checkGuard1Enabled->isChecked();
			startRange_m = m_Ui.spinGuard1RangeStart->value();
			endRange_m = m_Ui.spinGuard1RangeEnd->value();
			bearing_deg = m_Ui.spinGuard1Bearing->value();
			width_deg = m_Ui.spinGuard1Width->value();
			break;

		case eGuardZone2:
			enabled = m_Ui.checkGuard2Enabled->isChecked();
			startRange_m = m_Ui.spinGuard2RangeStart->value();
			endRange_m = m_Ui.spinGuard2RangeEnd->value();
			bearing_deg = m_Ui.spinGuard2Bearing->value();
			width_deg = m_Ui.spinGuard2Width->value();
			break;
		}

		// Set the guard zone in Radar
		m_pImageClient->SetGuardZoneSetup( zone, startRange_m, endRange_m, bearing_deg, width_deg );

		// Update the guard zone overlay in GUI
		m_OverlayManager.SetGuardZone( zone, enabled, startRange_m, endRange_m, bearing_deg, width_deg );
	}
}

//-----------------------------------------------------------------------------
void tTabGuardZone::Guard1Enabled_clicked( bool checked )
{
    if (m_pImageClient)
    {
        m_pImageClient->SetGuardZoneEnable( eGuardZone1, checked );
    }
}

//-----------------------------------------------------------------------------
void tTabGuardZone::Guard1RangeStart_valueChanged( int /*value*/ )
{
    SetGuardZone( eGuardZone1 );
}

//-----------------------------------------------------------------------------
void tTabGuardZone::Guard1RangeEnd_valueChanged( int /*value*/ )
{
    SetGuardZone( eGuardZone1 );
}

//-----------------------------------------------------------------------------
void tTabGuardZone::Guard1Bearing_valueChanged( int /*value*/ )
{
    SetGuardZone( eGuardZone1 );
}

//-----------------------------------------------------------------------------
void tTabGuardZone::Guard1Width_valueChanged( int /*value*/ )
{
    SetGuardZone( eGuardZone1 );
}

//-----------------------------------------------------------------------------
void tTabGuardZone::Guard1AlarmType_currentIndexChanged( int value )
{
    if (m_pImageClient)
    {
        m_pImageClient->SetGuardZoneAlarmSetup( eGuardZone1, eGuardZoneAlarmType( value ) );
    }
}

//-----------------------------------------------------------------------------
// Group: GuardZone 2
//-----------------------------------------------------------------------------
void tTabGuardZone::Guard2Enabled_clicked( bool checked )
{
    if (m_pImageClient)
    {
        m_pImageClient->SetGuardZoneEnable( eGuardZone2, checked );
    }
}

//-----------------------------------------------------------------------------
void tTabGuardZone::Guard2RangeStart_valueChanged( int /*value*/ )
{
    SetGuardZone( eGuardZone2 );
}

//-----------------------------------------------------------------------------
void tTabGuardZone::Guard2RangeEnd_valueChanged( int /*value*/ )
{
    SetGuardZone( eGuardZone2 );
}

//-----------------------------------------------------------------------------
void tTabGuardZone::Guard2Bearing_valueChanged( int /*value*/ )
{
    SetGuardZone( eGuardZone2 );
}

//-----------------------------------------------------------------------------
void tTabGuardZone::Guard2Width_valueChanged( int /*value*/ )
{
    SetGuardZone( eGuardZone2 );
}

//-----------------------------------------------------------------------------
void tTabGuardZone::Guard2AlarmType_currentIndexChanged( int value )
{
    if (m_pImageClient)
    {
        m_pImageClient->SetGuardZoneAlarmSetup( eGuardZone2, eGuardZoneAlarmType( value ) );
    }
}

//-----------------------------------------------------------------------------
// Miscellaneous
//-----------------------------------------------------------------------------
void tTabGuardZone::GuardSensitivity_valueChanged( int value )
{
    if (m_pImageClient)
    {
        m_pImageClient->SetGuardZoneSensitivity( value );
    }
}

//-----------------------------------------------------------------------------
void tTabGuardZone::OnSetupChanged( const tSetup* pSetup )
{
    unsigned range_m = (pSetup->range_dm + 5) / 10;
    SetManualRange( m_Ui.spinGuard1RangeStart, 0, range_m );
    SetManualRange( m_Ui.spinGuard1RangeEnd,   0, range_m );
    SetManualRange( m_Ui.spinGuard2RangeStart, 0, range_m );
    SetManualRange( m_Ui.spinGuard2RangeEnd,   0, range_m );

    m_Ui.editGuardSensitivity->setText( QString::number( pSetup->guardzones.sensitivity ) );

    bool gz1Enabled = pSetup->guardzones.active[eGuardZone1];
    m_Ui.checkGuard1Enabled->setChecked( gz1Enabled );
    m_Ui.editGuard1RangeStart->setText( QString::number( pSetup->guardzones.zone[eGuardZone1].rangeStart_m ) );
    m_Ui.editGuard1RangeEnd->setText( QString::number( pSetup->guardzones.zone[eGuardZone1].rangeEnd_m ) );
    m_Ui.editGuard1Bearing->setText( QString::number( pSetup->guardzones.zone[eGuardZone1].azimuth_ddeg/10.0, 'f', 1 ) );
    m_Ui.editGuard1Width->setText( QString::number( pSetup->guardzones.zone[eGuardZone1].width_ddeg/10.0, 'f', 1 ) );
    m_Ui.editGuard1AlarmType->setText( ToItemName( pSetup->guardzones.alarmType[eGuardZone1].alarmType, m_Ui.comboGuard1AlarmType ) );
	m_OverlayManager.SetGuardZone( eGuardZone1, gz1Enabled, pSetup->guardzones.zone[eGuardZone1].rangeStart_m,
		pSetup->guardzones.zone[eGuardZone1].rangeEnd_m,
		pSetup->guardzones.zone[eGuardZone1].azimuth_ddeg / 10.0,
		pSetup->guardzones.zone[eGuardZone1].width_ddeg / 10.0 );

    bool gz2Enabled = pSetup->guardzones.active[eGuardZone2];
    m_Ui.checkGuard2Enabled->setChecked( gz2Enabled );
    m_Ui.editGuard2RangeStart->setText( QString::number( pSetup->guardzones.zone[eGuardZone2].rangeStart_m ) );
    m_Ui.editGuard2RangeEnd->setText( QString::number( pSetup->guardzones.zone[eGuardZone2].rangeEnd_m ) );
    m_Ui.editGuard2Bearing->setText( QString::number( pSetup->guardzones.zone[eGuardZone2].azimuth_ddeg/10.0, 'f', 1 ) );
    m_Ui.editGuard2Width->setText( QString::number( pSetup->guardzones.zone[eGuardZone2].width_ddeg/10.0, 'f', 1 ) );
    m_Ui.editGuard2AlarmType->setText( ToItemName( pSetup->guardzones.alarmType[eGuardZone2].alarmType, m_Ui.comboGuard2AlarmType ) );
	m_OverlayManager.SetGuardZone( eGuardZone2, gz2Enabled, pSetup->guardzones.zone[eGuardZone2].rangeStart_m,
		pSetup->guardzones.zone[eGuardZone2].rangeEnd_m,
		pSetup->guardzones.zone[eGuardZone2].azimuth_ddeg / 10.0,
		pSetup->guardzones.zone[eGuardZone2].width_ddeg / 10.0 );

    if (m_UpdateOnSetup)
    {
        m_UpdateOnSetup = false;
        SetManualValue( m_Ui.spinGuardSensitivity, pSetup->guardzones.sensitivity );

        SetManualValue( m_Ui.spinGuard1RangeStart, pSetup->guardzones.zone[eGuardZone1].rangeStart_m );
        SetManualValue( m_Ui.spinGuard1RangeEnd, pSetup->guardzones.zone[eGuardZone1].rangeEnd_m );
        SetManualValue( m_Ui.spinGuard1Bearing, pSetup->guardzones.zone[eGuardZone1].azimuth_ddeg/10.0 );
        SetManualValue( m_Ui.spinGuard1Width, pSetup->guardzones.zone[eGuardZone1].width_ddeg/10.0 );
        SetManualValue( m_Ui.comboGuard1AlarmType, pSetup->guardzones.alarmType[eGuardZone1].alarmType );

        SetManualValue( m_Ui.spinGuard2RangeStart, pSetup->guardzones.zone[eGuardZone2].rangeStart_m );
        SetManualValue( m_Ui.spinGuard2RangeEnd, pSetup->guardzones.zone[eGuardZone2].rangeEnd_m );
        SetManualValue( m_Ui.spinGuard2Bearing, pSetup->guardzones.zone[eGuardZone2].azimuth_ddeg/10.0 );
        SetManualValue( m_Ui.spinGuard2Width, pSetup->guardzones.zone[eGuardZone2].width_ddeg/10.0 );
        SetManualValue( m_Ui.comboGuard2AlarmType, pSetup->guardzones.alarmType[eGuardZone2].alarmType );
    }
}

//-----------------------------------------------------------------------------
void tTabGuardZone::Guard1Cancel_clicked( bool /*checked*/ )
{
    if (m_pImageClient)
    {
        m_pImageClient->SetGuardZoneAlarmCancel( eGuardZone1, eGuardZoneAlarmType( m_AlarmTypes[eGuardZone1] ) );
    }
}

//-----------------------------------------------------------------------------
void tTabGuardZone::Guard2Cancel_clicked( bool /*checked*/ )
{
    if (m_pImageClient)
    {
        m_pImageClient->SetGuardZoneAlarmCancel( eGuardZone2, eGuardZoneAlarmType( m_AlarmTypes[eGuardZone2] ) );
    }
}

//-----------------------------------------------------------------------------
void tTabGuardZone::OnGuardZoneAlarmChanged( unsigned zone, const tGuardZoneAlarm* pAlarm )
{
    m_AlarmTypes[ zone ] = pAlarm->type;

    QString type = m_Ui.comboGuard1AlarmType->itemText( pAlarm->type );
    QString state;
    switch (pAlarm->state)
    {
    case eAlarmActive:
        {
            state = "Active";
        }
        break;

    case eAlarmInactive:
        {
            state = "Inactive";
        }
        break;

    case eAlarmCancelled:
        {
            state = "Cancelled";
        }
        break;

    default:
        {
            state = QString( "Unknown %0" ).arg( pAlarm->state );
        }
    }

    if (zone == eGuardZone1)
    {
        m_Ui.editGuard1Type->setText( type );
        m_Ui.editGuard1State->setText( state );
    }
    else
    {
        m_Ui.editGuard2Type->setText( type );
        m_Ui.editGuard2State->setText( state );
    }
}
