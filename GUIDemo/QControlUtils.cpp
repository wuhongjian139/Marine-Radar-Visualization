//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include "QControlUtils.h"

#include <cassert>
#include <QGroupBox>
#include <QPushButton>

using namespace Navico::Protocol::NRP;

//-----------------------------------------------------------------------------
tQDoubleIntConnector::tQDoubleIntConnector( QDoubleSpinBox* pSpin, QSlider* pSlider, const QString& name ) 
    : QObject( pSlider ) 
    , m_pSpin( pSpin )
    , m_pSlider( pSlider )
{
    setObjectName( name );
}

int tQDoubleIntConnector::ToSliderValue( double value, QDoubleSpinBox* pSpin, QSlider* pSlider )
{
    double sliderMin = pSlider->minimum();
    double spinMin = pSpin->minimum();
    double val = sliderMin + (pSlider->maximum() - sliderMin) * (value - spinMin) / (pSpin->maximum() - spinMin);
    return int( val );
}

double tQDoubleIntConnector::ToSpinValue( int value, QDoubleSpinBox* pSpin, QSlider* pSlider )
{
    double sliderMin = pSlider->minimum();
    double spinMin = pSpin->minimum();
    double val = spinMin + (pSpin->maximum() - spinMin) * (value - sliderMin) / (pSlider->maximum() - sliderMin);
    return val;
}

void tQDoubleIntConnector::SliderValueChanged( int value )
{
    //m_pSpin->blockSignals( true );
    m_pSpin->setValue( ToSpinValue( value, m_pSpin, m_pSlider ) );
    //m_pSpin->blockSignals( false );
}

void tQDoubleIntConnector::SpinnerValueChanged( double value )
{
    m_pSlider->blockSignals( true );
    m_pSlider->setValue( ToSliderValue( value, m_pSpin, m_pSlider ) );
    m_pSlider->blockSignals( false );
}

//-----------------------------------------------------------------------------
QString ToItemName( unsigned value, QComboBox* pCombo )
{
    return (pCombo == NULL || value >= unsigned(pCombo->count()))?
        QString::number( value ) : pCombo->itemText( value );
}

//-----------------------------------------------------------------------------
QString Slot( const QString& slot )
{
    return QString::number( QSLOT_CODE ) + slot;
}

//-----------------------------------------------------------------------------
bool Connect( bool connect, const QObject* sender, const char* signal, const QObject* receiver, const char* method, Qt::ConnectionType type )
{
    bool result;
    if (connect == true)
        result = QObject::connect( sender, signal, receiver, method, type );
    else
        result = QObject::disconnect( sender, signal, receiver, method );

    assert( result );
    return result;
}

//-----------------------------------------------------------------------------
void LinkControls( bool connect, QObject& manager, QWidget& parent )
{
    //TODO: make this more efficient

    QList< QSpinBox* > spins( parent.findChildren< QSpinBox* >( QRegExp("^spin") ) );
    foreach (QSpinBox* pSpin, spins)
    {
        QString name( pSpin->objectName().mid( 4 ) );
        Connect( connect, pSpin, SIGNAL(valueChanged(int)), &manager, Slot(name+"_valueChanged(int)").toLatin1().data() );

        QSlider* pSlider = parent.findChild< QSlider* >( "slider" + name );
        if (pSlider != NULL)
        {
            Connect( connect, pSlider, SIGNAL(sliderMoved(int)),  pSpin,    SLOT(setValue(int)) );
            Connect( connect, pSpin,   SIGNAL(valueChanged(int)), pSlider,  SLOT(setValue(int)) );
        }
    }

    QList< QDoubleSpinBox* > dspins( parent.findChildren< QDoubleSpinBox* >( QRegExp("^spin") ) );
    foreach (QDoubleSpinBox* pSpin, dspins)
    {
        QString name( pSpin->objectName().mid( 4 ) );
        Connect( connect, pSpin, SIGNAL(valueChanged(double)), &manager, Slot(name+"_valueChanged(double)").toLatin1().data() );

        QSlider* pSlider = parent.findChild< QSlider* >( "slider" + name );
        if (pSlider != NULL)
        {
            tQDoubleIntConnector* pConnector = (connect == true)?
                new tQDoubleIntConnector( pSpin, pSlider, name ) : pSlider->findChild< tQDoubleIntConnector* >( name );

            assert( pConnector != NULL );
            if (pConnector != NULL)
            {
                Connect( connect, pSlider, SIGNAL(sliderMoved(int)),     pConnector, SLOT(SliderValueChanged(int)) );
                Connect( connect, pSpin,   SIGNAL(valueChanged(double)), pConnector, SLOT(SpinnerValueChanged(double)) );

                if (connect == false)
                    delete pConnector;
            }
        }
    }

    QList< QComboBox* > combos( parent.findChildren< QComboBox* >( QRegExp("^combo") ) );
    foreach (QComboBox* pCombo, combos)
    {
        QString name( pCombo->objectName().mid( 5 ) );
        Connect( connect, pCombo, SIGNAL(currentIndexChanged(int)), &manager, Slot(name+"_currentIndexChanged(int)").toLatin1().data() );
    }

    QList< QCheckBox* > checks( parent.findChildren< QCheckBox* >( QRegExp("^check") ) );
    foreach (QCheckBox* pCheck, checks)
    {
        QString name( pCheck->objectName().mid( 5 ) );
        Connect( connect, pCheck, SIGNAL(clicked(bool)), &manager, Slot(name+"_clicked(bool)").toLatin1().data() );
    }

    QList< QPushButton* > pushes( parent.findChildren< QPushButton* >( QRegExp("^push") ) );
    foreach (QPushButton* pPush, pushes)
    {
        QString name( pPush->objectName().mid( 4 ) );
        Connect( connect, pPush, SIGNAL(clicked(bool)), &manager, Slot(name+"_clicked(bool)").toLatin1().data() );
    }
}

