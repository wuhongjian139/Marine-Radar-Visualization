//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include "GUIDemo.h"
#include "QControlUtils.h"

#include <cassert>
#include <QMessageBox>

#include <algorithm>

#include <NavRadarProtocol.h>

using namespace Navico::Protocol::NRP;

//-----------------------------------------------------------------------------
// Helper Functions
//-----------------------------------------------------------------------------

template< typename Type >
inline void InitStruct( Type* & ptr, unsigned count = 1 )
{
    if (ptr == NULL)
    {
        if (count > 1)
            ptr = new Type[ count ];
        else
            ptr = new Type;
    }

    if (ptr != NULL)
    {
        if (count > 1)
            memset( ptr, 0, count*sizeof(Type) );
        else
            memset( ptr, 0, sizeof(Type) );
    }
}

//-----------------------------------------------------------------------------
//  Helper Functions
//-----------------------------------------------------------------------------
QString ErrorToString( eErrors error )
{
    switch (error)
    {
    case EOK:               return "EOK";
    case ELocked:           return "ELocked";
    case EPending:          return "EPending";
    case ETimedOut:         return "ETimedOut";
    case EBusy:             return "EBusy";
    case EBadSerialNumber:  return "EBadSerialNumber";
    case ENoUnlockKey:      return "ENoUnlockKey";
    case EBadUnlockKey:     return "EBadUnlockKey";
    case EWrongUnlockKey:   return "EWrongUnlockKey";
    case ENotRunning:       return "ENotRunning";
    case EUnknownRadar:     return "EUnknownRadar";
    case ENonStdAddress:    return "ENonStdAddress";
    case ECommsFailure:     return "ECommsFailure";
    case EThreadCreation:   return "EThreadCreation";
    case EBadParameter:     return "EBadParameter";
    case EUnused:           return "EUnused";
	case EBadUnlockLevel:   return "EBadUnlockLevel";
    default:
        return QString::number( error );
    }
}

//-----------------------------------------------------------------------------
// GUIDemo Class Implementation
//-----------------------------------------------------------------------------
GUIDemo::GUIDemo( QWidget* pParent, Qt::WindowFlags flags )
    : QMainWindow( pParent, flags )
    , m_pImageClient( NULL )
    , m_pMode( NULL )
    , m_pSetup( NULL )
    , m_pSetupExtended( NULL )
    , m_pProperties( NULL )
    , m_pConfiguration( NULL )
    , m_pAdvancedSTCState( NULL )
    , m_pGuardZoneAlarms( NULL )
    , m_pRadarError( NULL )
    , m_PixelCellSize_mm( 0 )
    , m_pTargetClient( NULL )
    , m_pTargetAlarmSetup( NULL )
    , m_pTargetProperties( NULL )
    , m_pTargets( NULL )
    , m_pTargetLocations( NULL )
{
    m_pImageClient = new tImageClient();
    m_pTargetClient = new tTargetTrackingClient();
    InitProtocolData();

    // setup UI
    ui.setupUi( this );
    m_pMultiRadar = new tMultiRadar( ui, this );
    m_pScannerInfo = new tScannerInfo( ui, this );
    m_pTabImage = new tTabImage( ui, this, *ui.tabImage );
    m_pTabInstallation = new tTabInstallation( ui, this, *ui.tabInstallation );
    m_pTabAdvanced = new tTabAdvanced( ui, this, *ui.tabAdvanced );
    m_pTabGuardZone = new tTabGuardZone( ui, this, *ui.tabGuardZone, m_OverlayManager );
    m_pTabTargets = new tTabTargets( ui, this, *ui.tabTargets );
    m_pTabFeatures = new tTabFeatures( ui, this, *ui.tabFeatures );
    m_pTabSectorBlanking = new tTabSectorBlanking( ui, this, *ui.tabSectorBlanking, m_OverlayManager );
    m_pTabBScan = new tTabBScan( ui, m_pTargetLocations, cMaxTargets, this, m_OverlayManager );
    m_pTabPPI = new tTabPPI( ui, m_pTargetLocations, cMaxTargets, this, m_OverlayManager );

    MakeConnections( true );
}

