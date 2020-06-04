//-----------------------------------------------------------------------------
// Copyright (C) 2007-2015 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include <cassert>
#include <NavTypes.h>
#include <FeatureManager.h>
#include "TabSectorBlanking.h"
#include "QControlUtils.h"
#include "ImageClient.h"
#include "ui_GUIDemo.h"

using namespace Navico::Protocol::NRP;

//-----------------------------------------------------------------------------
tTabSectorBlanking::tTabSectorBlanking( Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab, tOverlayManager& overlayManager )
    : tTabBase( ui, pParent, tab )
	, m_OverlayManager( overlayManager )
{
    ConnectControls( true, *this, tab );
	m_Tab.setEnabled( false );
}

//-----------------------------------------------------------------------------
tTabSectorBlanking::~tTabSectorBlanking()
{
    ConnectControls( false, *this, m_Tab );
}

//-----------------------------------------------------------------------------
void tTabSectorBlanking::OnConnect( tImageClient* pImageClient )
{
    tTabBase::OnConnect( pImageClient );
    m_UpdateOnConfiguration = (pImageClient != 0);
	OnUpdateFeature( eFeatureEnum_SectorBlanking );
}

//-----------------------------------------------------------------------------
void tTabSectorBlanking::OnDisconnect()
{
    tTabBase::OnDisconnect();
    m_UpdateOnConfiguration = false;
}

//-----------------------------------------------------------------------------
// Group: Configuration
//-----------------------------------------------------------------------------
static uint16_t ToDeciDegrees( double degrees )
{
    int deg10 = degrees * 10;
    while (deg10 < 0) deg10 += 360*10;
    return deg10 %= 360*10;
}
static uint16_t ToDegrees( double degrees )
{
    int deg = degrees;
    while (deg < 0) deg += 360;
    return deg % 360;
}

void tTabSectorBlanking::UpdateSector( unsigned sector, bool enabled, double start, double end )
{
    m_pImageClient->SetSectorBlankingSetup( sector, enabled, ToDeciDegrees( start ), ToDeciDegrees( end ) );
	m_OverlayManager.SetBlankingSector( sector, enabled, ToDegrees( start ), ToDegrees( end ) );
}

void tTabSectorBlanking::Sector0Start_valueChanged( double value )
{
    UpdateSector( 0, m_Ui.checkSector0Enabled->checkState() == Qt::Checked, value, m_Ui.spinSector0End->value() );
}

void tTabSectorBlanking::Sector0End_valueChanged( double value )
{
    UpdateSector( 0, m_Ui.checkSector0Enabled->checkState() == Qt::Checked, m_Ui.spinSector0Start->value(), value );
}

void tTabSectorBlanking::Sector1Start_valueChanged( double value )
{
    UpdateSector( 1, m_Ui.checkSector1Enabled->checkState() == Qt::Checked, value, m_Ui.spinSector1End->value() );
}

void tTabSectorBlanking::Sector1End_valueChanged( double value )
{
    UpdateSector( 1, m_Ui.checkSector1Enabled->checkState() == Qt::Checked, m_Ui.spinSector1Start->value(), value );
}

void tTabSectorBlanking::Sector2Start_valueChanged( double value )
{
    UpdateSector( 2, m_Ui.checkSector2Enabled->checkState() == Qt::Checked, value, m_Ui.spinSector2End->value() );
}

void tTabSectorBlanking::Sector2End_valueChanged( double value )
{
    UpdateSector( 2, m_Ui.checkSector2Enabled->checkState() == Qt::Checked, m_Ui.spinSector2Start->value(), value );
}

void tTabSectorBlanking::Sector3Start_valueChanged( double value )
{
    UpdateSector( 3, m_Ui.checkSector3Enabled->checkState() == Qt::Checked, value, m_Ui.spinSector3End->value() );
}

void tTabSectorBlanking::Sector3End_valueChanged( double value )
{
    UpdateSector( 3, m_Ui.checkSector3Enabled->checkState() == Qt::Checked, m_Ui.spinSector3Start->value(), value );
}

void tTabSectorBlanking::Sector4Start_valueChanged( double value )
{
    UpdateSector( 4, m_Ui.checkSector4Enabled->checkState() == Qt::Checked, value, m_Ui.spinSector4End->value() );
}

void tTabSectorBlanking::Sector4End_valueChanged( double value )
{
    UpdateSector( 4, m_Ui.checkSector4Enabled->checkState() == Qt::Checked, m_Ui.spinSector4Start->value(), value );
}

