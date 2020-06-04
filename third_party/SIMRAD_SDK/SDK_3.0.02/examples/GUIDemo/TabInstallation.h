//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file tTabInstallation.h
//! 
//! User interface for radar installation/configuration.
//-----------------------------------------------------------------------------

#ifndef GUIDEMO_TABINSTALLATION_H
#define GUIDEMO_TABINSTALLATION_H

#include <QObject>
#include <NavRadarProtocol.h>
#include <Feature.h>
#include "TabBase.h"

//-----------------------------------------------------------------------------
// tTabInstallation Class
//-----------------------------------------------------------------------------
class tTabInstallation : public tTabBase
{
    Q_OBJECT

public:
    //-----------------------------------------------------------------------------
    // Constructor, destructor and initialization
    //-----------------------------------------------------------------------------
    tTabInstallation( Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab );
    ~tTabInstallation();

    void OnConnect( Navico::Protocol::NRP::tImageClient* pImageClient );

    //-----------------------------------------------------------------------------
    // State Change Interface
    //-----------------------------------------------------------------------------
    void OnConfigurationChanged( Navico::Protocol::NRP::tConfiguration* pConfig );
    void OnUpdateFeature( Navico::Protocol::NRP::tFeatureEnum featureEnum );

private slots:
    //-----------------------------------------------------------------------------
    // UI Signal Handling Interface
    //-----------------------------------------------------------------------------
    // group: Configuration
    void ParkPosition_valueChanged( int value );
    void AntennaHeight_valueChanged( double value );
    void AntennaXOffset_valueChanged( double value );
    void AntennaYOffset_valueChanged( double value );
    void ZeroRange_valueChanged( double value );
    void ZeroBearing_valueChanged( double value );
    void FactoryDefaults_clicked( bool checked );
    void AntennaType_currentIndexChanged( int value );

private:
    //-----------------------------------------------------------------------------
    // Member Fields
    //-----------------------------------------------------------------------------
    bool m_UpdateOnConfiguration;
    int m_antennaTypeIndex;
};

//-----------------------------------------------------------------------------

#endif  // inclusion guard
