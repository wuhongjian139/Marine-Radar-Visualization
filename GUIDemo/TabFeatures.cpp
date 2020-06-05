//-----------------------------------------------------------------------------
// Copyright (C) 2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include "TabFeatures.h"
#include <Feature.h>
#include <FeatureManager.h>
#include "ImageClient.h"
#include "QControlUtils.h"
#include "TabBase.h"
#include "ui_GUIDemo.h"

//-----------------------------------------------------------------------------
tTabFeatures::tTabFeatures(Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab)
    : tTabBase(ui, pParent, tab) {
  ConnectControls(true, *this, tab);
  ResetToDefaults();
}

//-----------------------------------------------------------------------------
tTabFeatures::~tTabFeatures() { ConnectControls(false, *this, m_Tab); }

//-----------------------------------------------------------------------------

const char g_Off[] = "Off";
const char g_On[] = "On";
const char g_Low[] = "Low";
const char g_MedLow[] = "Med-Low";
const char g_Medium[] = "Medium";
const char g_MedHigh[] = "Med-High";
const char g_High[] = "High";

const char* g_Severity1[] = {g_Off};
const char* g_Severity2[] = {g_Off, g_On};
const char* g_Severity3[] = {g_Off, g_Low, g_High};
const char* g_Severity4[] = {g_Off, g_Low, g_Medium, g_High};
const char* g_Severity5[] = {g_Off, g_Low, g_MedLow, g_MedHigh, g_High};
const char* g_Severity6[] = {g_Off,    g_Low,     g_MedLow,
                             g_Medium, g_MedHigh, g_High};

const char** g_Severities[] = {g_Severity1, g_Severity2, g_Severity3,
                               g_Severity4, g_Severity5, g_Severity6};

const char* g_STCCurveStrs[] = {"Calm", "Moderate", "Rough"};

struct tConstStrings {
  unsigned nStrings;
  const char** ppStrings;

  tConstStrings(unsigned nStrs = 0, const char** ppStrs = nullptr)
      : nStrings(nStrs), ppStrings(ppStrs) {}

  template <int N>
  tConstStrings(const char* (&strs)[N]) : nStrings(N), ppStrings(strs) {}
};

QString ToString(tConstStrings names) {
  QString result;
  if (names.nStrings > 0) {
    result += names.ppStrings[0];
    for (unsigned index = 1; index < names.nStrings; ++index) {
      result += "|";
      result += names.ppStrings[index];
    }
  }
  return result;
}

static tConstStrings SeverityStrings(uint8_t nValues) {
  int length = sizeof(g_Severities) / sizeof(*g_Severities);
  if (nValues > length) {
    return tConstStrings();
  }

  return tConstStrings(nValues, g_Severities[nValues - 1]);
}

static tConstStrings StcCurveStrings() {
  return tConstStrings(3, g_STCCurveStrs);
}

//-----------------------------------------------------------------------------
void tTabFeatures::OnConnect(
    Navico::Protocol::NRP::tImageClient* pImageClient) {
  tTabBase::OnConnect(pImageClient);
  ResetToDefaults();
}

//-----------------------------------------------------------------------------
// State Changes
//-----------------------------------------------------------------------------
void DefaultFeatureControlEnum(bool defaultState, QCheckBox* pCheckBox,
                               QLineEdit* pLineEdit) {
  if (defaultState) {
    pCheckBox->setCheckState(Qt::Checked);
    pLineEdit->setText("default");
  } else {
    pCheckBox->setCheckState(Qt::Unchecked);
    pLineEdit->setText("default - unsupported");
  }
}

