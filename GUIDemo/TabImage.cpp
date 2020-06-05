//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include "TabImage.h"

#include <FeatureManager.h>
#include "ImageClient.h"
#include "QControlUtils.h"
#include "TabBase.h"
#include "ui_GUIDemo.h"

//-----------------------------------------------------------------------------
// tTabImage Implementation
//-----------------------------------------------------------------------------
tTabImage::tTabImage(Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab)
    : tTabBase(ui, pParent, tab) {
  ConnectControls(true, *this, tab);
  UpdateUseMode();

  // Disable pulse width control UI for now.
  m_Ui.checkAutoTune->setEnabled(false);
  m_Ui.sliderCoarseTune->setEnabled(false);
  m_Ui.spinCoarseTune->setEnabled(false);
  m_Ui.sliderFineTune->setEnabled(false);
  m_Ui.spinFineTune->setEnabled(false);
}

//-----------------------------------------------------------------------------
tTabImage::~tTabImage() { ConnectControls(false, *this, m_Tab); }

//-----------------------------------------------------------------------------
void tTabImage::OnConnect(Navico::Protocol::NRP::tImageClient* pImageClient) {
  tTabBase::OnConnect(pImageClient);
  m_UpdateOnConfiguration = true;
  m_UpdateOnSetupExt = true;
  m_UpdateOnConfiguration = true;
  UpdateUseMode();
}

//-----------------------------------------------------------------------------
void tTabImage::UpdateUseMode() {
  // fill UseMode combo-box
  m_Ui.comboUseMode->setEnabled(false);
  m_Ui.comboUseMode->blockSignals(true);
  m_Ui.comboUseMode->clear();

  // Always have custom mode.
  m_Ui.comboUseMode->addItem(
      UseModeToString(Navico::Protocol::NRP::eUseMode_Custom),
      QVariant(Navico::Protocol::NRP::eUseMode_Custom));

  if (m_pImageClient != nullptr) {
    // Check feature manager for supported use modes
    Navico::Protocol::NRP::tFeatureManager& featureManager =
        m_pImageClient->GetFeatureManager();
    const Navico::Protocol::NRP::tFeatureUseModes& feature =
        featureManager.GetFeatureSupportedUseModes();

    for (int i = 0; i < feature.useModeCount; ++i) {
      Navico::Protocol::NRP::eUseMode useMode = feature.useModes[i];
      if (useMode != Navico::Protocol::NRP::eUseMode_Custom) {
        m_Ui.comboUseMode->addItem(UseModeToString(useMode), QVariant(useMode));
      }
    }

    m_Ui.comboUseMode->setEnabled(true);
  }

  // Try to select the current use mode, or the first use mode.
  int index = m_Ui.comboUseMode->findText(m_Ui.editUseMode->text());
  if (index < 0) {
    m_Ui.editUseMode->setText(
        UseModeToString(Navico::Protocol::NRP::eUseMode_Custom));
    index = 0;
  }
  m_Ui.comboUseMode->setCurrentIndex((index >= 0) ? index : 0);
  m_Ui.comboUseMode->blockSignals(false);
}

//-----------------------------------------------------------------------------
// Group: Query
//-----------------------------------------------------------------------------
void tTabImage::QueryAll_clicked(bool /*checked*/) {
  m_pImageClient->QueryAll();
}

//-----------------------------------------------------------------------------
void tTabImage::QueryMode_clicked(bool /*checked*/) {
  m_pImageClient->QueryMode();
}

//-----------------------------------------------------------------------------
void tTabImage::QuerySetup_clicked(bool /*checked*/) {
  m_pImageClient->QuerySetup();
}

//-----------------------------------------------------------------------------
void tTabImage::QueryProperties_clicked(bool /*checked*/) {
  m_pImageClient->QueryProperties();
}

//-----------------------------------------------------------------------------
void tTabImage::QueryConfiguration_clicked(bool /*checked*/) {
  m_pImageClient->QueryConfiguration();
}

//-----------------------------------------------------------------------------
void tTabImage::QueryAdvanced_clicked(bool /*checked*/) {
  m_pImageClient->QueryAdvancedSetup();
}

//-----------------------------------------------------------------------------
void tTabImage::QueryFeatures_clicked(bool /*checked*/) {
  m_pImageClient->QueryFeatures();
}

//-----------------------------------------------------------------------------
// Group: Use Mode
//-----------------------------------------------------------------------------
void tTabImage::UseMode_currentIndexChanged(int index) {
  Navico::Protocol::NRP::eUseMode useMode =
      static_cast<Navico::Protocol::NRP::eUseMode>(
          m_Ui.comboUseMode->itemData(index).toInt());
  m_pImageClient->SetUseMode(useMode);
}