//-----------------------------------------------------------------------------
void ConnectControls( bool connect, QObject& manager, QWidget& parent )
{
    LinkControls( connect, manager, parent );
}

//-----------------------------------------------------------------------------
void ConnectControls( QObject& manager, QWidget& parent )
{
    LinkControls( true, manager, parent );
}

//-----------------------------------------------------------------------------
void DisconnectControls( QObject& manager, QWidget& parent )
{
    LinkControls( false, manager, parent );
}

//-----------------------------------------------------------------------------
void SetManualValue( QSpinBox* pSpin, int value )
{
    assert( pSpin != NULL );

    QObject* pParent = pSpin->parent();
    if (pParent != NULL && pSpin->objectName().startsWith( "spin" ))
    {
        QString name( pSpin->objectName().mid( 4 ) );
        QSlider* pSlider = pParent->findChild< QSlider* >( "slider" + name );
        if (pSlider != NULL)
        {
            pSlider->blockSignals( true );
            pSlider->setValue( value );
            pSlider->blockSignals( false );
        }
    }
    pSpin->blockSignals( true );
    pSpin->setValue( value );
    pSpin->blockSignals( false );
}

//-----------------------------------------------------------------------------
void SetManualValue( QDoubleSpinBox* pSpin, double value )
{
    assert( pSpin != NULL );

    QObject* pParent = pSpin->parent();
    if (pParent != NULL && pSpin->objectName().startsWith( "spin" ))
    {
        QString name( pSpin->objectName().mid( 4 ) );
        QSlider* pSlider = pParent->findChild< QSlider* >( "slider" + name );
        if (pSlider != NULL)
        {
            pSlider->blockSignals( true );
            pSlider->setValue( tQDoubleIntConnector::ToSliderValue( value, pSpin, pSlider ) );
            pSlider->blockSignals( false );
        }
    }
    pSpin->blockSignals( true );
    pSpin->setValue( value );
    pSpin->blockSignals( false );
}

//-----------------------------------------------------------------------------
void SetManualValue( QComboBox* pCombo, int value )
{
    pCombo->blockSignals( true );
    pCombo->setCurrentIndex( value );
    pCombo->blockSignals( false );
}

//-----------------------------------------------------------------------------
void SetManualValue( QCheckBox* pCheck, bool value )
{
    pCheck->blockSignals( true );
    pCheck->setChecked( value );
    pCheck->blockSignals( false );
}

//-----------------------------------------------------------------------------
void SetManualRange( QSpinBox* pSpin, int minValue, int maxValue )
{
    assert( pSpin != NULL );

    QObject* pParent = pSpin->parent();
    if (pParent != NULL && pSpin->objectName().startsWith( "spin" ))
    {
        QString name( pSpin->objectName().mid( 4 ) );
        QSlider* pSlider = pParent->findChild< QSlider* >( "slider" + name );
        if (pSlider != NULL)
        {
            pSlider->blockSignals( true );
            pSlider->setRange( minValue, maxValue );
            pSlider->blockSignals( false );
        }
    }
    pSpin->blockSignals( true );
    pSpin->setRange( minValue, maxValue );
    pSpin->blockSignals( false );
}

//-----------------------------------------------------------------------------
QString UseModeToString( eUseMode useMode )
{
    switch (useMode)
    {
    case eUseMode_Custom:       return QString( "Manual" );
    case eUseMode_Harbour:      return QString( "Harbour" );
    case eUseMode_Offshore:     return QString( "Offshore" );
    case eUseMode_Buoy:         return QString( "Buoy" );
    case eUseMode_Weather:      return QString( "Weather" );
    case eUseMode_Bird:         return QString( "Bird" );
    case eUseMode_Netfinder:    return QString( "Netfinder" );
    case eUseMode_SaRT:         return QString( "SaRT" );
    case eUseMode_Doppler:      return QString( "Doppler" );
    case eUseMode_RTE:          return QString( "RTE" );
    default:                    return QString( "Unknown (0x%1)").arg( useMode, 2, 10, QChar('0') );
    }
}
