//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file TabImage.h
//!
//! User interface for radar image control and state.
//---------------------------------------------------------------------------

#ifndef GUIDEMO_TABIMAGE_H
#define GUIDEMO_TABIMAGE_H

#include <QObject>
#include <NavRadarProtocol.h>
#include <Feature.h>
#include "TabBase.h"

//-----------------------------------------------------------------------------
// tTabImage Class
//-----------------------------------------------------------------------------
class tTabImage : public tTabBase
{
    Q_OBJECT

public:
    //-----------------------------------------------------------------------------
    // Constructor and initialization
    //-----------------------------------------------------------------------------
    tTabImage( Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab );
    ~tTabImage();
    void OnConnect( Navico::Protocol::NRP::tImageClient* pImageClient );

    //-----------------------------------------------------------------------------
    // State Change Interface
    //-----------------------------------------------------------------------------
    void OnModeChanged( const Navico::Protocol::NRP::tMode* pMode );
    void OnSetupChanged( const Navico::Protocol::NRP::tSetup* pSetup );
    void OnSetupExtendedChanged( const Navico::Protocol::NRP::tSetupExtended* pSetupEx );
    void OnConfigurationChanged( const Navico::Protocol::NRP::tConfiguration* pConfig );
    void OnUpdateFeature( Navico::Protocol::NRP::tFeatureEnum featureEnum );

private slots:
    //-----------------------------------------------------------------------------
    // UI Signal Handling Interface
    //-----------------------------------------------------------------------------
    // group: Query
    void QueryAll_clicked( bool checked );
    void QueryMode_clicked( bool checked );
    void QuerySetup_clicked( bool checked );
    void QueryProperties_clicked( bool checked );
    void QueryConfiguration_clicked( bool checked );
    void QueryAdvanced_clicked( bool checked );
	void QueryFeatures_clicked( bool checked );

    // group: Use Mode
    void UseMode_currentIndexChanged( int index );

    // group: Miscellaneous
    void FastScan_currentIndexChanged( int index );
    void RPM_valueChanged( int value );
    void LEDs_valueChanged( int value );
    void IRLevel_valueChanged( int value );
    void LocalIR_valueChanged( int value );
    void BeamSharpening_valueChanged( int value );
    void TargetBoost_valueChanged( int value );
    void TargetStretch_valueChanged( int value );
    void TargetStretch_clicked( bool checked );

    // group: Sensitivity
    void STCCurveType_currentIndexChanged( int index );
    void Gain_valueChanged( int value );
    void Gain_currentIndexChanged( int index );
    void Rain_valueChanged( int value );
    void FTC_valueChanged( int value );
    void SeaClutter_valueChanged( int value );
    void SeaClutter_currentIndexChanged( int index );
    void SeaFlags_clicked( bool checked );
    void SeaAuto_valueChanged( int value );
    void Sea_valueChanged( int value );
    void Sea_currentIndexChanged( int index );
    void SideLobe_valueChanged( int value );
    void SideLobe_currentIndexChanged( int index );
    void NoiseReject_valueChanged( int value );

    // group Pulse
    void AutoTune_clicked( bool checked );
    void CoarseTune_valueChanged( int value );
    void FineTune_valueChanged( int value );

    // group: TimedTransmit
    void TimedTxMode_clicked( bool checked );
    void TimedTransmit_valueChanged( int value );
    void TimedStandby_valueChanged( int value );

private:
    void UpdateUseMode();

    //-----------------------------------------------------------------------------
    // Member Fields
    //-----------------------------------------------------------------------------
    bool m_UpdateOnSetup;
    bool m_UpdateOnSetupExt;
    bool m_UpdateOnConfiguration;
};

//-----------------------------------------------------------------------------

#endif  // inclusion guard