//-----------------------------------------------------------------------------
// Group: Miscellenaous
//-----------------------------------------------------------------------------
void tTabImage::FastScan_currentIndexChanged(int index) {
  m_pImageClient->SetFastScanMode(uint8_t(index));
}

//-----------------------------------------------------------------------------
void tTabImage::RPM_valueChanged(int value) {
  m_pImageClient->SetScannerRPM(value * 10);
}

//-----------------------------------------------------------------------------
void tTabImage::LEDs_valueChanged(int value) {
  m_pImageClient->SetLEDsLevel(value);
}

//-----------------------------------------------------------------------------
void tTabImage::IRLevel_valueChanged(int value) {
  m_pImageClient->SetInterferenceReject(value);
}

//----------------------------------------------------------
void tTabImage::LocalIR_valueChanged(int value) {
  m_pImageClient->SetLocalIR(value);
}

//-----------------------------------------------------------------------------
void tTabImage::NoiseReject_valueChanged(int value) {
  m_pImageClient->SetNoiseReject(value);
}

//----------------------------------------------------------
void tTabImage::BeamSharpening_valueChanged(int value) {
  m_pImageClient->SetBeamSharpening(value);
}

//-----------------------------------------------------------------------------
void tTabImage::TargetBoost_valueChanged(int value) {
  m_pImageClient->SetTargetBoost(value);
}

//-----------------------------------------------------------------------------
void tTabImage::TargetStretch_valueChanged(int value) {
  m_pImageClient->SetTargetStretch(uint8_t(value));
}

//-----------------------------------------------------------------------------
void tTabImage::TargetStretch_clicked(bool checked) {
  m_pImageClient->SetTargetStretch(checked);
}

//-----------------------------------------------------------------------------
// Group: Sensitivity
//-----------------------------------------------------------------------------
void tTabImage::STCCurveType_currentIndexChanged(int index) {
  m_pImageClient->SetSTCCurveType(Navico::Protocol::NRP::eStcCurveType(index));
}

//-----------------------------------------------------------------------------
void tTabImage::Gain_valueChanged(int value) {
  m_pImageClient->SetGain(Navico::Protocol::NRP::eUserGainManualAuto(
                              m_Ui.comboGain->currentIndex()),
                          value);
}

//-----------------------------------------------------------------------------
void tTabImage::Gain_currentIndexChanged(int index) {
  m_pImageClient->SetGain(Navico::Protocol::NRP::eUserGainManualAuto(index),
                          m_Ui.sliderGain->value());
}

//-----------------------------------------------------------------------------
void tTabImage::SeaClutter_valueChanged(int value) {
  m_pImageClient->SetSeaClutter(Navico::Protocol::NRP::eUserGainManualAuto(
                                    m_Ui.comboSeaClutter->currentIndex()),
                                value);
}

//-----------------------------------------------------------------------------
void tTabImage::SeaClutter_currentIndexChanged(int index) {
  m_pImageClient->SetSeaClutter(
      Navico::Protocol::NRP::eUserGainManualAuto(index),
      m_Ui.sliderSeaClutter->value());
}

//-----------------------------------------------------------------------------
void tTabImage::SeaFlags_clicked(bool /*clicked*/) {}

//-----------------------------------------------------------------------------
void tTabImage::SeaAuto_valueChanged(int value) {
  Navico::Protocol::NRP::eUserGainValid flags =
      m_Ui.checkSeaFlags->isChecked()
          ? Navico::Protocol::NRP::UserGainValid_ALL
          : Navico::Protocol::NRP::UserGainValid_Offset;
  m_pImageClient->SetSeaClutter(
      Navico::Protocol::NRP::eUserGainManualAuto(m_Ui.comboSea->currentIndex()),
      m_Ui.sliderSea->value(), value, flags);
}

//-----------------------------------------------------------------------------
void tTabImage::Sea_valueChanged(int value) {
  Navico::Protocol::NRP::eUserGainValid flags =
      m_Ui.checkSeaFlags->isChecked()
          ? Navico::Protocol::NRP::UserGainValid_ALL
          : Navico::Protocol::NRP::UserGainValid_Offset;
  m_pImageClient->SetSeaClutter(
      Navico::Protocol::NRP::eUserGainManualAuto(m_Ui.comboSea->currentIndex()),
      value, m_Ui.sliderSeaAuto->value(), flags);
}

