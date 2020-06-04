//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file TabSectorBlanking.h
//! 
//-----------------------------------------------------------------------------
#ifndef GUIDEMO_TABSECTORBLANKING_H
#define GUIDEMO_TABSECTORBLANKING_H

#include <QObject>
#include <QPainter>
#include <NavRadarProtocol.h>
#include <Feature.h>
#include "TabBase.h"
#include "OverlayManager.h"

//-----------------------------------------------------------------------------
// tTabSectorBlanking Class
//-----------------------------------------------------------------------------
class tTabSectorBlanking : public tTabBase
{
    Q_OBJECT

public:
    //-----------------------------------------------------------------------------
    // Constructor and initialization
    //-----------------------------------------------------------------------------
    tTabSectorBlanking( Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab, tOverlayManager& overlayManager );
    ~tTabSectorBlanking();

    void OnConnect( Navico::Protocol::NRP::tImageClient* pImageClient );
    void OnDisconnect();

    //-----------------------------------------------------------------------------
    // State Changes
    //-----------------------------------------------------------------------------
    void OnConfigurationChanged( const Navico::Protocol::NRP::tConfiguration* pConfig );
    void OnUpdateFeature( Navico::Protocol::NRP::tFeatureEnum featureEnum );

private slots:
    //-----------------------------------------------------------------------------
    // UI Signal Handling Interface
    //-----------------------------------------------------------------------------
    // group: Configuration
    void Sector0Start_valueChanged( double value );
    void Sector0End_valueChanged( double value );
    void Sector1Start_valueChanged( double value );
    void Sector1End_valueChanged( double value );
    void Sector2Start_valueChanged( double value );
    void Sector2End_valueChanged( double value );
    void Sector3Start_valueChanged( double value );
    void Sector3End_valueChanged( double value );
    void Sector4Start_valueChanged( double value );
    void Sector4End_valueChanged( double value );
    void Sector5Start_valueChanged( double value );
    void Sector5End_valueChanged( double value );

    void Sector0Enabled_clicked( bool checked );
    void Sector1Enabled_clicked( bool checked );
    void Sector2Enabled_clicked( bool checked );
    void Sector3Enabled_clicked( bool checked );
    void Sector4Enabled_clicked( bool checked );
    void Sector5Enabled_clicked( bool checked );

private:
    //-----------------------------------------------------------------------------
    // Private Functions
    //-----------------------------------------------------------------------------
    void UpdateSector( unsigned sector, bool enabled, double start, double end );

    //-----------------------------------------------------------------------------
    // Member Fields
    //-----------------------------------------------------------------------------
    bool m_UpdateOnConfiguration;
	tOverlayManager& m_OverlayManager;
};

//-----------------------------------------------------------------------------

#endif  // include guard
