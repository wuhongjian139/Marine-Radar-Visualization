//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file MultiRadar.h
//!
//! User interface for handling radars - listing, selecting and unlocking.
//---------------------------------------------------------------------------
#ifndef GUIDEMO_MULTIDEVICE_H
#define GUIDEMO_MULTIDEVICE_H

#include <QMainWindow>
#include <QTimer>
#include <QMutex>

#include <MultiRadarClient.h>

#include "ui_GUIDemo.h"


using namespace Navico::Protocol;

//-----------------------------------------------------------------------------
// tMultiRadar
//-----------------------------------------------------------------------------
class tMultiRadar 
    : public QObject
    , public iRadarListObserver
    , public iUnlockStateObserver
    , public iUnlockKeySupplier
{
    Q_OBJECT

public:
    tMultiRadar( Ui::GUIDemoClass& ui, QObject* pParent = 0 );
    ~tMultiRadar();

    QString GetRadarSelection();      ///< Return the text of the current selection
    QString GetRadarSerialNumber();   ///< Return the serial-number of the selected radar
    unsigned GetRadarInstance();      ///< Return the instance/range selected

    void InitiateUnlock();
    void SetConnectState( bool connected );

signals:
    void ConnectChanged( bool connect );

    //-------------------------------------------------------------------------
public:
    // iRadarListObserver, iUnlockKeySupplier, iUnlockStateObserver - multi-device callbacks
    virtual void UpdateRadarList( const char* pSerialNumber, iRadarListObserver::eAction action );
    virtual int GetUnlockKey( const char* pSerialNumber, const uint8_t* pLockID, unsigned lockIDSize, uint8_t* pUnlockKey, unsigned maxUnlockKeySize );
    virtual void UpdateUnlockState( const char* pSerialNumber, int lockState );

    //-------------------------------------------------------------------------
signals:
    // signals from callbacks
    void UpdateRadarList_signal();
    void UpdateUnlockState_signal( QString serialNumber, int lockState );
    void GetUnlockKey_signal( const char * serialNumber, QString lockID );

private slots:
    // slots for callbacks 
    void MultiRadar_UpdateRadarList();
    void MultiRadar_UpdateUnlockState( QString serialNumber, int lockState );
    void MultiRadar_GetUnlockKey( const char * serialNumber, QString lockID );

    // slots for UI actions
    void MultiRadarConnect_clicked( bool checked );
    void MultiRadarClear_clicked( bool checked );
    void MultiRadarReset_clicked( bool checked );
    void MultiRadarQuery_clicked( bool checked );
    void MultiRadarGetLockID_clicked( bool checked );
    void MultiRadarUnlock_clicked( bool checked );
    void MultiRadarUnlockAll_clicked( bool checked );
    void MultiRadarFlush_clicked( bool checked );

private:
    Ui::GUIDemoClass&  ui;
};

//-----------------------------------------------------------------------------

#endif  // inclusion guard