void tTabSectorBlanking::Sector5Start_valueChanged( double value )
{
    UpdateSector( 5, m_Ui.checkSector5Enabled->checkState() == Qt::Checked, value, m_Ui.spinSector5End->value() );
}

void tTabSectorBlanking::Sector5End_valueChanged( double value )
{
    UpdateSector( 5, m_Ui.checkSector5Enabled->checkState() == Qt::Checked, m_Ui.spinSector5Start->value(), value );
}

//-----------------------------------------------------------------------------
void tTabSectorBlanking::Sector0Enabled_clicked( bool checked )
{
    UpdateSector( 0, checked, m_Ui.spinSector0Start->value(), m_Ui.spinSector0End->value() );
}

void tTabSectorBlanking::Sector1Enabled_clicked( bool checked )
{
    UpdateSector( 1, checked, m_Ui.spinSector1Start->value(), m_Ui.spinSector1End->value() );
}

void tTabSectorBlanking::Sector2Enabled_clicked( bool checked )
{
    UpdateSector( 2, checked, m_Ui.spinSector2Start->value(), m_Ui.spinSector2End->value() );
}

void tTabSectorBlanking::Sector3Enabled_clicked( bool checked )
{
    UpdateSector( 3, checked, m_Ui.spinSector3Start->value(), m_Ui.spinSector3End->value() );
}

void tTabSectorBlanking::Sector4Enabled_clicked( bool checked )
{
    UpdateSector( 4, checked, m_Ui.spinSector4Start->value(), m_Ui.spinSector4End->value() );
}

void tTabSectorBlanking::Sector5Enabled_clicked( bool checked )
{
    UpdateSector( 5, checked, m_Ui.spinSector5Start->value(), m_Ui.spinSector5End->value() );
}


