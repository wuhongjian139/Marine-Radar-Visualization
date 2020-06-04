//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file TabFeatures.h
//!
//! User interface for radar feature control and state.
//---------------------------------------------------------------------------

#ifndef GUIDEMO_TABFEATURES_H
#define GUIDEMO_TABFEATURES_H

#include <QObject>
#include <NavRadarProtocol.h>
#include <Feature.h>
#include "TabBase.h"

//-----------------------------------------------------------------------------
// tTabFeatures Class
//-----------------------------------------------------------------------------
class tTabFeatures : public tTabBase
{
    Q_OBJECT

public:
    //-----------------------------------------------------------------------------
    // Constructor, destructor and initialization
    //-----------------------------------------------------------------------------
    tTabFeatures( Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab );
    ~tTabFeatures();
    void OnConnect( Navico::Protocol::NRP::tImageClient* pImageClient );
    void OnUpdateFeature( Navico::Protocol::NRP::tFeatureEnum featureEnum );

private:
    void ResetToDefaults();

    //-----------------------------------------------------------------------------
    // Member Fields
    //-----------------------------------------------------------------------------
};

//-----------------------------------------------------------------------------

#endif  // include guard
