//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file TabAdvanced.h
//! 
//! User interface for advanced (lock level 2) radar features.
//-----------------------------------------------------------------------------

#ifndef GUIDEMO_TABADVANCED_H
#define GUIDEMO_TABADVANCED_H

#include <QObject>
#include <NavRadarProtocol.h>
#include <ImageClientObserver.h>
#include "TabBase.h"

//-----------------------------------------------------------------------------
// tTabAdvanced Class
//-----------------------------------------------------------------------------
class tTabAdvanced : public tTabBase
{
    Q_OBJECT

public:
    //-----------------------------------------------------------------------------
    // Constructor, destructor and initialization
    //-----------------------------------------------------------------------------
    tTabAdvanced( Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab );
    ~tTabAdvanced();

    void OnConnect( Navico::Protocol::NRP::tImageClient* pImageClient );

    //-----------------------------------------------------------------------------
    // State Change Interface
    //-----------------------------------------------------------------------------
    void OnSetupExtendedChanged( const Navico::Protocol::NRP::tSetupExtended* pSetupEx );
    void OnAdvancedSTCStateChanged( const Navico::Protocol::NRP::tAdvancedSTCState* pAdvancedSTC );

private slots:
    //-----------------------------------------------------------------------------
    // UI Signal Handling Interface
    //-----------------------------------------------------------------------------
    // slots for UI actions
    void RangeTrim_valueChanged( double value );
    void RangeRate_valueChanged( int value );
    void SeaTrim_valueChanged( double value );
    void SeaRate1_valueChanged( int value );
    void SeaRate2_valueChanged( int value );
    void RainTrim_valueChanged( double value );
    void RainRate_valueChanged( int value );
    void UserMinSNR_valueChanged( double value );
    void VideoAperture_valueChanged( double value );
    void MainBangSuppression_clicked( bool checked );

private:
    //-----------------------------------------------------------------------------
    // Member Fields
    //-----------------------------------------------------------------------------
    //bool m_updateOnSetupExtended;
    bool m_updateOnAdvancedSTCState;
};

//-----------------------------------------------------------------------------

#endif  // inclusion guard
