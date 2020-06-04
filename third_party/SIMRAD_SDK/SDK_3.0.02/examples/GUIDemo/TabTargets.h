//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file TabTargets.h
//!
//! User interface for target tracking.
//-----------------------------------------------------------------------------

#ifndef GUIDEMO_TABTARGETS_H
#define GUIDEMO_TABTARGETS_H

#include <QObject>
#include "TabBase.h"

namespace Navico
{
    namespace Protocol
	{
        namespace NRP
		{
            class tTargetTrackingClient;
            struct tTargetTrackingAlarmSetup;
            struct tTargetTrackingProperties;
            struct tTrackedTarget;
        }
    }
}

//-----------------------------------------------------------------------------
//  tTabTargets Class
//-----------------------------------------------------------------------------
class tTabTargets : public tTabBase
{
    Q_OBJECT

public:
    //-----------------------------------------------------------------------------
    // Type Definitions
    //-----------------------------------------------------------------------------
    typedef QList< int > tServerIDs;
    enum eTargetFields
    {
        TField_ServerID,
        TField_ClientID,
        TField_State,
        TField_RelRange,
        TField_RelBearing,
        TField_RelCourse,
        TField_RelSpeed,
        TField_CPA,
        TField_TCPA,
        cMaxTargetFields
    };

    //-----------------------------------------------------------------------------
    // Constants
    //-----------------------------------------------------------------------------
    static const unsigned cMaxTargets = 10;

	//-----------------------------------------------------------------------------
    // Constructor, destructor and initialization
    //-----------------------------------------------------------------------------
    tTabTargets( Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab );
    ~tTabTargets();

    void OnConnect( Navico::Protocol::NRP::tTargetTrackingClient* pTargetTrackingClient );
    void OnDisconnect();

    //-----------------------------------------------------------------------------
    // State Change Interface
    //-----------------------------------------------------------------------------
    void OnTTAlarmSetupChanged( const Navico::Protocol::NRP::tTargetTrackingAlarmSetup* );
    void OnTTPropertiesChanged( const Navico::Protocol::NRP::tTargetTrackingProperties* );
    void OnTrackedTargetChanged( unsigned targetIndex, const Navico::Protocol::NRP::tTrackedTarget* );

private slots:
    //-----------------------------------------------------------------------------
    // UI Signal Handling Interface
    //-----------------------------------------------------------------------------
    void DangerZoneDist_valueChanged( int value );
    void DangerZoneTime_valueChanged( int value );
    void TargetsQueryAll_clicked( bool checked );
    void TargetsQuerySetup_clicked( bool checked );
    void TargetsQueryTargets_clicked( bool checked );
    void CancelAll_clicked( bool checked );
    void CancelSelection_clicked( bool checked );
    void CancelDisplay_clicked( bool checked );
    void Table_itemSelectionChanged();

private:
    //-----------------------------------------------------------------------------
    // Private Functions
    //-----------------------------------------------------------------------------
    void TabTargetSetFieldText( unsigned targetID, eTargetFields field, const QString& text );
    tServerIDs GetSelectedTargets();

    //-----------------------------------------------------------------------------
    // Member Fields
    //-----------------------------------------------------------------------------
    Navico::Protocol::NRP::tTargetTrackingClient*   m_pTargetTrackingClient;
    bool                                            m_UpdateAlarmSetupControls;
};

//-----------------------------------------------------------------------------

#endif  // inclusion guard
