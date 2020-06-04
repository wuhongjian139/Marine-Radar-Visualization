//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include "MultiRadar.h"
#include "QControlUtils.h"
#include "ui_Registration.h"

#include <cassert>
#include <QMessageBox>
#include <QString>


using namespace Navico::Protocol;

//-----------------------------------------------------------------------------
//  Helpers
//-----------------------------------------------------------------------------
QString ToHexString( const void * pData, int dataSize )
{
    QString str;
    for (int i = 0; i < dataSize; ++i)
    {
        str += QString( "%0" ).arg( ((const uint8_t*)pData)[ i ], 2, 16, QChar('0') );
    }
    return str;
}

//-----------------------------------------------------------------------------
int FromHexString( const QString & hexText, void * pData, int dataSize )
{
    int len = hexText.length();
    if (len <= 0 || (len & 1) != 0 || (len >>= 1) > dataSize)
        return -1;

    for (int i = 0; i < len; ++i)
    {
        bool ok = false;
        ((uint8_t*)pData)[ i ] = hexText.mid( 2*i, 2 ).toInt( &ok, 16 );
        if (!ok)
            return -2;
    }
    return len;
}


//-----------------------------------------------------------------------------
//  tMultiRadar Implementation
//-----------------------------------------------------------------------------
tMultiRadar::tMultiRadar( Ui::GUIDemoClass& myUI, QObject* pParent )
    : QObject( pParent )
    , ui( myUI )
{
    Connect( true, this, SIGNAL(UpdateRadarList_signal()), this, SLOT(MultiRadar_UpdateRadarList()), Qt::QueuedConnection );
    Connect( true, this, SIGNAL(UpdateUnlockState_signal(QString,int)), this, SLOT(MultiRadar_UpdateUnlockState(QString,int)), Qt::QueuedConnection );
    Connect( true, this, SIGNAL(GetUnlockKey_signal(const char *,QString)), this, SLOT(MultiRadar_GetUnlockKey(const char *,QString)), Qt::QueuedConnection );

    ConnectControls( true, *this, *ui.groupMultiRadar );

    tMultiRadarClient* pClient = tMultiRadarClient::GetInstance();
    pClient->AddRadarListObserver( this );
    pClient->AddUnlockStateObserver( this );
    pClient->SetUnlockKeySupplier( this );
    pClient->Connect();
    pClient->QueryRadars();
}

//-----------------------------------------------------------------------------
tMultiRadar::~tMultiRadar()
{
    ConnectControls( false, *this, *ui.groupMultiRadar );

    tMultiRadarClient* pClient = tMultiRadarClient::GetInstance();
    pClient->Disconnect();
    pClient->SetUnlockKeySupplier( NULL );
    pClient->RemoveUnlockStateObserver( this );
    pClient->RemoveRadarListObserver( this );
}

//-----------------------------------------------------------------------------
QString tMultiRadar::GetRadarSelection()
{
    return ui._comboMultiRadarSelect->currentText();
}

//-----------------------------------------------------------------------------
QString tMultiRadar::GetRadarSerialNumber()
{
    if (ui._comboMultiRadarSelect->count() > 0)
        return ui._comboMultiRadarSelect->itemData( ui._comboMultiRadarSelect->currentIndex() ).toStringList()[ 0 ];
    return QString();
}

//-----------------------------------------------------------------------------
unsigned tMultiRadar::GetRadarInstance()
{
    if (ui._comboMultiRadarSelect->count() > 0)
        return ui._comboMultiRadarSelect->itemData( ui._comboMultiRadarSelect->currentIndex() ).toStringList()[ 1 ].toUInt();
    return 0;
}

//-----------------------------------------------------------------------------
void tMultiRadar::InitiateUnlock()
{
    MultiRadarUnlock_clicked( true );
}

//-----------------------------------------------------------------------------
void tMultiRadar::SetConnectState( bool connected )
{
    ui.pushMultiRadarConnect->setChecked( connected );
}

//-----------------------------------------------------------------------------
// Observer Callbacks and Handling
//-----------------------------------------------------------------------------
void tMultiRadar::UpdateRadarList( const char* /*pSerialNumber*/, iRadarListObserver::eAction /*action*/ )
{
    emit UpdateRadarList_signal();
}

//-----------------------------------------------------------------------------
void tMultiRadar::MultiRadar_UpdateRadarList()
{
    int currIndex = 0;
    QString currSerialNumber = ui._comboMultiRadarSelect->currentText();
    ui._comboMultiRadarSelect->clear();

    const unsigned cMaxRadars = 8;
    char radars[ cMaxRadars ][ MAX_SERIALNUMBER_SIZE ];

    unsigned numRadars = tMultiRadarClient::GetInstance()->GetRadars( radars, cMaxRadars );
    if (numRadars > 0)
    {
        if (numRadars > cMaxRadars) numRadars = cMaxRadars;
        for (unsigned i = 0; i < numRadars; ++i)
        {
            int numImageServices = tMultiRadarClient::GetInstance()->GetImageStreamCount( radars[i] );
            if (numImageServices > 0)
            {
                QString serialNumber( radars[ i ] );
                if (serialNumber == currSerialNumber)
                {
                    currIndex = i;
                }
                for (int i = 0; i < numImageServices; ++i)
                {
                    QStringList userData;
                    userData << serialNumber << QString::number( i );

                    QString itemText = serialNumber;
                    if (numImageServices > 1)
                    {
                        itemText += QString( " " ) + QChar( 'A'+i );
                    }
                    ui._comboMultiRadarSelect->addItem( itemText, userData );
                }
            }
        }
        ui._comboMultiRadarSelect->setCurrentIndex( currIndex );
    }
    else
    {
        ui._comboMultiRadarSelect->clearEditText();
    }
}