//-----------------------------------------------------------------------------
GUIDemo::~GUIDemo()
{
    MakeConnections( false );

    DisconnectTargetClient();
    DisconnectImageClient();

    delete m_pTabPPI;
    delete m_pTabBScan;
    delete m_pTabSectorBlanking;
    delete m_pTabFeatures;
    delete m_pTabTargets;
    delete m_pTabGuardZone;
    delete m_pTabAdvanced;
    delete m_pTabInstallation;
    delete m_pTabImage;
    delete m_pScannerInfo;
    delete m_pMultiRadar;

    // cleanup target-tracking
    delete m_pTargetClient;
    delete m_pTargetAlarmSetup;
    delete m_pTargetProperties;
    delete [] m_pTargets;
    delete [] m_pTargetLocations;

    // cleanup image handlling
    delete m_pImageClient;
    delete m_pMode;
    delete m_pSetup;
    delete m_pSetupExtended;
    delete m_pProperties;
    delete m_pConfiguration;
    delete m_pAdvancedSTCState;
    delete m_pRadarError;
    delete [] m_pGuardZoneAlarms;
}

//-----------------------------------------------------------------------------
void GUIDemo::InitProtocolData()
{
    // setup image protocol data structures
    InitStruct( m_pMode );
    InitStruct( m_pSetup );
    InitStruct( m_pSetupExtended );
    InitStruct( m_pProperties );
    InitStruct( m_pConfiguration );
    InitStruct( m_pAdvancedSTCState );
    InitStruct( m_pRadarError );
    InitStruct( m_pGuardZoneAlarms, cMaxGuardZones );

    // setup trget-tracking protocol data structures
    InitStruct( m_pTargetAlarmSetup );
    InitStruct( m_pTargetProperties );
    InitStruct( m_pTargets, 1+cMaxTargets );
    InitStruct( m_pTargetLocations, cMaxTargets );
}

//-----------------------------------------------------------------------------
void GUIDemo::MakeConnections( bool connect )
{
    // connections for user requested connect/disconnect
    Connect( connect, m_pMultiRadar, SIGNAL(ConnectChanged(bool)),       this, SLOT(MultiRadar_ConnectChanged(bool)) );

    // connections for updated state data
    Connect( connect, this, SIGNAL(UpdateMode_signal()),                 this, SLOT(UpdateMode_slot()),                     Qt::QueuedConnection );
    Connect( connect, this, SIGNAL(UpdateProperties_signal()),           this, SLOT(UpdateProperties_slot()),               Qt::QueuedConnection );
    Connect( connect, this, SIGNAL(UpdateConfiguration_signal()),        this, SLOT(UpdateConfiguration_slot()),            Qt::QueuedConnection );
    Connect( connect, this, SIGNAL(UpdateSetup_signal()),                this, SLOT(UpdateSetup_slot()),                    Qt::QueuedConnection );
    Connect( connect, this, SIGNAL(UpdateSetupExtended_signal()),        this, SLOT(UpdateSetupExtended_slot()),            Qt::QueuedConnection );
    Connect( connect, this, SIGNAL(UpdateAdvancedState_signal()),        this, SLOT(UpdateAdvancedState_slot()),            Qt::QueuedConnection );
    Connect( connect, this, SIGNAL(UpdateGuardZoneAlarm_signal(unsigned)), this, SLOT(UpdateGuardZoneAlarm_slot(unsigned)), Qt::QueuedConnection );
    Connect( connect, this, SIGNAL(UpdateRadarError_signal()),           this, SLOT(UpdateRadarError_slot()),               Qt::QueuedConnection );
    Connect( connect, this, SIGNAL(UpdateFeature_signal(unsigned)),  this, SLOT(UpdateFeature_slot(unsigned)),      Qt::QueuedConnection );

    // connections for updated target data
    Connect( connect, this, SIGNAL(UpdateTargetAlarmSetup_signal()),     this, SLOT(UpdateTargetAlarmSetup_slot()),         Qt::QueuedConnection );
    Connect( connect, this, SIGNAL(UpdateTargetProperties_signal()),     this, SLOT(UpdateTargetProperties_slot()),         Qt::QueuedConnection );
    Connect( connect, this, SIGNAL(UpdateNavigationState_signal()),      this, SLOT(UpdateNavigationState_slot()),          Qt::QueuedConnection );
    Connect( connect, this, SIGNAL(UpdateTargetTarget_signal(unsigned)), this, SLOT(UpdateTargetTarget_slot(unsigned)),     Qt::QueuedConnection );

    // connections for target acquire
    Connect( connect, m_pTabBScan, SIGNAL(AcquireTarget(double,double)), this, SLOT(TargetAcquire(double,double)) );
    Connect( connect, m_pTabPPI,   SIGNAL(AcquireTarget(double,double)), this, SLOT(TargetAcquire(double,double)) );
}