//-----------------------------------------------------------------------------
void tTabFeatures::ResetToDefaults() {
  QString unsupported("default - unsupported");
  m_Ui.editCombinedNoiseIR->setText(unsupported);
  m_Ui.editUseModes->setText(unsupported);

  DefaultFeatureControlEnum(true, m_Ui.chckUserControlRange,
                            m_Ui.editUserControlRange);
  DefaultFeatureControlEnum(true, m_Ui.chckUserControlSea,
                            m_Ui.editUserControlSea);
  DefaultFeatureControlEnum(true, m_Ui.chckUserControlGain,
                            m_Ui.editUserControlGain);
  DefaultFeatureControlEnum(true, m_Ui.chckUserControlRain,
                            m_Ui.editUserControlRain);
  DefaultFeatureControlEnum(true, m_Ui.chckUserControlIR,
                            m_Ui.editUserControlIR);
  DefaultFeatureControlEnum(false, m_Ui.chckUserControlLocalIR,
                            m_Ui.editUserControlLocalIR);
  DefaultFeatureControlEnum(false, m_Ui.chckUserControlNoiseReject,
                            m_Ui.editUserControlNoiseReject);
  DefaultFeatureControlEnum(true, m_Ui.chckUserControlRangeStretch,
                            m_Ui.editUserControlRangeStretch);
  DefaultFeatureControlEnum(true, m_Ui.chckUserControlTargetStretch,
                            m_Ui.editUserControlTargetStretch);
  DefaultFeatureControlEnum(true, m_Ui.chckUserControlSTCCurve,
                            m_Ui.editUserControlSTCCurve);
  DefaultFeatureControlEnum(false, m_Ui.chckUserControlBeamSharpening,
                            m_Ui.editUserControlBeamSharpening);
  DefaultFeatureControlEnum(false, m_Ui.chckUserControlFastScan,
                            m_Ui.editUserControlFastScan);
  DefaultFeatureControlEnum(false, m_Ui.chckUserControlLED,
                            m_Ui.editUserControlLED);
  DefaultFeatureControlEnum(false, m_Ui.chckUserControlSidelobeGain,
                            m_Ui.editUserControlSidelobeGain);

  m_Ui.chckBlankSectors->setEnabled(false);
  m_Ui.editBlankSectors->setText(unsupported);

  m_Ui.editInstrRangeMin->setText(unsupported);
  m_Ui.editInstrRangeMax->setText(unsupported);

  m_Ui.editSeaLimitsManual->setText(unsupported);
  m_Ui.editSeaLimitsAuto->setText(unsupported);
}

//-----------------------------------------------------------------------------
static void ExtractFeatureControlEnum(
    const Navico::Protocol::NRP::tFeatureLevel& feature, QCheckBox* pCheckBox,
    QLineEdit* pLineEdit, tConstStrings names) {
  if (feature.supported == true) {
    pCheckBox->setCheckState((feature.enabled == true) ? Qt::Checked
                                                       : Qt::Unchecked);
    pLineEdit->setText(
        QString("[%1] %2").arg(feature.maxLevel + 1).arg(ToString(names)));
  }
}

//-----------------------------------------------------------------------------
static void ExtractFeatureControlEnum(
    const Navico::Protocol::NRP::tFeatureLevel& feature, QCheckBox* pCheckBox,
    QLineEdit* pLineEdit) {
  ExtractFeatureControlEnum(feature, pCheckBox, pLineEdit,
                            SeverityStrings(feature.maxLevel + 1));
}

