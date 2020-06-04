//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include <cassert>
#include <FeatureManager.h>
#include "TabBase.h"
#include "TabInstallation.h"
#include "ImageClient.h"
#include "QControlUtils.h"
#include "ui_GUIDemo.h"

using namespace Navico::Protocol::NRP;

//-----------------------------------------------------------------------------
// tTabInstallation Implementation
//-----------------------------------------------------------------------------
tTabInstallation::tTabInstallation( Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab )
    : tTabBase( ui, pParent, tab )
    , m_antennaTypeIndex( 0 )
{
    ConnectControls( true, *this, tab );
}

//-----------------------------------------------------------------------------
tTabInstallation::~tTabInstallation()
{
    ConnectControls( false, *this, m_Tab );
}

//-----------------------------------------------------------------------------
void tTabInstallation::OnConnect( tImageClient* pImageClient )
{
    tTabBase::OnConnect( pImageClient );
    m_UpdateOnConfiguration = true;
}

//-----------------------------------------------------------------------------
// Group: Configuration
//-----------------------------------------------------------------------------
void tTabInstallation::ParkPosition_valueChanged( int value )
{
    m_pImageClient->SetParkPosition( value );
}

//-----------------------------------------------------------------------------
void tTabInstallation::AntennaHeight_valueChanged( double value )
{
    m_pImageClient->SetAntennaHeight( uint32_t(value*1000.0) );
}

//-----------------------------------------------------------------------------
void tTabInstallation::AntennaXOffset_valueChanged( double value )
{
    m_pImageClient->SetAntennaOffsets( int32_t(value*1000.0), m_Ui.spinAntennaYOffset->value()*1000.0 );
}

//-----------------------------------------------------------------------------
void tTabInstallation::AntennaYOffset_valueChanged( double value )
{
    m_pImageClient->SetAntennaOffsets( m_Ui.spinAntennaXOffset->value()*1000.0, int32_t(value*1000.0) );
}

//-----------------------------------------------------------------------------
void tTabInstallation::ZeroRange_valueChanged( double value )
{
    m_pImageClient->SetZeroRangeOffset( unsigned(value*1000.0) );
}

//-----------------------------------------------------------------------------
void tTabInstallation::ZeroBearing_valueChanged( double value )
{
    m_pImageClient->SetZeroBearingOffset( unsigned(value*10.0) );
}

//-----------------------------------------------------------------------------
void tTabInstallation::FactoryDefaults_clicked( bool /*checked*/ )
{
    m_pImageClient->SetToFactoryDefaults();
}

//-----------------------------------------------------------------------------
void tTabInstallation::AntennaType_currentIndexChanged( int value )
{
    m_pImageClient->SetAntennaType( uint16_t( value ) );
}

//-----------------------------------------------------------------------------
// State Changes
//-----------------------------------------------------------------------------
void tTabInstallation::OnConfigurationChanged( tConfiguration* pConfig )
{
    m_Ui.editParkPosition->setText( QString::number( pConfig->parkPosition_ddeg/10.0 ) );
    m_Ui.editAntennaHeight->setText( QString::number( pConfig->antennaHeight_mm/1000.0, 'f', 3 ) );
    m_Ui.editZeroRange->setText( QString::number( pConfig->zeroRange_mm/1000.0, 'f', 3 ) );
    m_Ui.editZeroBearing->setText( QString::number( pConfig->zeroBearing_ddeg/10.0, 'f', 1 ) );
    m_Ui.editAntennaXOffset->setText( QString::number( pConfig->antennaOffsetX_mm.Get()/1000.0, 'f', 1 ) );
    m_Ui.editAntennaYOffset->setText( QString::number( pConfig->antennaOffsetY_mm.Get()/1000.0, 'f', 1 ) );

    m_antennaTypeIndex = pConfig->antennaType;
    if (m_antennaTypeIndex >= 0 && m_antennaTypeIndex < m_Ui.comboAntennaType->count())
    {
        m_Ui.comboAntennaType->setCurrentIndex( m_antennaTypeIndex );
        m_Ui.editAntennaType->setText( m_Ui.comboAntennaType->currentText() );
    }
    else
    {
        m_Ui.editAntennaType->setText( "unknown" );
    }

    if (m_UpdateOnConfiguration)
    {
        m_UpdateOnConfiguration = false;
        SetManualValue( m_Ui.spinParkPosition, pConfig->parkPosition_ddeg/10 );
        SetManualValue( m_Ui.spinAntennaHeight, pConfig->antennaHeight_mm/1000.0 );
        SetManualValue( m_Ui.spinZeroRange, pConfig->zeroRange_mm/1000.0 );
        SetManualValue( m_Ui.spinZeroBearing, pConfig->zeroBearing_ddeg/10.0 );
        SetManualValue( m_Ui.spinAntennaXOffset, pConfig->antennaOffsetX_mm.Get()/1000.0 );
        SetManualValue( m_Ui.spinAntennaYOffset, pConfig->antennaOffsetY_mm.Get()/1000.0 );
    }
}

void tTabInstallation::OnUpdateFeature( tFeatureEnum featureEnum )
{
    tFeatureManager& featureManager = m_pImageClient->GetFeatureManager();

    switch (featureEnum)
    {
    case eFeatureEnum_SupportedAntennas:
        {
            const tFeatureAntennaTypes& feature = featureManager.GetFeatureSupportedAntennaTypes();
            m_Ui.comboAntennaType->blockSignals( true );
            m_Ui.comboAntennaType->clear();
            for (int i = 0; i < feature.count; ++i)
            {
                QString antennaSize = QString::number( feature.antennaTypes[i].size );
                m_Ui.comboAntennaType->addItem( antennaSize, QVariant( i ) );

                if (m_antennaTypeIndex == i)
                {
                    m_Ui.comboAntennaType->setCurrentIndex( i );
                    m_Ui.editAntennaType->setText( m_Ui.comboAntennaType->currentText() );
                }
            }
            m_Ui.comboAntennaType->blockSignals( false );
            m_Ui.comboAntennaType->setEnabled( m_Ui.comboUseMode->count() > 0 );
        }
        break;

    default:
        break;
    }
}