//-----------------------------------------------------------------------------
// State Changes
//-----------------------------------------------------------------------------
void tTabSectorBlanking::OnConfigurationChanged( const Navico::Protocol::NRP::tConfiguration* pConfig )
{
    if (m_UpdateOnConfiguration)
    {
        m_UpdateOnConfiguration = false;

		bool enabled = pConfig->blankSectors[0].state;
		uint16_t startBearing_deg = ToDegrees( pConfig->blankSectors[0].sectorStart_ddeg / 10.0 );
		uint16_t endBearing_deg = ToDegrees( pConfig->blankSectors[0].sectorEnd_ddeg / 10.0 );
        m_Ui.checkSector0Enabled->setChecked( enabled );
        m_Ui.editSector0Start->setText( QString::number( startBearing_deg, 'f', 1 ) );
        m_Ui.editSector0End->setText( QString::number( endBearing_deg, 'f', 1 ) );
        SetManualValue( m_Ui.spinSector0Start, startBearing_deg );
        SetManualValue( m_Ui.spinSector0End, endBearing_deg );
		m_OverlayManager.SetBlankingSector( 0, enabled, startBearing_deg, endBearing_deg );

		enabled = pConfig->blankSectors[1].state;
		startBearing_deg = ToDegrees( pConfig->blankSectors[1].sectorStart_ddeg / 10.0 );
		endBearing_deg = ToDegrees( pConfig->blankSectors[1].sectorEnd_ddeg / 10.0 );
        m_Ui.checkSector1Enabled->setChecked( enabled );
        m_Ui.editSector1Start->setText( QString::number( startBearing_deg, 'f', 1 ) );
        m_Ui.editSector1End->setText( QString::number( endBearing_deg, 'f', 1 ) );
        SetManualValue( m_Ui.spinSector1Start, startBearing_deg );
        SetManualValue( m_Ui.spinSector1End, endBearing_deg );
		m_OverlayManager.SetBlankingSector( 1, enabled, startBearing_deg, endBearing_deg );

		enabled = pConfig->blankSectors[2].state;
		startBearing_deg = ToDegrees( pConfig->blankSectors[2].sectorStart_ddeg / 10.0 );
		endBearing_deg = ToDegrees( pConfig->blankSectors[2].sectorEnd_ddeg / 10.0 );
        m_Ui.checkSector2Enabled->setChecked( enabled );
        m_Ui.editSector2Start->setText( QString::number( startBearing_deg, 'f', 1 ) );
        m_Ui.editSector2End->setText( QString::number( endBearing_deg, 'f', 1 ) );
        SetManualValue( m_Ui.spinSector2Start, startBearing_deg );
        SetManualValue( m_Ui.spinSector2End, endBearing_deg );
		m_OverlayManager.SetBlankingSector( 2, enabled, startBearing_deg, endBearing_deg );

		enabled = pConfig->blankSectors[3].state;
		startBearing_deg = ToDegrees( pConfig->blankSectors[3].sectorStart_ddeg / 10.0 );
		endBearing_deg = ToDegrees( pConfig->blankSectors[3].sectorEnd_ddeg / 10.0 );
        m_Ui.checkSector3Enabled->setChecked( enabled );
        m_Ui.editSector3Start->setText( QString::number( startBearing_deg, 'f', 1 ) );
        m_Ui.editSector3End->setText( QString::number( endBearing_deg, 'f', 1 ) );
        SetManualValue( m_Ui.spinSector3Start, startBearing_deg );
        SetManualValue( m_Ui.spinSector3End, endBearing_deg );
		m_OverlayManager.SetBlankingSector( 3, enabled, startBearing_deg, endBearing_deg );

		if (cMaxBlankSectors > 4)
		{
			enabled = pConfig->blankSectors[4].state;
			startBearing_deg = ToDegrees( pConfig->blankSectors[4].sectorStart_ddeg / 10.0 );
			endBearing_deg = ToDegrees( pConfig->blankSectors[4].sectorEnd_ddeg / 10.0 );
			m_Ui.checkSector4Enabled->setChecked( enabled );
			m_Ui.editSector4Start->setText( QString::number( startBearing_deg, 'f', 1 ) );
			m_Ui.editSector4End->setText( QString::number( endBearing_deg, 'f', 1 ) );
			SetManualValue( m_Ui.spinSector4Start, startBearing_deg );
			SetManualValue( m_Ui.spinSector4End, endBearing_deg );
			m_OverlayManager.SetBlankingSector( 4, enabled, startBearing_deg, endBearing_deg );
		}

		if (cMaxBlankSectors > 5)
		{
			enabled = pConfig->blankSectors[5].state;
			startBearing_deg = ToDegrees( pConfig->blankSectors[5].sectorStart_ddeg / 10.0 );
			endBearing_deg = ToDegrees( pConfig->blankSectors[5].sectorEnd_ddeg / 10.0 );
			m_Ui.checkSector5Enabled->setChecked( enabled );
			m_Ui.editSector5Start->setText( QString::number( startBearing_deg, 'f', 1 ) );
			m_Ui.editSector5End->setText( QString::number( endBearing_deg, 'f', 1 ) );
			SetManualValue( m_Ui.spinSector5Start, startBearing_deg );
			SetManualValue( m_Ui.spinSector5End, endBearing_deg );
			m_OverlayManager.SetBlankingSector( 5, enabled, startBearing_deg, endBearing_deg );
		}
	}
}

//-----------------------------------------------------------------------------

void tTabSectorBlanking::OnUpdateFeature( tFeatureEnum featureEnum )
{
	tFeatureManager& featureManager = m_pImageClient->GetFeatureManager();

	switch (featureEnum)
	{
    case eFeatureEnum_SectorBlanking:
		{
			const tFeatureSectorBlanking& feature = featureManager.GetFeatureSectorBlanking();
			m_Ui.chckBlankSectors->setChecked( feature.enabled );
			m_Ui.editBlankSectors->setText( QString::number( feature.sectorCount ) + " sectors" );

			// update sector blanking ui
			m_Ui.groupSector0->setEnabled( (feature.enabled == true) && (feature.sectorCount > 0) && (cMaxBlankSectors > 0) );
            m_Ui.groupSector1->setEnabled( (feature.enabled == true) && (feature.sectorCount > 1) && (cMaxBlankSectors > 1) );
            m_Ui.groupSector2->setEnabled( (feature.enabled == true) && (feature.sectorCount > 2) && (cMaxBlankSectors > 2) );
            m_Ui.groupSector3->setEnabled( (feature.enabled == true) && (feature.sectorCount > 3) && (cMaxBlankSectors > 3) );
            m_Ui.groupSector4->setEnabled( (feature.enabled == true) && (feature.sectorCount > 4) && (cMaxBlankSectors > 4) );
            m_Ui.groupSector5->setEnabled( (feature.enabled == true) && (feature.sectorCount > 5) && (cMaxBlankSectors > 5) );
		}
		break;

	default:
		break;
	}
}

//-----------------------------------------------------------------------------