//-----------------------------------------------------------------------------
void tTabFeatures::OnUpdateFeature(
    Navico::Protocol::NRP::tFeatureEnum featureEnum) {
  Navico::Protocol::NRP::tFeatureManager& featureManager =
      m_pImageClient->GetFeatureManager();

  switch (featureEnum) {
    case Navico::Protocol::NRP::eFeatureEnum_CombinedNoiseIFReject: {
      const Navico::Protocol::NRP::tFeatureBase& feature =
          featureManager.GetFeatureCombinedNoiseIFReject();
      if (feature.supported == true) {
        m_Ui.editCombinedNoiseIR->setText(QString::number(feature.enabled));
      }
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_SupportedUseModes: {
      const Navico::Protocol::NRP::tFeatureUseModes& feature =
          featureManager.GetFeatureSupportedUseModes();
      if (feature.supported == true) {
        QString useModes("");
        if (feature.useModeCount > 0u) {
          useModes = UseModeToString(feature.useModes[0]);
          for (int i = 1; i < feature.useModeCount; ++i) {
            useModes += "|";
            useModes += UseModeToString(feature.useModes[i]);
          }
        }
        m_Ui.editUseModes->setText(useModes);
      }
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_IRControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureIR();
      ExtractFeatureControlEnum(feature, m_Ui.chckUserControlIR,
                                m_Ui.editUserControlIR);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_NoiseRejectControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureNoiseReject();
      ExtractFeatureControlEnum(feature, m_Ui.chckUserControlNoiseReject,
                                m_Ui.editUserControlNoiseReject);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_RangeStretchControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureRangeStretch();
      ExtractFeatureControlEnum(feature, m_Ui.chckUserControlRangeStretch,
                                m_Ui.editUserControlRangeStretch);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_STCCurveControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureStcCurves();
      ExtractFeatureControlEnum(feature, m_Ui.chckUserControlSTCCurve,
                                m_Ui.editUserControlSTCCurve,
                                StcCurveStrings());
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_BeamSharpeningControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureBeamSharpening();
      ExtractFeatureControlEnum(feature, m_Ui.chckUserControlBeamSharpening,
                                m_Ui.editUserControlBeamSharpening);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_FastScanControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureFastScan();
      ExtractFeatureControlEnum(feature, m_Ui.chckUserControlFastScan,
                                m_Ui.editUserControlFastScan);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_SidelobeGainControl: {
      const Navico::Protocol::NRP::tFeatureRangeLimits& feature =
          featureManager.GetFeatureSidelobeGain();
      if (feature.supported == true) {
        m_Ui.chckUserControlSidelobeGain->setCheckState(
            (feature.enabled == true) ? Qt::Checked : Qt::Unchecked);
        m_Ui.editUserControlSidelobeGain->setText(
            QString("%1 - %2").arg(feature.minimum).arg(feature.maximum));
      }
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_SupportedAntennas:
      break;

    case Navico::Protocol::NRP::eFeatureEnum_InstrRangeLimits: {
      const Navico::Protocol::NRP::tFeatureRangeLimits& feature =
          featureManager.GetFeatureInstrRangeLimits();
      if (feature.supported == true) {
        m_Ui.editInstrRangeMin->setText(QString("%1 dm").arg(feature.minimum));
        m_Ui.editInstrRangeMax->setText(
            QString("%1 dm   (%2 nmi)")
                .arg(feature.maximum)
                .arg(feature.maximum / 18520.0, 0, 'f', 1));
      }
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_LocalIRControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureLocalIR();
      ExtractFeatureControlEnum(feature, m_Ui.chckUserControlLocalIR,
                                m_Ui.editUserControlLocalIR);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_LEDControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureLED();
      ExtractFeatureControlEnum(feature, m_Ui.chckUserControlLED,
                                m_Ui.editUserControlLED);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_TargetStretchControl: {
      const Navico::Protocol::NRP::tFeatureLevel& feature =
          featureManager.GetFeatureTargetStretch();
      ExtractFeatureControlEnum(feature, m_Ui.chckUserControlTargetStretch,
                                m_Ui.editUserControlTargetStretch);
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_SeaUserGainLimits: {
      const Navico::Protocol::NRP::tFeatureGainLimits& feature =
          featureManager.GetFeatureSeaUserGainLimits();
      if (feature.supported == true) {
        m_Ui.editSeaLimitsManual->setText(QString("manual: %1 - %2")
                                              .arg(feature.manualLevelMin)
                                              .arg(feature.manualLevelMax));
        m_Ui.editSeaLimitsAuto->setText(QString("auto: %1 - %2")
                                            .arg(feature.autoOffsetMin)
                                            .arg(feature.autoOffsetMax));
      }
    } break;

    case Navico::Protocol::NRP::eFeatureEnum_SectorBlanking: {
      const Navico::Protocol::NRP::tFeatureSectorBlanking& feature =
          featureManager.GetFeatureSectorBlanking();
      if (feature.supported == true) {
        m_Ui.chckBlankSectors->setChecked(feature.enabled);
        m_Ui.editBlankSectors->setText(QString::number(feature.sectorCount) +
                                       " sectors");
      }
    } break;

    default:
      break;
  }
}
//-----------------------------------------------------------------------------