//-----------------------------------------------------------------------------
void GUIDemo::MultiRadar_ConnectChanged( bool connect )
{
    if (connect)
    {
        QString serialNumber = m_pMultiRadar->GetRadarSerialNumber();
        unsigned instance = m_pMultiRadar->GetRadarInstance();

        eErrors imageError  = (eErrors) ConnectImageClient( serialNumber, instance );
        eErrors targetError = (eErrors) ConnectTargetClient( serialNumber, instance );
        if (imageError != EOK || targetError != EOK)
        {
            if (imageError  == EOK) DisconnectImageClient();
            if (targetError == EOK) DisconnectTargetClient();

            if (imageError == ELocked || targetError == ELocked)
            {
                m_pMultiRadar->SetConnectState( false );

                if (QMessageBox::warning( this, "Unlock Radar?", "Radar is locked - would you like to unlock the radar?",
                    QMessageBox::Yes|QMessageBox::No, QMessageBox::Yes ) == QMessageBox::Yes)
                {
                    m_pMultiRadar->InitiateUnlock();
                }
            }
            else
            {
                QString err;
                QString msg = "Initialisation of ";
                if (imageError && targetError)
                {
                    msg += "Image and Target-Tracking Clients";
                    err = "errors " + ErrorToString(imageError) + " and " + ErrorToString(targetError) + " resp";  
                }
                else if (imageError)
                {
                    msg += "Image Client";
                    err = "error " + ErrorToString(imageError);
                }
                else if (targetError)
                {
                    msg += "Target-Tracking Client";
                    err = "error " + ErrorToString(targetError);
                }
                msg += " for Radar \"" + m_pMultiRadar->GetRadarSelection() + "\" failed with " + err;

                QMessageBox::critical( this, "Error", msg );

                m_pMultiRadar->SetConnectState( false );
            }
        }
        else
        {
			m_OverlayManager.Clear();

            // client services connected ok - initialise all dependent user interfaces
            m_pScannerInfo->OnConnect( m_pImageClient );
            m_pTabImage->OnConnect( m_pImageClient );
            m_pTabInstallation->OnConnect( m_pImageClient );
            m_pTabAdvanced->OnConnect( m_pImageClient );
            m_pTabGuardZone->OnConnect( m_pImageClient );
            m_pTabTargets->OnConnect( m_pTargetClient );
            m_pTabFeatures->OnConnect( m_pImageClient );
			m_pTabSectorBlanking->OnConnect( m_pImageClient );
            m_pTabBScan->OnConnect();
            m_pTabPPI->OnConnect();

			// Send the feature request message
			m_pImageClient->QueryAll();
        }
    }
    else
    {
        // now disconnect the client services
        DisconnectTargetClient();
        DisconnectImageClient();

        // first disconnect all dependent user interfaces
        m_pScannerInfo->OnDisconnect();
        m_pTabImage->OnDisconnect();
        m_pTabInstallation->OnDisconnect();
        m_pTabAdvanced->OnDisconnect();
        m_pTabGuardZone->OnDisconnect();
        m_pTabTargets->OnDisconnect();
        m_pTabFeatures->OnDisconnect();
		m_pTabSectorBlanking->OnDisconnect();
        m_pTabBScan->OnDisconnect();
        m_pTabPPI->OnDisconnect();

        // zero data for next time we connect
        InitProtocolData();
    }
}


//-----------------------------------------------------------------------------
//  Image Handling
//-----------------------------------------------------------------------------
int GUIDemo::ConnectImageClient( const QString& serialNumber, unsigned instance )
{
    int error = Navico::Protocol::EOK+1;
    if (m_pImageClient)
    {
        m_pImageClient->AddStateObserver( this );
        m_pImageClient->AddSpokeObserver( this );
		m_pImageClient->AddFeatureObserver( this );
        //m_pImageClient->SetAutoSendClientWatchdog( true );

        m_ForceSetup = true;
        m_ForceAdvancedSTCState = true;

        error = m_pImageClient->Connect( serialNumber.toLatin1().data(), instance );
    }
    return error;
}