//-----------------------------------------------------------------------------
void tTabImage::Sea_currentIndexChanged(int index) {
  Navico::Protocol::NRP::eUserGainValid flags =
      m_Ui.checkSeaFlags->isChecked()
          ? Navico::Protocol::NRP::UserGainValid_ALL
          : Navico::Protocol::NRP::UserGainValid_Offset;
  m_pImageClient->SetSeaClutter(
      Navico::Protocol::NRP::eUserGainManualAuto(index),
      m_Ui.sliderSea->value(), m_Ui.sliderSeaAuto->value(), flags);
}

//-----------------------------------------------------------------------------
void tTabImage::SideLobe_valueChanged(int value) {
  m_pImageClient->SetSideLobe(Navico::Protocol::NRP::eUserGainManualAuto(
                                  m_Ui.comboSideLobe->currentIndex()),
                              value);
}

//-----------------------------------------------------------------------------
void tTabImage::SideLobe_currentIndexChanged(int index) {
  m_pImageClient->SetSideLobe(Navico::Protocol::NRP::eUserGainManualAuto(index),
                              m_Ui.sliderSideLobe->value());
}

//-----------------------------------------------------------------------------
void tTabImage::Rain_valueChanged(int value) { m_pImageClient->SetRain(value); }

//-----------------------------------------------------------------------------
void tTabImage::FTC_valueChanged(int value) { m_pImageClient->SetFTC(value); }

//-----------------------------------------------------------------------------
// Group: Pulse
//-----------------------------------------------------------------------------
void tTabImage::AutoTune_clicked(bool checked) {
  m_pImageClient->SetTuneState(checked);
}

//-----------------------------------------------------------------------------
void tTabImage::CoarseTune_valueChanged(int value) {
  m_pImageClient->SetTuneCoarse(value);
}

//-----------------------------------------------------------------------------
void tTabImage::FineTune_valueChanged(int value) {
  m_pImageClient->SetTuneFine(value);
}

//-----------------------------------------------------------------------------
// Group: TimedTransmit
//-----------------------------------------------------------------------------
void tTabImage::TimedTxMode_clicked(bool checked) {
  m_pImageClient->SetTimedTransmit(checked);
}

//-----------------------------------------------------------------------------
void tTabImage::TimedTransmit_valueChanged(int value) {
  m_pImageClient->SetTimedTransmitSetup(value, m_Ui.spinTimedStandby->value());
}

//-----------------------------------------------------------------------------
void tTabImage::TimedStandby_valueChanged(int value) {
  m_pImageClient->SetTimedTransmitSetup(m_Ui.spinTimedTransmit->value(), value);
}

//-----------------------------------------------------------------------------
// State Changes
//-----------------------------------------------------------------------------
void tTabImage::OnModeChanged(const Navico::Protocol::NRP::tMode* pMode) {
  m_Ui.checkTimedTxMode->setChecked(pMode->ttState);
}

