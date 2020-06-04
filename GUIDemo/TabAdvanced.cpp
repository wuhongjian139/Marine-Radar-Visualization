//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include <cassert>
#include "TabBase.h"
#include "TabAdvanced.h"
#include "QControlUtils.h"
#include "ImageClient.h"
#include "ui_GUIDemo.h"

using namespace Navico::Protocol::NRP;

//-----------------------------------------------------------------------------
// tTabAdvanced Implementation
//-----------------------------------------------------------------------------
tTabAdvanced::tTabAdvanced( Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab )
    : tTabBase( ui, pParent, tab )
{
    ConnectControls( true, *this, tab );
}

//-----------------------------------------------------------------------------
tTabAdvanced::~tTabAdvanced()
{
    ConnectControls( false, *this, m_Tab );
}

//-----------------------------------------------------------------------------
void tTabAdvanced::OnConnect( tImageClient* pImageClient )
{
    tTabBase::OnConnect( pImageClient );
    //m_updateOnSetupExtended = true;
    m_updateOnAdvancedSTCState = true;
}

//-----------------------------------------------------------------------------
void tTabAdvanced::RangeTrim_valueChanged( double value )
{
    m_pImageClient->SetRangeSTCTrim( value );
}

//-----------------------------------------------------------------------------
void tTabAdvanced::RangeRate_valueChanged( int value )
{
    m_pImageClient->SetRangeSTCRate( value );
}

//-----------------------------------------------------------------------------
void tTabAdvanced::SeaTrim_valueChanged( double value )
{
    m_pImageClient->SetSeaSTCTrim( value );
}

//-----------------------------------------------------------------------------
void tTabAdvanced::SeaRate1_valueChanged( int value )
{
    m_pImageClient->SetSeaSTCRate1( value );
}

//-----------------------------------------------------------------------------
void tTabAdvanced::SeaRate2_valueChanged( int value )
{
    m_pImageClient->SetSeaSTCRate2( value );
}

//-----------------------------------------------------------------------------
void tTabAdvanced::RainTrim_valueChanged( double value )
{
    m_pImageClient->SetRainSTCTrim( value );
}

//-----------------------------------------------------------------------------
void tTabAdvanced::RainRate_valueChanged( int value )
{
    m_pImageClient->SetRainSTCRate( value );
}

//-----------------------------------------------------------------------------
void tTabAdvanced::UserMinSNR_valueChanged( double value )
{
    m_pImageClient->SetUserMinSNR( value );
}

//-----------------------------------------------------------------------------
void tTabAdvanced::VideoAperture_valueChanged( double value )
{
    m_pImageClient->SetVideoAperture( value );
}

//-----------------------------------------------------------------------------
void tTabAdvanced::MainBangSuppression_clicked( bool checked )
{
    m_pImageClient->SetMainBangSuppression( checked );
}

//-----------------------------------------------------------------------------
void tTabAdvanced::OnAdvancedSTCStateChanged( const tAdvancedSTCState* pState )
{
    m_Ui.editRangeTrim->setText( QString::number( pState->rangeSTCTrim_dB, 'f', 3 ) );
    m_Ui.editRangeRate->setText( QString::number( pState->rangeSTCRate_dBpDec ) );

    m_Ui.editSeaTrim->setText(   QString::number( pState->seaSTCTrim_dB, 'f', 3 ) );
    m_Ui.editSeaRate1->setText(  QString::number( pState->seaSTCRate1_dBpDec ) );
    m_Ui.editSeaRate2->setText(  QString::number( pState->seaSTCRate2_dBpDec ) );

    m_Ui.editRainTrim->setText(  QString::number( pState->rainSTCTrim_dB, 'f', 3 ) );
    m_Ui.editRainRate->setText(  QString::number( pState->rainSTCRate_dBpDec ) );

    m_Ui.editUserMinSNR->setText(    QString::number( pState->userMinSNR_dB, 'f', 3 ) );
    m_Ui.editVideoAperture->setText( QString::number( pState->videoAperture_dB, 'f', 3 ) );

    if (m_updateOnAdvancedSTCState)
    {
        m_updateOnAdvancedSTCState = false;
        SetManualValue( m_Ui.spinRangeTrim, pState->rangeSTCTrim_dB );
        SetManualValue( m_Ui.spinRangeRate, pState->rangeSTCRate_dBpDec );

        SetManualValue( m_Ui.spinSeaTrim,   pState->seaSTCTrim_dB );
        SetManualValue( m_Ui.spinSeaRate1,  pState->seaSTCRate1_dBpDec );
        SetManualValue( m_Ui.spinSeaRate2,  pState->seaSTCRate2_dBpDec );

        SetManualValue( m_Ui.spinRainTrim,  pState->rainSTCTrim_dB );
        SetManualValue( m_Ui.spinRainRate,  pState->rainSTCRate_dBpDec );

        SetManualValue( m_Ui.spinUserMinSNR,    pState->userMinSNR_dB );
        SetManualValue( m_Ui.spinVideoAperture, pState->videoAperture_dB );
    }
}

//-----------------------------------------------------------------------------
void tTabAdvanced::OnSetupExtendedChanged( const Navico::Protocol::NRP::tSetupExtended* pSetupEx )
{
    m_Ui.checkMainBangSuppression->setChecked( pSetupEx->suppressMainBang != 0 );
}
