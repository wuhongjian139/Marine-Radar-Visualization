//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file ScannerInfo.h
//!
//! User interface for primary scanner controls and scanner versioning
//! information.
//-----------------------------------------------------------------------------

#ifndef GUIDEMO_SCANNERINFO_H
#define GUIDEMO_SCANNERINFO_H

#include <QtGui>

#include <ImageClient.h>
#include "ui_GUIDemo.h"

//-----------------------------------------------------------------------------
// tScannerInfo Class
//-----------------------------------------------------------------------------
class tScannerInfo : public QObject {
  Q_OBJECT

 public:
  tScannerInfo(Ui::GUIDemoClass& ui, QWidget* pParent = nullptr);
  virtual ~tScannerInfo();

  void OnConnect(Navico::Protocol::NRP::tImageClient* pImageClient);
  void OnDisconnect();

  void OnModeChanged(Navico::Protocol::NRP::tMode* pMode);
  void OnPropertiesChanged(Navico::Protocol::NRP::tProperties* pProperties);
  void OnSetupChanged(Navico::Protocol::NRP::tSetup* pSetup);
  void OnRadarErrorChanged(Navico::Protocol::NRP::tRadarError* pError);

 private slots:
  void ScannerPower_clicked(bool checked);
  void ScannerTransmit_clicked(bool checked);
  void ScannerKickRadar_clicked(bool checked);
  void ScannerQuery_clicked(bool checked);
  void ScannerError_clicked(bool checked);
  void ScannerRange_valueChanged(int value);
  void ScannerRange_currentIndexChanged(int index);

 private:
  void MakeConnections(bool connect);

 private:
  Navico::Protocol::NRP::tImageClient* m_pImageClient;

  Ui::GUIDemoClass& ui;
};

//-----------------------------------------------------------------------------

#endif  // inclusion guard