//-----------------------------------------------------------------------------
void GUIDemo::DisconnectImageClient()
{
    if (m_pImageClient) 
    {
        m_pImageClient->Disconnect();
        m_pImageClient->RemoveStateObserver( this );
        m_pImageClient->RemoveSpokeObserver( this );
    }
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateMode( const tMode* pMode )
{
    if (memcmp( pMode, m_pMode, sizeof(tMode) ) != 0)
    {
        *m_pMode = *pMode;
        emit UpdateMode_signal();
    }
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateSetup( const tSetup* pSetup )
{
    if (m_ForceSetup || memcmp( pSetup, m_pSetup, sizeof(tSetup) ) != 0)
    {
        m_ForceSetup = false;
        *m_pSetup = *pSetup;
        emit UpdateSetup_signal();
    }
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateSetupExtended( const tSetupExtended* pSetupExtended )
{
    if (memcmp( pSetupExtended, m_pSetupExtended, sizeof(tSetupExtended) ) != 0)
    {
        *m_pSetupExtended = *pSetupExtended;
        emit UpdateSetupExtended_signal();
    }
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateProperties( const tProperties* pProperties )
{
    if (memcmp( pProperties, m_pProperties, sizeof(tProperties) ) != 0)
    {
        *m_pProperties = *pProperties;
        emit UpdateProperties_signal();
    }
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateConfiguration( const tConfiguration* pConfiguration )
{
    if (memcmp( pConfiguration, m_pConfiguration, sizeof(tConfiguration) ) != 0)
    {
        *m_pConfiguration = *pConfiguration;
        emit UpdateConfiguration_signal();
    }
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateSpoke( const Spoke::t9174Spoke* pSpoke )
{
    m_PixelCellSize_mm = Spoke::GetPixelCellSize_mm( pSpoke->header );
    m_pTabBScan->OnUpdateSpoke( pSpoke );
    m_pTabPPI->OnUpdateSpoke( pSpoke );
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateAdvancedState( const tAdvancedSTCState* pState )
{
    if (m_ForceAdvancedSTCState || memcmp( pState, m_pAdvancedSTCState, sizeof(tAdvancedSTCState) ) != 0)
    {
        m_ForceAdvancedSTCState = false;
        *m_pAdvancedSTCState = *pState;
        emit UpdateAdvancedState_signal();
    }
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateFeature( const tFeatureEnum* pFeature )
{
    if (pFeature != 0)
    {
        emit UpdateFeature_signal(*pFeature);
    }
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateGuardZoneAlarm( const tGuardZoneAlarm* pAlarm )
{
    unsigned zone = pAlarm->zone;
    if (zone < cMaxGuardZones)
    {
        m_pGuardZoneAlarms[ zone ] = *pAlarm;
        emit UpdateGuardZoneAlarm_signal( zone );
    }
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateRadarError( const tRadarError* pError )
{
    // NOTE: this simplification may overwrite a previous error that hasn't yet been reported
    *m_pRadarError = *pError;
    emit UpdateRadarError_signal();
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateMode_slot()
{
    m_pScannerInfo->OnModeChanged( m_pMode );
    m_pTabImage->OnModeChanged( m_pMode );
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateProperties_slot()
{
    m_pScannerInfo->OnPropertiesChanged( m_pProperties );
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateConfiguration_slot()
{
    m_pTabImage->OnConfigurationChanged( m_pConfiguration );
    m_pTabInstallation->OnConfigurationChanged( m_pConfiguration );
    m_pTabSectorBlanking->OnConfigurationChanged( m_pConfiguration );
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateSetup_slot()
{
    m_pScannerInfo->OnSetupChanged( m_pSetup );
    m_pTabImage->OnSetupChanged( m_pSetup );
    m_pTabGuardZone->OnSetupChanged( m_pSetup );
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateSetupExtended_slot()
{
    m_pTabImage->OnSetupExtendedChanged( m_pSetupExtended );
    m_pTabAdvanced->OnSetupExtendedChanged( m_pSetupExtended );
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateAdvancedState_slot()
{
    m_pTabAdvanced->OnAdvancedSTCStateChanged( m_pAdvancedSTCState );
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateGuardZoneAlarm_slot( unsigned zone )
{
    m_pTabGuardZone->OnGuardZoneAlarmChanged( zone, &m_pGuardZoneAlarms[ zone ] );
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateRadarError_slot()
{
    m_pScannerInfo->OnRadarErrorChanged( m_pRadarError );
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateFeature_slot(unsigned feature )
{
	m_pTabImage->OnUpdateFeature( static_cast<tFeatureEnum>(feature) );
	m_pTabFeatures->OnUpdateFeature( static_cast<tFeatureEnum>(feature) );
	m_pTabSectorBlanking->OnUpdateFeature( static_cast<tFeatureEnum>(feature) );
    m_pTabInstallation->OnUpdateFeature( static_cast<tFeatureEnum>(feature) );
}


//-----------------------------------------------------------------------------
//  Target Tracking Handling
//-----------------------------------------------------------------------------
int GUIDemo::ConnectTargetClient( const QString& serialNumber, unsigned instance )
{
    int error = Navico::Protocol::EOK+1;
    if (m_pTargetClient)
    {
        m_pTargetClient->AddStateObserver( this );
        m_pTargetClient->AddTargetTrackingObserver( this );

        m_ForceTargetAlarmSetup = true;
        m_ForceTargetProperties = true;

        error = m_pTargetClient->Connect( serialNumber.toLatin1().data(), instance );
    }
    return error;
}

//-----------------------------------------------------------------------------
void GUIDemo::DisconnectTargetClient()
{
    if (m_pTargetClient) 
    {
        m_pTargetClient->RemoveStateObserver( this );
        m_pTargetClient->RemoveTargetTrackingObserver( this );
        m_pTargetClient->Disconnect();
    }
}

//-----------------------------------------------------------------------------
void GUIDemo::TargetAcquire( double sample, double degrees )
{
    if (m_PixelCellSize_mm > 0)
    {
        unsigned range = (sample * m_PixelCellSize_mm)/1000 + 0.5;
        m_pTargetClient->Acquire( 0, range, int32_t(degrees + 0.5), NRP::eRelative );
    }
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateAlarmSetup( const tTargetTrackingAlarmSetup *pAlarmSetup )
{
    if (m_ForceTargetAlarmSetup || memcmp( pAlarmSetup, m_pTargetAlarmSetup, sizeof(tTargetTrackingAlarmSetup) ) != 0)
    {
        m_ForceTargetAlarmSetup = false;
        *m_pTargetAlarmSetup = *pAlarmSetup;
        emit UpdateTargetAlarmSetup_signal();
    }
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateProperties( const tTargetTrackingProperties *pProperties )
{
    if (m_ForceTargetProperties || memcmp( pProperties, m_pTargetProperties, sizeof(tTargetTrackingProperties) ) != 0)
    {
        m_ForceTargetProperties = false;
        *m_pTargetProperties = *pProperties;
        emit UpdateTargetProperties_signal();
    }
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateNavigation(const NRP::tNavigationState* pNavigationState )
{
    if (m_ForceNavigationState || memcmp(pNavigationState, m_pNavigationState, sizeof(tNavigationState)) != 0)
    {
        m_ForceNavigationState = false;
        *m_pNavigationState = *pNavigationState;
        emit UpdateNavigationState_signal();
    }
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateTarget( const tTrackedTarget *pTarget )
{
    unsigned index = std::max( 0, pTarget->serverTargetID );

    if( index > cMaxTargets)
        index = 0;

    m_pTargets[ index ] = *pTarget;
    if (index > 0 && m_PixelCellSize_mm > 0)
    {
        tTargetLocation* pLoc = &m_pTargetLocations[ index-1 ];
        uint32_t state = pTarget->targetState;

        pLoc->isValid = false;
        if (pTarget->targetValid && state <= 3)
        {
            pLoc->sample = (pTarget->infoRelative.distance_m*1000.0 / m_PixelCellSize_mm);
            pLoc->degrees = pTarget->infoRelative.bearing_ddeg / 10.0;
            pLoc->isValid = true;
        }
    }
    emit UpdateTargetTarget_signal( index );
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateTargetAlarmSetup_slot()
{
    m_pTabTargets->OnTTAlarmSetupChanged( m_pTargetAlarmSetup );
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateTargetProperties_slot()
{
    m_pTabTargets->OnTTPropertiesChanged( m_pTargetProperties );
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateNavigationState_slot()
{
}

//-----------------------------------------------------------------------------
void GUIDemo::UpdateTargetTarget_slot( unsigned target )
{
    m_pTabTargets->OnTrackedTargetChanged( target, &m_pTargets[target] );
}