//-----------------------------------------------------------------------------
void tTabImage::OnSetupChanged(const Navico::Protocol::NRP::tSetup* pSetup) {
  int gainType;

  // Gain controls update
  gainType = pSetup->gain[Navico::Protocol::NRP::eSetupGain].type;
  assert(gainType < Navico::Protocol::NRP::eTotalUserGains);
  m_Ui.editGain->setText(
      QString::number(pSetup->gain[Navico::Protocol::NRP::eSetupGain].value));
  SetManualValue(m_Ui.comboGain, gainType);

  // Sea clutter controls update
  gainType = pSetup->gain[Navico::Protocol::NRP::eSetupSea].type;
  assert(gainType < Navico::Protocol::NRP::eTotalUserGains);

  m_Ui.editSeaClutter->setText(
      QString::number(pSetup->gain[Navico::Protocol::NRP::eSetupSea].value));
  SetManualValue(m_Ui.comboSeaClutter, gainType);
  SetManualValue(m_Ui.comboSea, gainType);

  // Rain controls update
  gainType = pSetup->gain[Navico::Protocol::NRP::eSetupRain].type;
  assert(gainType < Navico::Protocol::NRP::eTotalUserGains);
  m_Ui.editRain->setText(
      QString::number(pSetup->gain[Navico::Protocol::NRP::eSetupRain].value));

  // FTC controls update
  m_Ui.editFTC->setText(QString::number(pSetup->ftc.value));

  // Interference Reject controls update
  m_Ui.editIRLevel->setText(QString::number(pSetup->interferenceReject));

  // Target Boost controls update
  m_Ui.editTargetBoost->setText(QString::number(pSetup->targetBoost));

  // Target Stretch controls update
  m_Ui.editTargetStretch->setText(QString::number(pSetup->targetStretch));
  SetManualValue(m_Ui.checkTargetStretch, pSetup->targetStretch);

  // Pulse Group
  m_Ui.editPulseWidth->setText(QString::number(pSetup->pwLength_ns));
  m_Ui.editCoarseTune->setText(QString::number(pSetup->coarseTune));
  m_Ui.editFineTune->setText(QString::number(pSetup->fineTune));

  m_Ui.editUseMode->setText(UseModeToString(
      static_cast<Navico::Protocol::NRP::eUseMode>(pSetup->useMode)));

  if (m_UpdateOnSetup) {
    m_UpdateOnSetup = false;
    SetManualValue(m_Ui.spinGain,
                   pSetup->gain[Navico::Protocol::NRP::eSetupGain].value);
    SetManualValue(m_Ui.spinSeaClutter,
                   pSetup->gain[Navico::Protocol::NRP::eSetupSea].value);
    SetManualValue(m_Ui.spinRain,
                   pSetup->gain[Navico::Protocol::NRP::eSetupRain].value);
    SetManualValue(m_Ui.spinFTC, pSetup->ftc.value);
    SetManualValue(m_Ui.spinIRLevel, pSetup->interferenceReject);
    SetManualValue(m_Ui.spinTargetBoost, pSetup->targetBoost);
    SetManualValue(m_Ui.spinTargetStretch, pSetup->targetStretch);
    SetManualValue(m_Ui.spinCoarseTune, pSetup->coarseTune);
    SetManualValue(m_Ui.spinFineTune, pSetup->fineTune);
    m_Ui.checkAutoTune->setChecked(pSetup->tuneType != 0u);

    // Change the use mode combo box index if possible & needed.
    int index = m_Ui.comboUseMode->findText(UseModeToString(
        static_cast<Navico::Protocol::NRP::eUseMode>(pSetup->useMode)));
    if ((index >= 0) && (index != m_Ui.comboUseMode->currentIndex())) {
      m_Ui.comboUseMode->blockSignals(true);
      m_Ui.comboUseMode->setCurrentIndex(index);
      m_Ui.comboUseMode->blockSignals(false);
    }
  }
}

//-----------------------------------------------------------------------------
void tTabImage::OnSetupExtendedChanged(
    const Navico::Protocol::NRP::tSetupExtended* pSetupEx) {
  // Side lobe controls update
  int gainType = pSetupEx->sidelobe.type;
  assert(gainType < Navico::Protocol::NRP::eTotalUserGains);
  m_Ui.editSideLobe->setText(QString::number(pSetupEx->sidelobe.value));
  SetManualValue(m_Ui.comboSideLobe, gainType);

  m_Ui.editLocalIR->setText(QString::number(pSetupEx->localIR));
  m_Ui.editNoiseReject->setText(QString::number(pSetupEx->noiseReject));
  m_Ui.editBeamSharpening->setText(QString::number(pSetupEx->beamSharpening));
  m_Ui.editSTCCurveType->setText(
      ToItemName(pSetupEx->stcCurveType, m_Ui.comboSTCCurveType));
  m_Ui.editFastScan->setText(
      ToItemName(pSetupEx->fastScanMode, m_Ui.comboFastScan));
  m_Ui.editRPM->setText(QString::number(pSetupEx->rpmX10 / 10));
  m_Ui.editSea->setText(QString::number(pSetupEx->sea.manualValue));
  m_Ui.editSeaAuto->setText(QString::number(pSetupEx->sea.autoOffset));

  if (m_UpdateOnSetupExt) {
    m_UpdateOnSetupExt = false;
    SetManualValue(m_Ui.spinSideLobe, pSetupEx->sidelobe.value);
    SetManualValue(m_Ui.spinLocalIR, pSetupEx->localIR);
    SetManualValue(m_Ui.spinBeamSharpening, pSetupEx->beamSharpening);
    SetManualValue(m_Ui.spinNoiseReject, pSetupEx->noiseReject);
    SetManualValue(m_Ui.comboSTCCurveType, pSetupEx->stcCurveType);
    SetManualValue(m_Ui.comboFastScan, pSetupEx->fastScanMode);
    SetManualValue(m_Ui.spinRPM, pSetupEx->rpmX10 / 10);
    SetManualValue(m_Ui.spinSea, pSetupEx->sea.manualValue);
    SetManualValue(m_Ui.spinSeaAuto, pSetupEx->sea.autoOffset);
  }
}

