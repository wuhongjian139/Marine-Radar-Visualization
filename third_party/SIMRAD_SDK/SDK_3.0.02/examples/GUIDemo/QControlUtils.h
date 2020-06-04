//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file QControlUtils.h
//! 
//! Various Qt helper functions and classes.
//-----------------------------------------------------------------------------

#ifndef NAVICO_QCONTROLUTILS_H
#define NAVICO_QCONTROLUTILS_H

#include <QSpinBox>
#include <QSlider>
#include <QComboBox>
#include <QCheckBox>
#include <NavRadarProtocol.h>

//-----------------------------------------------------------------------------
// tQDoubleIntConnector Class
//-----------------------------------------------------------------------------

/** Simple intermediate class for connecting a double spin-box to an integer slider.
    If the ranges of the spin-box and slider are different this class will automatically
    rescale values transferred between the two **/
class tQDoubleIntConnector : public QObject
{
    Q_OBJECT

public:
    tQDoubleIntConnector( QDoubleSpinBox* pSpin, QSlider* pSlider, const QString& name );

    static int ToSliderValue( double spinValue, QDoubleSpinBox* pSpin, QSlider* pSlider );
    static double ToSpinValue( int sliderValue, QDoubleSpinBox* pSpin, QSlider* pSlider );

public slots:
    void SliderValueChanged( int value );
    void SpinnerValueChanged( double value );

private:
    QDoubleSpinBox*  m_pSpin;
    QSlider*         m_pSlider;
};

//-----------------------------------------------------------------------------
// Helper Functions
//-----------------------------------------------------------------------------

QString ToItemName( unsigned value, QComboBox* pCombo );
QString Slot( const QString& slot );

/** Function that will assert if a Qt dis/connect fails **/
bool Connect( bool connect, const QObject* sender,       const char* signal = 0, 
                            const QObject* receiver = 0, const char* method = 0, Qt::ConnectionType type = Qt::AutoConnection );

/** Function that will scan all sub-controls of 'parent' and automatically connect
    them to an appropriately named slot assumed to exist on 'manager' **/
void ConnectControls( bool connect, QObject& manager, QWidget& parent );

/** Functions for setting the value of a control, without causing it to emit a changed
    signal (by disabling signals before setting the new value) **/
void SetManualValue( QSpinBox* pSpin, int value );
void SetManualValue( QDoubleSpinBox* pSpin, double value );
void SetManualValue( QComboBox* pCombo, int value );
void SetManualValue( QCheckBox* pCheck, bool value );

/** Function for changing the valid range of a spin-box, and any related slider **/
void SetManualRange( QSpinBox* pSpin, int minValue, int maxValue );

QString UseModeToString( Navico::Protocol::NRP::eUseMode useMode );

//-----------------------------------------------------------------------------

#endif