//-----------------------------------------------------------------------------
int tMultiRadar::GetUnlockKey( const char * pSerialNumber, const uint8_t * pLockID, unsigned lockIDSize, uint8_t * /*pUnlockKey*/, unsigned /*maxUnlockKeySize*/ )
{
	// Create a local serial number and copy content.
	size_t length = strlen( pSerialNumber ) + 1;
	char *pLocalSerialNumber = new char[length];
	memcpy( pLocalSerialNumber, pSerialNumber, length );

	emit GetUnlockKey_signal( pLocalSerialNumber, ToHexString( pLockID, lockIDSize ) );

    // can't return an unlock key immediately because we need to prompt the user
    return -1;
}

//-----------------------------------------------------------------------------
void tMultiRadar::MultiRadar_GetUnlockKey( const char * pSerialNumber, QString lockID )
{
    QWidget* pParent = dynamic_cast< QWidget* >( parent() );
    assert( pParent );

    QDialog* pDialog = new QDialog( pParent );
    assert( pDialog );

    Ui::RegistrationDialog uiReg;
    uiReg.setupUi( pDialog );
    uiReg.textLockID->setPlainText( lockID );
    pDialog->setWindowTitle( QString("Radar - ") + pSerialNumber );
    int result = pDialog->exec();
    QString unlockKey = uiReg.textUnlockKey->toPlainText();
    delete pDialog;

    if (result)
    {
        uint8_t data[ MAX_UNLOCKKEY_SIZE ];
        unlockKey.replace( "\\s+", "" );
        int len = FromHexString( unlockKey, data, sizeof(data) );
        if (len > 0)
        {
            tMultiRadarClient::GetInstance()->SetUnlockKey( pSerialNumber, data, len );
        }
        else
        {
            QMessageBox::critical( pParent, "Error", "Invalid unlock key entered" );
        }
    }

	// Free the local serial number
	delete[] pSerialNumber;
}

//-----------------------------------------------------------------------------
void tMultiRadar::UpdateUnlockState( const char* pSerialNumber, int lockState )
{
    emit UpdateUnlockState_signal( pSerialNumber, lockState );
}

//-----------------------------------------------------------------------------
void tMultiRadar::MultiRadar_UpdateUnlockState( QString serialNumber, int lockState )
{
    QString title( "Unlock" );
    QString radar( "Radar \"" + serialNumber + "\"" );

    QWidget* pParent = dynamic_cast< QWidget* >( parent() );
    if (lockState >= 0)
        QMessageBox::information( pParent, title, 
            (lockState == 0)? radar + " still locked" : radar + QString( " unlocked (level %0)" ).arg( lockState ) );
    else
        QMessageBox::critical( pParent, title, "Unlock of " + radar + " Failed" );
}


//-----------------------------------------------------------------------------
// UI Event Handling
//-----------------------------------------------------------------------------
void tMultiRadar::MultiRadarConnect_clicked( bool checked )
{
    emit ConnectChanged( checked );
}

//-----------------------------------------------------------------------------
void tMultiRadar::MultiRadarQuery_clicked( bool )
{
    tMultiRadarClient::GetInstance()->QueryRadars();
}

//-----------------------------------------------------------------------------
void tMultiRadar::MultiRadarReset_clicked( bool )
{
    tMultiRadarClient::GetInstance()->ResetDeviceIDs();
}

//-----------------------------------------------------------------------------
void tMultiRadar::MultiRadarClear_clicked( bool )
{
    tMultiRadarClient::GetInstance()->ClearRadars();
}
//-----------------------------------------------------------------------------
void tMultiRadar::MultiRadarGetLockID_clicked( bool )
{
    QString title( "Lock ID" );
    QString radar( "Radar: \"" + GetRadarSerialNumber() + "\"\n\n" );

    char lockID[MAX_LOCKID_SIZE * 2 + 1];
    int length = tMultiRadarClient::GetInstance()->GetLockID(lockID, GetRadarSerialNumber().toLatin1().data());
    lockID[length] = '\0';
    QWidget* pParent = dynamic_cast<QWidget*>(parent());
    QMessageBox::information( pParent, title, radar + lockID );
}

//-----------------------------------------------------------------------------
void tMultiRadar::MultiRadarUnlock_clicked( bool )
{
    tMultiRadarClient::GetInstance()->UnlockRadar( GetRadarSerialNumber().toLatin1().data(), 0 );
}

//-----------------------------------------------------------------------------
void tMultiRadar::MultiRadarUnlockAll_clicked( bool )
{
    tMultiRadarClient::GetInstance()->UnlockRadar( 0, 0 );
}

//-----------------------------------------------------------------------------
void tMultiRadar::MultiRadarFlush_clicked( bool )
{
    tMultiRadarClient::GetInstance()->ClearUnlockKeys();
}