//-----------------------------------------------------------------------------
void tTabImage::OnConfigurationChanged(
    const Navico::Protocol::NRP::tConfiguration* pConfig) {
  m_Ui.editTimedTransmit->setText(
      QString::number(pConfig->timedTransmitPeriod_s));
  m_Ui.editTimedStandby->setText(
      QString::number(pConfig->timedStandbyPeriod_s));
  m_Ui.editLEDs->setText(QString::number(pConfig->ledLevel));

  if (m_UpdateOnConfiguration) {
    m_UpdateOnConfiguration = false;
    SetManualValue(m_Ui.spinTimedTransmit, pConfig->timedTransmitPeriod_s);
    SetManualValue(m_Ui.spinTimedStandby, pConfig->timedStandbyPeriod_s);
    SetManualValue(m_Ui.spinLEDs, pConfig->ledLevel);
  }
}

//-----------------------------------------------------------------------------
void tTabImage::OnUpdateFeature(
    Navico::Protocol::NRP::tFeatureEnum featureEnum) {
  Navico::Protocol::NRP::tFeatureManager& featureManager =
      m_pImageClient->GetFeatureManager();

  switch (featureEnum) {
    case Navico::Protocol::NRP::eFeatureEnum_SupportedUseModes: {
      UpdateUseMode();
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_IRControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureIR();
      m_Ui.spinIRLevel->setEnabled(feature.enabled);
      m_Ui.sliderIRLevel->setEnabled(feature.enabled);
      SetManualRange(m_Ui.spinIRLevel, 0, feature.maxLevel);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_NoiseRejectControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureNoiseReject();
      m_Ui.spinNoiseReject->setEnabled(feature.enabled);
      m_Ui.sliderNoiseReject->setEnabled(feature.enabled);
      SetManualRange(m_Ui.spinNoiseReject, 0, feature.maxLevel);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_STCCurveControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureStcCurves();
      m_Ui.comboSTCCurveType->setEnabled(feature.enabled);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_BeamSharpeningControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureBeamSharpening();
      m_Ui.spinBeamSharpening->setEnabled(feature.enabled);
      m_Ui.sliderBeamSharpening->setEnabled(feature.enabled);
      SetManualRange(m_Ui.spinBeamSharpening, 0, feature.maxLevel);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_FastScanControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureFastScan();
      m_Ui.comboFastScan->setEnabled(feature.enabled);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_SidelobeGainControl: {
      const Navico::Protocol::NRP::tFeatureRangeLimits& feature =
          featureManager.GetFeatureSidelobeGain();
      m_Ui.spinSideLobe->setEnabled(feature.enabled);
      m_Ui.sliderSideLobe->setEnabled(feature.enabled);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_LocalIRControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureLocalIR();
      m_Ui.spinLocalIR->setEnabled(feature.enabled);
      m_Ui.sliderLocalIR->setEnabled(feature.enabled);
      SetManualRange(m_Ui.spinLocalIR, 0, feature.maxLevel);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_LEDControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureLED();
      m_Ui.spinLEDs->setEnabled(feature.enabled);
      m_Ui.sliderLEDs->setEnabled(feature.enabled);
      SetManualRange(m_Ui.spinLEDs, 0, feature.maxLevel);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_TargetStretchControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureTargetStretch();
      m_Ui.spinTargetStretch->setEnabled(feature.enabled);
      m_Ui.sliderTargetStretch->setEnabled(feature.enabled);
      SetManualRange(m_Ui.spinTargetStretch, 0, feature.maxLevel);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_SeaUserGainLimits: {
      const Navico::Protocol::NRP::tFeatureGainLimits& feature =
          featureManager.GetFeatureSeaUserGainLimits();
      m_Ui.spinSeaAuto->setEnabled(feature.enabled);
      m_Ui.sliderSeaAuto->setEnabled(feature.enabled);
      m_Ui.checkSeaFlags->setEnabled(feature.enabled);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_CombinedNoiseIFReject:
    case Navico::Protocol::NRP::eFeatureEnum_RangeStretchControl:
    case Navico::Protocol::NRP::eFeatureEnum_SupportedAntennas:
    case Navico::Protocol::NRP::eFeatureEnum_InstrRangeLimits:
    case Navico::Protocol::NRP::eFeatureEnum_SectorBlanking:
    case Navico::Protocol::NRP::eFeatureEnum_PerformanceMonitor:
    default:
      break;
  }
}
