/********************************************************************************
** Form generated from reading UI file 'GUIDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIDEMO_H
#define UI_GUIDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUIDemoClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QGroupBox *groupScanner;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushScannerQuery;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *checkScannerPower;
    QCheckBox *checkScannerTransmit;
    QCheckBox *checkScannerKickRadar;
    QLineEdit *editScannerRange;
    QGridLayout *gridLayout;
    QLabel *labelScannerType;
    QLineEdit *editScannerType;
    QLabel *labelScannerState;
    QHBoxLayout *horizontalLayout_15;
    QLineEdit *editScannerState;
    QLineEdit *editScannerTimeout;
    QLabel *labelScannerError;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editScannerError;
    QPushButton *pushScannerError;
    QLabel *labelScannerRange;
    QHBoxLayout *horizontalLayout_16;
    QSpinBox *spinScannerRange;
    QComboBox *comboScannerRange;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupInformation;
    QGridLayout *layoutInformation;
    QLabel *labelGWCompiled_;
    QLabel *label_6;
    QLabel *labelCycleCount;
    QLabel *labelGWVersion;
    QLabel *labelNavRadarSWBuildDate;
    QLabel *labelRegVersion;
    QLabel *labelRegVersion_;
    QLabel *labelGateWareSPSURevision;
    QLabel *labelScannerSWVersion;
    QLabel *labelSDKVersion;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label;
    QLabel *labelMaxRange_;
    QLabel *labelOperationTime_;
    QLabel *labelGWVersion_;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *labelGWCompiled;
    QLabel *labelNavRadarSWVersion;
    QLabel *labelMaxRange;
    QLabel *labelSDKVersion_;
    QLabel *label_3;
    QLabel *labelDriverVersion;
    QLabel *labelOperationTime;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_18;
    QGroupBox *groupMultiRadar;
    QHBoxLayout *layoutMultiRadar;
    QPushButton *pushMultiRadarConnect;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushMultiRadarQuery;
    QPushButton *pushMultiRadarClear;
    QPushButton *pushMultiRadarReset;
    QSpacerItem *spacerMultiRadarLeft;
    QLabel *label_22;
    QComboBox *_comboMultiRadarSelect;
    QPushButton *pushMultiRadarGetLockID;
    QPushButton *pushMultiRadarUnlock;
    QPushButton *pushMultiRadarUnlockAll;
    QPushButton *pushMultiRadarFlush;
    QTabWidget *tabs;
    QWidget *tabImage;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupQuery;
    QHBoxLayout *layoutQuery;
    QPushButton *pushQueryAll;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushQueryMode;
    QPushButton *pushQuerySetup;
    QPushButton *pushQueryProperties;
    QPushButton *pushQueryConfiguration;
    QPushButton *pushQueryAdvanced;
    QPushButton *pushQueryFeatures;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupUseMode;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *editUseMode;
    QComboBox *comboUseMode;
    QSpacerItem *horizontalSpacer_14;
    QGroupBox *groupStandardMiscellaneous;
    QGridLayout *gridLayout_2;
    QSlider *sliderTargetBoost;
    QSpinBox *spinIRLevel;
    QLineEdit *editIRLevel;
    QLabel *labelIRLevel;
    QSpinBox *spinTargetBoost;
    QSlider *sliderIRLevel;
    QLabel *labelTargetBoost;
    QLineEdit *editTargetBoost;
    QLabel *labelRPM;
    QLineEdit *editRPM;
    QSpinBox *spinRPM;
    QSlider *sliderRPM;
    QLabel *labelBeamSharpening;
    QLineEdit *editBeamSharpening;
    QSpinBox *spinBeamSharpening;
    QSlider *sliderBeamSharpening;
    QLineEdit *editFastScan;
    QComboBox *comboFastScan;
    QLabel *labelFastScan;
    QLabel *labelLocalIR;
    QLineEdit *editLocalIR;
    QSpinBox *spinLocalIR;
    QSlider *sliderLocalIR;
    QLabel *labeLEDs;
    QLineEdit *editLEDs;
    QSpinBox *spinLEDs;
    QSlider *sliderLEDs;
    QLabel *labelTargetStretch;
    QLineEdit *editTargetStretch;
    QSpinBox *spinTargetStretch;
    QSlider *sliderTargetStretch;
    QLabel *labelTargetStretch_2;
    QCheckBox *checkTargetStretch;
    QGroupBox *groupPulse;
    QGridLayout *gridLayout_6;
    QLabel *labelAutoTune;
    QCheckBox *checkAutoTune;
    QLineEdit *editPulseWidth;
    QSlider *sliderCoarseTune;
    QLabel *labelPulseWidth;
    QSpinBox *spinCoarseTune;
    QLineEdit *editCoarseTune;
    QLabel *labelCoarseTune;
    QLabel *labelFineTune;
    QLineEdit *editFineTune;
    QSpinBox *spinFineTune;
    QSlider *sliderFineTune;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupStandardSensitivity;
    QGridLayout *gridLayout1;
    QSpinBox *spinSeaAuto;
    QCheckBox *checkSeaFlags;
    QLabel *labelSeaAuto;
    QSlider *sliderSeaAuto;
    QLineEdit *editSTCCurveType;
    QComboBox *comboSideLobe;
    QSpinBox *spinSideLobe;
    QLineEdit *editNoiseReject;
    QLabel *labelNoiseReject;
    QSpinBox *spinNoiseReject;
    QSlider *sliderNoiseReject;
    QLineEdit *editSeaAuto;
    QLabel *labelSideLobe;
    QLineEdit *editSideLobe;
    QSlider *sliderSideLobe;
    QLabel *labelCurveType;
    QComboBox *comboSTCCurveType;
    QLabel *labelGain;
    QLineEdit *editGain;
    QSpinBox *spinGain;
    QSlider *sliderGain;
    QComboBox *comboGain;
    QLabel *labelRain;
    QLineEdit *editRain;
    QSpinBox *spinRain;
    QSlider *sliderRain;
    QLabel *labelFTC;
    QLineEdit *editFTC;
    QSpinBox *spinFTC;
    QSlider *sliderFTC;
    QLabel *labelSeaClutter;
    QLineEdit *editSeaClutter;
    QSpinBox *spinSeaClutter;
    QSlider *sliderSeaClutter;
    QComboBox *comboSeaClutter;
    QLabel *labelSea;
    QLineEdit *editSea;
    QSpinBox *spinSea;
    QSlider *sliderSea;
    QComboBox *comboSea;
    QGroupBox *groupStandardTimedTransmit;
    QGridLayout *gridLayout_11;
    QLabel *labelModeEnabled;
    QCheckBox *checkTimedTxMode;
    QLabel *labelTransmitPeriod;
    QLineEdit *editTimedTransmit;
    QSpinBox *spinTimedTransmit;
    QSlider *sliderTimedTransmit;
    QLabel *labelStandbyPeriod;
    QLineEdit *editTimedStandby;
    QSpinBox *spinTimedStandby;
    QSlider *sliderTimedStandby;
    QSpacerItem *verticalSpacer_8;
    QWidget *tabSectorBlanking;
    QHBoxLayout *horizontalLayout_7;
    QGridLayout *gridLayout_8;
    QGroupBox *groupSector0;
    QGridLayout *layoutGuard1Setup;
    QDoubleSpinBox *spinSector0End;
    QSlider *sliderSector0End;
    QLabel *labelSector0Start;
    QLineEdit *editSector0Start;
    QDoubleSpinBox *spinSector0Start;
    QSlider *sliderSector0Start;
    QLabel *labelSector0End;
    QLineEdit *editSector0End;
    QCheckBox *checkSector0Enabled;
    QGroupBox *groupSector1;
    QGridLayout *layoutGuard1Setup_2;
    QLineEdit *editSector1Start;
    QDoubleSpinBox *spinSector1Start;
    QSlider *sliderSector1Start;
    QLabel *labelSector1Start;
    QLineEdit *editSector1End;
    QSlider *sliderSector1End;
    QDoubleSpinBox *spinSector1End;
    QLabel *labelSector1End;
    QCheckBox *checkSector1Enabled;
    QGroupBox *groupSector2;
    QGridLayout *layoutGuard1Setup_3;
    QLabel *labelSector2Start;
    QLineEdit *editSector2Start;
    QDoubleSpinBox *spinSector2Start;
    QSlider *sliderSector2Start;
    QLabel *labelSector2End;
    QLineEdit *editSector2End;
    QDoubleSpinBox *spinSector2End;
    QSlider *sliderSector2End;
    QCheckBox *checkSector2Enabled;
    QGridLayout *gridLayout_10;
    QGroupBox *groupSector4;
    QGridLayout *layoutGuard1Setup_6;
    QLineEdit *editSector4Start;
    QDoubleSpinBox *spinSector4Start;
    QSlider *sliderSector4Start;
    QLabel *labelSector4Start;
    QLineEdit *editSector4End;
    QSlider *sliderSector4End;
    QDoubleSpinBox *spinSector4End;
    QLabel *labelSector4End;
    QCheckBox *checkSector4Enabled;
    QGroupBox *groupSector5;
    QGridLayout *layoutGuard1Setup_5;
    QLabel *labelSector5Start;
    QLineEdit *editSector5Start;
    QDoubleSpinBox *spinSector5Start;
    QSlider *sliderSector5Start;
    QLabel *labelSector5End;
    QLineEdit *editSector5End;
    QDoubleSpinBox *spinSector5End;
    QSlider *sliderSector5End;
    QCheckBox *checkSector5Enabled;
    QGroupBox *groupSector3;
    QGridLayout *layoutGuard1Setup_4;
    QDoubleSpinBox *spinSector3End;
    QSlider *sliderSector3End;
    QLabel *labelSector3Start;
    QLineEdit *editSector3Start;
    QDoubleSpinBox *spinSector3Start;
    QSlider *sliderSector3Start;
    QLabel *labelSector3End;
    QLineEdit *editSector3End;
    QCheckBox *checkSector3Enabled;
    QWidget *tabInstallation;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *groupImageConfiguration;
    QHBoxLayout *horizontalLayout_13;
    QGridLayout *gridLayout_13;
    QDoubleSpinBox *spinAntennaXOffset;
    QLineEdit *editAntennaXOffset;
    QLabel *labelParkPosition;
    QLineEdit *editParkPosition;
    QSpinBox *spinParkPosition;
    QSlider *sliderParkPosition;
    QLabel *labelAntennaHeight;
    QSlider *sliderAntennaHeight;
    QLabel *labelZeroRangeOffset;
    QLineEdit *editZeroRange;
    QSlider *sliderZeroRange;
    QLabel *labelZeroBearingOffset;
    QLineEdit *editZeroBearing;
    QSlider *sliderZeroBearing;
    QDoubleSpinBox *spinZeroBearing;
    QDoubleSpinBox *spinAntennaHeight;
    QDoubleSpinBox *spinZeroRange;
    QLineEdit *editAntennaHeight;
    QSlider *sliderAntennaXOffset;
    QLabel *labelAntennaXOffset;
    QLabel *labelAntennaYOffset;
    QLineEdit *editAntennaYOffset;
    QDoubleSpinBox *spinAntennaYOffset;
    QSlider *sliderAntennaYOffset;
    QSpacerItem *horizontalSpacer_141;
    QPushButton *pushFactoryDefaults;
    QGroupBox *groupAntennaType;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *editAntennaType;
    QComboBox *comboAntennaType;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *verticalSpacer_9;
    QWidget *tabFeatures;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupFeaturesMisc;
    QGridLayout *gridLayout_7;
    QLineEdit *editCombinedNoiseIR;
    QLabel *labelCombinedNoiseIR_2;
    QLineEdit *editInstrRangeMin;
    QLineEdit *editInstrRangeMax;
    QLabel *labelCombinedNoiseIR;
    QLabel *labelUseModes;
    QLineEdit *editUseModes;
    QLabel *labelExtendedSeaGain;
    QLineEdit *editSeaLimitsManual;
    QLineEdit *editSeaLimitsAuto;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelBlankSectors;
    QCheckBox *chckBlankSectors;
    QLineEdit *editBlankSectors;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_9;
    QCheckBox *chckUserControlSea;
    QLineEdit *editUserControlSidelobeGain;
    QLabel *labelUserControlFastScan;
    QCheckBox *chckUserControlSTCCurve;
    QLabel *labelUserControlLED;
    QLineEdit *editUserControlBeamSharpening;
    QLineEdit *editUserControlIR;
    QCheckBox *chckUserControlGain;
    QLineEdit *editUserControlSTCCurve;
    QLineEdit *editUserControlGain;
    QLabel *labelUserControlSeaIR;
    QLabel *labelUserControlSea;
    QCheckBox *chckUserControlRangeStretch;
    QCheckBox *chckUserControlIR;
    QLabel *labelUserControlBeamSharpening;
    QLabel *labelUserControlLocalIR;
    QLabel *labelUserControlRange;
    QLineEdit *editUserControlSea;
    QCheckBox *chckUserControlNoiseReject;
    QLineEdit *editUserControlLED;
    QLabel *labelUserControlRangeStretch;
    QLineEdit *editUserControlLocalIR;
    QLabel *labelUserControlTargetStretch;
    QLabel *labelUserControlRain;
    QCheckBox *chckUserControlRange;
    QLineEdit *editUserControlFastScan;
    QLabel *labelUserControlGain;
    QLineEdit *editUserControlTargetStretch;
    QCheckBox *chckUserControlTargetStretch;
    QLineEdit *editUserControlNoiseReject;
    QCheckBox *chckUserControlRain;
    QLabel *labelUserControlSidelobeGain;
    QCheckBox *chckUserControlLED;
    QCheckBox *chckUserControlFastScan;
    QCheckBox *chckUserControlSidelobeGain;
    QLineEdit *editUserControlRangeStretch;
    QLabel *labelUserControlNoiseReject;
    QSpacerItem *horizontalSpacer_13;
    QCheckBox *chckUserControlLocalIR;
    QCheckBox *chckUserControlBeamSharpening;
    QLineEdit *editUserControlRange;
    QLabel *labelUserControlSTCCurve;
    QLineEdit *editUserControlRain;
    QSpacerItem *verticalSpacer_71;
    QWidget *tabGuardZone;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupGuard1Zone;
    QVBoxLayout *layoutGuard1Zone;
    QGroupBox *groupGuard1Alarm;
    QGridLayout *layoutGuard1Alarm;
    QLabel *labelGuard1Type;
    QLineEdit *editGuard1Type;
    QLabel *labelGuard1State;
    QLineEdit *editGuard1State;
    QPushButton *pushGuard1Cancel;
    QSpacerItem *horizontalSpacer_16;
    QGroupBox *groupGuard1Setup;
    QGridLayout *layoutGuard1Setup1;
    QLabel *labelGuard1Enabled;
    QLabel *labelGuard1RangeStart;
    QLabel *labelGuard1RangeEnd;
    QLabel *labelGuard1Bearing;
    QLabel *labelGuard1Width;
    QLabel *labelGuard1AlarmType;
    QCheckBox *checkGuard1Enabled;
    QLineEdit *editGuard1RangeStart;
    QLineEdit *editGuard1RangeEnd;
    QLineEdit *editGuard1Bearing;
    QLineEdit *editGuard1Width;
    QLineEdit *editGuard1AlarmType;
    QSpinBox *spinGuard1RangeStart;
    QSpinBox *spinGuard1RangeEnd;
    QComboBox *comboGuard1AlarmType;
    QSlider *sliderGuard1RangeStart;
    QSlider *sliderGuard1RangeEnd;
    QSlider *sliderGuard1Bearing;
    QSlider *sliderGuard1Width;
    QSpinBox *spinGuard1Bearing;
    QSpinBox *spinGuard1Width;
    QGroupBox *groupGuard2Zone;
    QVBoxLayout *layoutGuard2Zone;
    QGroupBox *groupGuard2Alarm;
    QGridLayout *layoutGuard2Alarm;
    QLabel *labelGuard2Type;
    QLineEdit *editGuard2Type;
    QLabel *labelGuard2State;
    QLineEdit *editGuard2State;
    QPushButton *pushGuard2Cancel;
    QSpacerItem *horizontalSpacer_17;
    QGroupBox *groupGuard2Setup;
    QGridLayout *layoutGuard2Setup;
    QLabel *labelGuard2Enabled;
    QCheckBox *checkGuard2Enabled;
    QLabel *labelGuard2RangeStart;
    QLineEdit *editGuard2RangeStart;
    QLabel *labelGuard2RangeEnd;
    QLineEdit *editGuard2RangeEnd;
    QLabel *labelGuard2Bearing;
    QLineEdit *editGuard2Bearing;
    QLabel *labelGuard2Width;
    QLineEdit *editGuard2Width;
    QLabel *labelGuard2AlarmType;
    QLineEdit *editGuard2AlarmType;
    QSpinBox *spinGuard2RangeStart;
    QSpinBox *spinGuard2RangeEnd;
    QComboBox *comboGuard2AlarmType;
    QSlider *sliderGuard2RangeStart;
    QSlider *sliderGuard2RangeEnd;
    QSlider *sliderGuard2Bearing;
    QSlider *sliderGuard2Width;
    QSpinBox *spinGuard2Bearing;
    QSpinBox *spinGuard2Width;
    QHBoxLayout *horizontalLayout_19;
    QGroupBox *groupGuardMiscellaneous;
    QGridLayout *gridLayout_21;
    QLabel *labelGuardSensitivity;
    QLineEdit *editGuardSensitivity;
    QSpinBox *spinGuardSensitivity;
    QSlider *sliderGuardSensitivity;
    QSpacerItem *horizontalSpacer_151;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabAdvanced;
    QVBoxLayout *verticalLayout_101;
    QGroupBox *groupAdvancedControls;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupRange;
    QGridLayout *layoutRange;
    QLabel *labelRangeTrim;
    QLineEdit *editRangeTrim;
    QSlider *sliderRangeTrim;
    QLabel *labelRangeRate;
    QLineEdit *editRangeRate;
    QSlider *sliderRangeRate;
    QDoubleSpinBox *spinRangeTrim;
    QSpinBox *spinRangeRate;
    QGroupBox *groupSea;
    QGridLayout *layoutSea;
    QLabel *labelSeaTrim;
    QLineEdit *editSeaTrim;
    QSlider *sliderSeaTrim;
    QLabel *labelSeaRate1;
    QLineEdit *editSeaRate1;
    QSlider *sliderSeaRate1;
    QLabel *labelSeaRate2;
    QLineEdit *editSeaRate2;
    QSlider *sliderSeaRate2;
    QDoubleSpinBox *spinSeaTrim;
    QSpinBox *spinSeaRate1;
    QSpinBox *spinSeaRate2;
    QGroupBox *groupRain;
    QGridLayout *layoutRain;
    QLabel *labelRainTrim;
    QLineEdit *editRainTrim;
    QSlider *sliderRainTrim;
    QDoubleSpinBox *spinRainTrim;
    QLineEdit *editRainRate;
    QSlider *sliderRainRate;
    QLabel *labelRainRate;
    QSpinBox *spinRainRate;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupMiscellaneous;
    QGridLayout *gridLayout_4;
    QLabel *labelUserMinSNR;
    QLineEdit *editUserMinSNR;
    QDoubleSpinBox *spinUserMinSNR;
    QSlider *sliderUserMinSNR;
    QLabel *labelVideoAperture;
    QLineEdit *editVideoAperture;
    QDoubleSpinBox *spinVideoAperture;
    QSlider *sliderVideoAperture;
    QLabel *labelMainBangSuppression;
    QCheckBox *checkMainBangSuppression;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer;
    QWidget *tabBScan;
    QVBoxLayout *verticalLayout_tabBscan;
    QWidget *tabPPI;
    QVBoxLayout *verticalLayout_tabPPI;
    QWidget *tabTargets;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_61;
    QGroupBox *groupTargetsQuery;
    QHBoxLayout *horizontalLayout_51;
    QPushButton *pushTargetsQueryAll;
    QPushButton *pushTargetsQuerySetup;
    QPushButton *pushTargetsQueryTargets;
    QGroupBox *AlaramSetupGroup;
    QHBoxLayout *horizontalLayout_41;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelDangerZoneDist;
    QLineEdit *editDangerZoneDist;
    QSpinBox *spinDangerZoneDist;
    QSlider *sliderDangerZoneDist;
    QHBoxLayout *horizontalLayout_31;
    QLabel *labelDangerZoneTime;
    QLineEdit *editDangerZoneTime;
    QSpinBox *spinDangerZoneTime;
    QSlider *sliderDangerZoneTime;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupTargetsCancel;
    QHBoxLayout *horizontalLayout_71;
    QPushButton *pushCancelAll;
    QPushButton *pushCancelSelection;
    QPushButton *pushCancelDisplay;
    QTableWidget *tableTargets;
    QWidget *tabNewFunction;
    QPushButton *pushButton;

    void setupUi(QMainWindow *GUIDemoClass)
    {
        if (GUIDemoClass->objectName().isEmpty())
            GUIDemoClass->setObjectName(QStringLiteral("GUIDemoClass"));
        GUIDemoClass->resize(973, 810);
        GUIDemoClass->setMinimumSize(QSize(900, 407));
        centralWidget = new QWidget(GUIDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        groupScanner = new QGroupBox(centralWidget);
        groupScanner->setObjectName(QStringLiteral("groupScanner"));
        groupScanner->setEnabled(false);
        groupScanner->setMinimumSize(QSize(315, 135));
        groupScanner->setMaximumSize(QSize(390, 140));
        horizontalLayout_11 = new QHBoxLayout(groupScanner);
        horizontalLayout_11->setSpacing(8);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 3, -1, 9);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        pushScannerQuery = new QPushButton(groupScanner);
        pushScannerQuery->setObjectName(QStringLiteral("pushScannerQuery"));
        pushScannerQuery->setMinimumSize(QSize(25, 20));
        pushScannerQuery->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_14->addWidget(pushScannerQuery);

        horizontalSpacer_7 = new QSpacerItem(30, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_14);

        checkScannerPower = new QCheckBox(groupScanner);
        checkScannerPower->setObjectName(QStringLiteral("checkScannerPower"));

        verticalLayout_4->addWidget(checkScannerPower);

        checkScannerTransmit = new QCheckBox(groupScanner);
        checkScannerTransmit->setObjectName(QStringLiteral("checkScannerTransmit"));
        checkScannerTransmit->setMaximumSize(QSize(16777215, 15));

        verticalLayout_4->addWidget(checkScannerTransmit);

        checkScannerKickRadar = new QCheckBox(groupScanner);
        checkScannerKickRadar->setObjectName(QStringLiteral("checkScannerKickRadar"));
        checkScannerKickRadar->setMaximumSize(QSize(16777215, 16777210));
        checkScannerKickRadar->setLayoutDirection(Qt::RightToLeft);
        checkScannerKickRadar->setChecked(true);

        verticalLayout_4->addWidget(checkScannerKickRadar);

        editScannerRange = new QLineEdit(groupScanner);
        editScannerRange->setObjectName(QStringLiteral("editScannerRange"));
        editScannerRange->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editScannerRange->sizePolicy().hasHeightForWidth());
        editScannerRange->setSizePolicy(sizePolicy);
        editScannerRange->setMinimumSize(QSize(0, 20));
        editScannerRange->setMaximumSize(QSize(16777215, 16777215));
        editScannerRange->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editScannerRange->setReadOnly(true);

        verticalLayout_4->addWidget(editScannerRange);


        horizontalLayout_11->addLayout(verticalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(3);
        labelScannerType = new QLabel(groupScanner);
        labelScannerType->setObjectName(QStringLiteral("labelScannerType"));
        labelScannerType->setMinimumSize(QSize(0, 20));
        labelScannerType->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelScannerType, 0, 0, 1, 1);

        editScannerType = new QLineEdit(groupScanner);
        editScannerType->setObjectName(QStringLiteral("editScannerType"));
        editScannerType->setEnabled(false);
        editScannerType->setMinimumSize(QSize(0, 20));
        editScannerType->setReadOnly(true);

        gridLayout->addWidget(editScannerType, 0, 1, 1, 1);

        labelScannerState = new QLabel(groupScanner);
        labelScannerState->setObjectName(QStringLiteral("labelScannerState"));
        labelScannerState->setMinimumSize(QSize(0, 20));
        labelScannerState->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelScannerState, 1, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(3);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        editScannerState = new QLineEdit(groupScanner);
        editScannerState->setObjectName(QStringLiteral("editScannerState"));
        editScannerState->setEnabled(false);
        editScannerState->setMinimumSize(QSize(0, 20));
        editScannerState->setReadOnly(true);

        horizontalLayout_15->addWidget(editScannerState);

        editScannerTimeout = new QLineEdit(groupScanner);
        editScannerTimeout->setObjectName(QStringLiteral("editScannerTimeout"));
        editScannerTimeout->setEnabled(false);
        editScannerTimeout->setMaximumSize(QSize(25, 16777215));
        editScannerTimeout->setReadOnly(true);

        horizontalLayout_15->addWidget(editScannerTimeout);


        gridLayout->addLayout(horizontalLayout_15, 1, 1, 1, 1);

        labelScannerError = new QLabel(groupScanner);
        labelScannerError->setObjectName(QStringLiteral("labelScannerError"));
        labelScannerError->setMinimumSize(QSize(0, 20));
        labelScannerError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelScannerError, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        editScannerError = new QLineEdit(groupScanner);
        editScannerError->setObjectName(QStringLiteral("editScannerError"));
        editScannerError->setEnabled(false);
        editScannerError->setMinimumSize(QSize(0, 20));
        editScannerError->setReadOnly(true);

        horizontalLayout->addWidget(editScannerError);

        pushScannerError = new QPushButton(groupScanner);
        pushScannerError->setObjectName(QStringLiteral("pushScannerError"));
        pushScannerError->setMaximumSize(QSize(25, 16777215));

        horizontalLayout->addWidget(pushScannerError);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        labelScannerRange = new QLabel(groupScanner);
        labelScannerRange->setObjectName(QStringLiteral("labelScannerRange"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelScannerRange->sizePolicy().hasHeightForWidth());
        labelScannerRange->setSizePolicy(sizePolicy1);
        labelScannerRange->setMinimumSize(QSize(0, 20));
        labelScannerRange->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelScannerRange, 3, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        spinScannerRange = new QSpinBox(groupScanner);
        spinScannerRange->setObjectName(QStringLiteral("spinScannerRange"));
        spinScannerRange->setMinimumSize(QSize(70, 20));
        spinScannerRange->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinScannerRange->setMinimum(1);
        spinScannerRange->setMaximum(200000);
        spinScannerRange->setValue(29);

        horizontalLayout_16->addWidget(spinScannerRange);

        comboScannerRange = new QComboBox(groupScanner);
        comboScannerRange->setObjectName(QStringLiteral("comboScannerRange"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboScannerRange->sizePolicy().hasHeightForWidth());
        comboScannerRange->setSizePolicy(sizePolicy2);
        comboScannerRange->setMinimumSize(QSize(70, 20));
        comboScannerRange->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_16->addWidget(comboScannerRange);


        gridLayout->addLayout(horizontalLayout_16, 3, 1, 1, 1);


        horizontalLayout_11->addLayout(gridLayout);


        horizontalLayout_12->addWidget(groupScanner);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupInformation = new QGroupBox(centralWidget);
        groupInformation->setObjectName(QStringLiteral("groupInformation"));
        groupInformation->setMinimumSize(QSize(571, 119));
        groupInformation->setMaximumSize(QSize(571, 130));
        layoutInformation = new QGridLayout(groupInformation);
        layoutInformation->setSpacing(6);
        layoutInformation->setContentsMargins(11, 11, 11, 11);
        layoutInformation->setObjectName(QStringLiteral("layoutInformation"));
        layoutInformation->setHorizontalSpacing(14);
        layoutInformation->setContentsMargins(-1, 4, -1, -1);
        labelGWCompiled_ = new QLabel(groupInformation);
        labelGWCompiled_->setObjectName(QStringLiteral("labelGWCompiled_"));

        layoutInformation->addWidget(labelGWCompiled_, 3, 4, 1, 1);

        label_6 = new QLabel(groupInformation);
        label_6->setObjectName(QStringLiteral("label_6"));

        layoutInformation->addWidget(label_6, 3, 0, 1, 1);

        labelCycleCount = new QLabel(groupInformation);
        labelCycleCount->setObjectName(QStringLiteral("labelCycleCount"));

        layoutInformation->addWidget(labelCycleCount, 4, 3, 1, 1);

        labelGWVersion = new QLabel(groupInformation);
        labelGWVersion->setObjectName(QStringLiteral("labelGWVersion"));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        labelGWVersion->setFont(font);

        layoutInformation->addWidget(labelGWVersion, 2, 5, 1, 1);

        labelNavRadarSWBuildDate = new QLabel(groupInformation);
        labelNavRadarSWBuildDate->setObjectName(QStringLiteral("labelNavRadarSWBuildDate"));
        labelNavRadarSWBuildDate->setFont(font);

        layoutInformation->addWidget(labelNavRadarSWBuildDate, 2, 1, 1, 1);

        labelRegVersion = new QLabel(groupInformation);
        labelRegVersion->setObjectName(QStringLiteral("labelRegVersion"));

        layoutInformation->addWidget(labelRegVersion, 1, 5, 1, 1);

        labelRegVersion_ = new QLabel(groupInformation);
        labelRegVersion_->setObjectName(QStringLiteral("labelRegVersion_"));

        layoutInformation->addWidget(labelRegVersion_, 1, 4, 1, 1);

        labelGateWareSPSURevision = new QLabel(groupInformation);
        labelGateWareSPSURevision->setObjectName(QStringLiteral("labelGateWareSPSURevision"));

        layoutInformation->addWidget(labelGateWareSPSURevision, 4, 5, 1, 1);

        labelScannerSWVersion = new QLabel(groupInformation);
        labelScannerSWVersion->setObjectName(QStringLiteral("labelScannerSWVersion"));

        layoutInformation->addWidget(labelScannerSWVersion, 1, 3, 1, 1);

        labelSDKVersion = new QLabel(groupInformation);
        labelSDKVersion->setObjectName(QStringLiteral("labelSDKVersion"));

        layoutInformation->addWidget(labelSDKVersion, 4, 1, 1, 1);

        label_5 = new QLabel(groupInformation);
        label_5->setObjectName(QStringLiteral("label_5"));

        layoutInformation->addWidget(label_5, 2, 0, 1, 1);

        label_8 = new QLabel(groupInformation);
        label_8->setObjectName(QStringLiteral("label_8"));

        layoutInformation->addWidget(label_8, 1, 2, 1, 1);

        label = new QLabel(groupInformation);
        label->setObjectName(QStringLiteral("label"));

        layoutInformation->addWidget(label, 4, 2, 1, 1);

        labelMaxRange_ = new QLabel(groupInformation);
        labelMaxRange_->setObjectName(QStringLiteral("labelMaxRange_"));

        layoutInformation->addWidget(labelMaxRange_, 2, 2, 1, 1);

        labelOperationTime_ = new QLabel(groupInformation);
        labelOperationTime_->setObjectName(QStringLiteral("labelOperationTime_"));

        layoutInformation->addWidget(labelOperationTime_, 3, 2, 1, 1);

        labelGWVersion_ = new QLabel(groupInformation);
        labelGWVersion_->setObjectName(QStringLiteral("labelGWVersion_"));

        layoutInformation->addWidget(labelGWVersion_, 2, 4, 1, 1);

        label_7 = new QLabel(groupInformation);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        label_7->setFont(font1);

        layoutInformation->addWidget(label_7, 0, 2, 1, 2);

        label_4 = new QLabel(groupInformation);
        label_4->setObjectName(QStringLiteral("label_4"));

        layoutInformation->addWidget(label_4, 1, 0, 1, 1);

        labelGWCompiled = new QLabel(groupInformation);
        labelGWCompiled->setObjectName(QStringLiteral("labelGWCompiled"));

        layoutInformation->addWidget(labelGWCompiled, 3, 5, 1, 1);

        labelNavRadarSWVersion = new QLabel(groupInformation);
        labelNavRadarSWVersion->setObjectName(QStringLiteral("labelNavRadarSWVersion"));
        labelNavRadarSWVersion->setMinimumSize(QSize(140, 0));

        layoutInformation->addWidget(labelNavRadarSWVersion, 1, 1, 1, 1);

        labelMaxRange = new QLabel(groupInformation);
        labelMaxRange->setObjectName(QStringLiteral("labelMaxRange"));
        labelMaxRange->setFont(font);

        layoutInformation->addWidget(labelMaxRange, 2, 3, 1, 1);

        labelSDKVersion_ = new QLabel(groupInformation);
        labelSDKVersion_->setObjectName(QStringLiteral("labelSDKVersion_"));

        layoutInformation->addWidget(labelSDKVersion_, 4, 0, 1, 1);

        label_3 = new QLabel(groupInformation);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        layoutInformation->addWidget(label_3, 0, 0, 1, 2);

        labelDriverVersion = new QLabel(groupInformation);
        labelDriverVersion->setObjectName(QStringLiteral("labelDriverVersion"));

        layoutInformation->addWidget(labelDriverVersion, 3, 1, 1, 1);

        labelOperationTime = new QLabel(groupInformation);
        labelOperationTime->setObjectName(QStringLiteral("labelOperationTime"));
        labelOperationTime->setFont(font);

        layoutInformation->addWidget(labelOperationTime, 3, 3, 1, 1);

        label_14 = new QLabel(groupInformation);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);

        layoutInformation->addWidget(label_14, 0, 4, 1, 2);


        verticalLayout->addWidget(groupInformation);


        horizontalLayout_12->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        groupMultiRadar = new QGroupBox(centralWidget);
        groupMultiRadar->setObjectName(QStringLiteral("groupMultiRadar"));
        layoutMultiRadar = new QHBoxLayout(groupMultiRadar);
        layoutMultiRadar->setSpacing(3);
        layoutMultiRadar->setContentsMargins(11, 11, 11, 11);
        layoutMultiRadar->setObjectName(QStringLiteral("layoutMultiRadar"));
        layoutMultiRadar->setContentsMargins(-1, 3, -1, -1);
        pushMultiRadarConnect = new QPushButton(groupMultiRadar);
        pushMultiRadarConnect->setObjectName(QStringLiteral("pushMultiRadarConnect"));
        pushMultiRadarConnect->setMinimumSize(QSize(60, 20));
        pushMultiRadarConnect->setCheckable(true);

        layoutMultiRadar->addWidget(pushMultiRadarConnect);

        horizontalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        layoutMultiRadar->addItem(horizontalSpacer_12);

        pushMultiRadarQuery = new QPushButton(groupMultiRadar);
        pushMultiRadarQuery->setObjectName(QStringLiteral("pushMultiRadarQuery"));
        pushMultiRadarQuery->setMinimumSize(QSize(0, 20));
        pushMultiRadarQuery->setMaximumSize(QSize(60, 16777215));

        layoutMultiRadar->addWidget(pushMultiRadarQuery);

        pushMultiRadarClear = new QPushButton(groupMultiRadar);
        pushMultiRadarClear->setObjectName(QStringLiteral("pushMultiRadarClear"));
        pushMultiRadarClear->setMinimumSize(QSize(0, 20));
        pushMultiRadarClear->setMaximumSize(QSize(60, 16777215));

        layoutMultiRadar->addWidget(pushMultiRadarClear);

        pushMultiRadarReset = new QPushButton(groupMultiRadar);
        pushMultiRadarReset->setObjectName(QStringLiteral("pushMultiRadarReset"));
        pushMultiRadarReset->setMinimumSize(QSize(0, 20));
        pushMultiRadarReset->setMaximumSize(QSize(42, 16777215));

        layoutMultiRadar->addWidget(pushMultiRadarReset);

        spacerMultiRadarLeft = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        layoutMultiRadar->addItem(spacerMultiRadarLeft);

        label_22 = new QLabel(groupMultiRadar);
        label_22->setObjectName(QStringLiteral("label_22"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy3);

        layoutMultiRadar->addWidget(label_22);

        _comboMultiRadarSelect = new QComboBox(groupMultiRadar);
        _comboMultiRadarSelect->setObjectName(QStringLiteral("_comboMultiRadarSelect"));
        sizePolicy.setHeightForWidth(_comboMultiRadarSelect->sizePolicy().hasHeightForWidth());
        _comboMultiRadarSelect->setSizePolicy(sizePolicy);
        _comboMultiRadarSelect->setMinimumSize(QSize(130, 0));

        layoutMultiRadar->addWidget(_comboMultiRadarSelect);

        pushMultiRadarGetLockID = new QPushButton(groupMultiRadar);
        pushMultiRadarGetLockID->setObjectName(QStringLiteral("pushMultiRadarGetLockID"));
        pushMultiRadarGetLockID->setMinimumSize(QSize(0, 20));
        pushMultiRadarGetLockID->setMaximumSize(QSize(60, 16777215));

        layoutMultiRadar->addWidget(pushMultiRadarGetLockID);

        pushMultiRadarUnlock = new QPushButton(groupMultiRadar);
        pushMultiRadarUnlock->setObjectName(QStringLiteral("pushMultiRadarUnlock"));
        pushMultiRadarUnlock->setMinimumSize(QSize(0, 20));
        pushMultiRadarUnlock->setMaximumSize(QSize(60, 16777215));

        layoutMultiRadar->addWidget(pushMultiRadarUnlock);

        pushMultiRadarUnlockAll = new QPushButton(groupMultiRadar);
        pushMultiRadarUnlockAll->setObjectName(QStringLiteral("pushMultiRadarUnlockAll"));
        pushMultiRadarUnlockAll->setMaximumSize(QSize(42, 16777215));

        layoutMultiRadar->addWidget(pushMultiRadarUnlockAll);

        pushMultiRadarFlush = new QPushButton(groupMultiRadar);
        pushMultiRadarFlush->setObjectName(QStringLiteral("pushMultiRadarFlush"));
        pushMultiRadarFlush->setMaximumSize(QSize(42, 16777215));

        layoutMultiRadar->addWidget(pushMultiRadarFlush);


        horizontalLayout_18->addWidget(groupMultiRadar);


        verticalLayout_5->addLayout(horizontalLayout_18);

        tabs = new QTabWidget(centralWidget);
        tabs->setObjectName(QStringLiteral("tabs"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(tabs->sizePolicy().hasHeightForWidth());
        tabs->setSizePolicy(sizePolicy4);
        tabs->setMinimumSize(QSize(300, 300));
        tabImage = new QWidget();
        tabImage->setObjectName(QStringLiteral("tabImage"));
        tabImage->setEnabled(false);
        verticalLayout_15 = new QVBoxLayout(tabImage);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        groupQuery = new QGroupBox(tabImage);
        groupQuery->setObjectName(QStringLiteral("groupQuery"));
        layoutQuery = new QHBoxLayout(groupQuery);
        layoutQuery->setSpacing(6);
        layoutQuery->setContentsMargins(11, 11, 11, 11);
        layoutQuery->setObjectName(QStringLiteral("layoutQuery"));
        layoutQuery->setContentsMargins(-1, 3, -1, -1);
        pushQueryAll = new QPushButton(groupQuery);
        pushQueryAll->setObjectName(QStringLiteral("pushQueryAll"));

        layoutQuery->addWidget(pushQueryAll);

        horizontalSpacer_10 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        layoutQuery->addItem(horizontalSpacer_10);

        pushQueryMode = new QPushButton(groupQuery);
        pushQueryMode->setObjectName(QStringLiteral("pushQueryMode"));
        pushQueryMode->setMinimumSize(QSize(90, 0));

        layoutQuery->addWidget(pushQueryMode);

        pushQuerySetup = new QPushButton(groupQuery);
        pushQuerySetup->setObjectName(QStringLiteral("pushQuerySetup"));
        pushQuerySetup->setMinimumSize(QSize(90, 0));

        layoutQuery->addWidget(pushQuerySetup);

        pushQueryProperties = new QPushButton(groupQuery);
        pushQueryProperties->setObjectName(QStringLiteral("pushQueryProperties"));
        pushQueryProperties->setMinimumSize(QSize(90, 0));

        layoutQuery->addWidget(pushQueryProperties);

        pushQueryConfiguration = new QPushButton(groupQuery);
        pushQueryConfiguration->setObjectName(QStringLiteral("pushQueryConfiguration"));
        pushQueryConfiguration->setMinimumSize(QSize(90, 0));

        layoutQuery->addWidget(pushQueryConfiguration);

        pushQueryAdvanced = new QPushButton(groupQuery);
        pushQueryAdvanced->setObjectName(QStringLiteral("pushQueryAdvanced"));
        pushQueryAdvanced->setMinimumSize(QSize(90, 0));

        layoutQuery->addWidget(pushQueryAdvanced);

        pushQueryFeatures = new QPushButton(groupQuery);
        pushQueryFeatures->setObjectName(QStringLiteral("pushQueryFeatures"));
        pushQueryFeatures->setMinimumSize(QSize(90, 0));

        layoutQuery->addWidget(pushQueryFeatures);


        verticalLayout_15->addWidget(groupQuery);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        groupUseMode = new QGroupBox(tabImage);
        groupUseMode->setObjectName(QStringLiteral("groupUseMode"));
        groupUseMode->setMinimumSize(QSize(0, 0));
        horizontalLayout_5 = new QHBoxLayout(groupUseMode);
        horizontalLayout_5->setSpacing(12);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 6, -1, -1);
        editUseMode = new QLineEdit(groupUseMode);
        editUseMode->setObjectName(QStringLiteral("editUseMode"));
        editUseMode->setEnabled(false);
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(editUseMode->sizePolicy().hasHeightForWidth());
        editUseMode->setSizePolicy(sizePolicy5);
        editUseMode->setMinimumSize(QSize(120, 20));
        editUseMode->setMaximumSize(QSize(0, 16777215));
        editUseMode->setReadOnly(true);

        horizontalLayout_5->addWidget(editUseMode);

        comboUseMode = new QComboBox(groupUseMode);
        comboUseMode->setObjectName(QStringLiteral("comboUseMode"));
        sizePolicy2.setHeightForWidth(comboUseMode->sizePolicy().hasHeightForWidth());
        comboUseMode->setSizePolicy(sizePolicy2);
        comboUseMode->setMinimumSize(QSize(100, 20));

        horizontalLayout_5->addWidget(comboUseMode);

        horizontalSpacer_14 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_14);


        verticalLayout_12->addWidget(groupUseMode);

        groupStandardMiscellaneous = new QGroupBox(tabImage);
        groupStandardMiscellaneous->setObjectName(QStringLiteral("groupStandardMiscellaneous"));
        gridLayout_2 = new QGridLayout(groupStandardMiscellaneous);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 6, -1, -1);
        sliderTargetBoost = new QSlider(groupStandardMiscellaneous);
        sliderTargetBoost->setObjectName(QStringLiteral("sliderTargetBoost"));
        sliderTargetBoost->setMaximum(2);
        sliderTargetBoost->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderTargetBoost, 6, 3, 1, 1);

        spinIRLevel = new QSpinBox(groupStandardMiscellaneous);
        spinIRLevel->setObjectName(QStringLiteral("spinIRLevel"));
        spinIRLevel->setKeyboardTracking(false);
        spinIRLevel->setMaximum(3);

        gridLayout_2->addWidget(spinIRLevel, 3, 2, 1, 1);

        editIRLevel = new QLineEdit(groupStandardMiscellaneous);
        editIRLevel->setObjectName(QStringLiteral("editIRLevel"));
        editIRLevel->setEnabled(false);
        editIRLevel->setMaximumSize(QSize(50, 16777215));
        editIRLevel->setReadOnly(true);

        gridLayout_2->addWidget(editIRLevel, 3, 1, 1, 1);

        labelIRLevel = new QLabel(groupStandardMiscellaneous);
        labelIRLevel->setObjectName(QStringLiteral("labelIRLevel"));

        gridLayout_2->addWidget(labelIRLevel, 3, 0, 1, 1);

        spinTargetBoost = new QSpinBox(groupStandardMiscellaneous);
        spinTargetBoost->setObjectName(QStringLiteral("spinTargetBoost"));
        spinTargetBoost->setKeyboardTracking(false);
        spinTargetBoost->setMaximum(2);

        gridLayout_2->addWidget(spinTargetBoost, 6, 2, 1, 1);

        sliderIRLevel = new QSlider(groupStandardMiscellaneous);
        sliderIRLevel->setObjectName(QStringLiteral("sliderIRLevel"));
        sliderIRLevel->setMaximum(3);
        sliderIRLevel->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderIRLevel, 3, 3, 1, 1);

        labelTargetBoost = new QLabel(groupStandardMiscellaneous);
        labelTargetBoost->setObjectName(QStringLiteral("labelTargetBoost"));

        gridLayout_2->addWidget(labelTargetBoost, 6, 0, 1, 1);

        editTargetBoost = new QLineEdit(groupStandardMiscellaneous);
        editTargetBoost->setObjectName(QStringLiteral("editTargetBoost"));
        editTargetBoost->setEnabled(false);
        editTargetBoost->setMaximumSize(QSize(50, 16777215));
        editTargetBoost->setReadOnly(true);

        gridLayout_2->addWidget(editTargetBoost, 6, 1, 1, 1);

        labelRPM = new QLabel(groupStandardMiscellaneous);
        labelRPM->setObjectName(QStringLiteral("labelRPM"));

        gridLayout_2->addWidget(labelRPM, 1, 0, 1, 1);

        editRPM = new QLineEdit(groupStandardMiscellaneous);
        editRPM->setObjectName(QStringLiteral("editRPM"));
        editRPM->setEnabled(false);
        editRPM->setMaximumSize(QSize(50, 16777215));
        editRPM->setReadOnly(true);

        gridLayout_2->addWidget(editRPM, 1, 1, 1, 1);

        spinRPM = new QSpinBox(groupStandardMiscellaneous);
        spinRPM->setObjectName(QStringLiteral("spinRPM"));
        spinRPM->setKeyboardTracking(false);
        spinRPM->setMaximum(120);
        spinRPM->setValue(24);

        gridLayout_2->addWidget(spinRPM, 1, 2, 1, 1);

        sliderRPM = new QSlider(groupStandardMiscellaneous);
        sliderRPM->setObjectName(QStringLiteral("sliderRPM"));
        sliderRPM->setMaximum(120);
        sliderRPM->setValue(24);
        sliderRPM->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderRPM, 1, 3, 1, 1);

        labelBeamSharpening = new QLabel(groupStandardMiscellaneous);
        labelBeamSharpening->setObjectName(QStringLiteral("labelBeamSharpening"));

        gridLayout_2->addWidget(labelBeamSharpening, 5, 0, 1, 1);

        editBeamSharpening = new QLineEdit(groupStandardMiscellaneous);
        editBeamSharpening->setObjectName(QStringLiteral("editBeamSharpening"));
        editBeamSharpening->setEnabled(false);
        editBeamSharpening->setMaximumSize(QSize(50, 16777215));
        editBeamSharpening->setReadOnly(true);

        gridLayout_2->addWidget(editBeamSharpening, 5, 1, 1, 1);

        spinBeamSharpening = new QSpinBox(groupStandardMiscellaneous);
        spinBeamSharpening->setObjectName(QStringLiteral("spinBeamSharpening"));
        spinBeamSharpening->setKeyboardTracking(false);
        spinBeamSharpening->setMaximum(3);

        gridLayout_2->addWidget(spinBeamSharpening, 5, 2, 1, 1);

        sliderBeamSharpening = new QSlider(groupStandardMiscellaneous);
        sliderBeamSharpening->setObjectName(QStringLiteral("sliderBeamSharpening"));
        sliderBeamSharpening->setMaximum(3);
        sliderBeamSharpening->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderBeamSharpening, 5, 3, 1, 1);

        editFastScan = new QLineEdit(groupStandardMiscellaneous);
        editFastScan->setObjectName(QStringLiteral("editFastScan"));
        editFastScan->setEnabled(false);
        editFastScan->setMaximumSize(QSize(50, 16777215));
        editFastScan->setReadOnly(true);

        gridLayout_2->addWidget(editFastScan, 0, 1, 1, 1);

        comboFastScan = new QComboBox(groupStandardMiscellaneous);
        comboFastScan->setObjectName(QStringLiteral("comboFastScan"));
        sizePolicy2.setHeightForWidth(comboFastScan->sizePolicy().hasHeightForWidth());
        comboFastScan->setSizePolicy(sizePolicy2);
        comboFastScan->setMinimumSize(QSize(40, 0));

        gridLayout_2->addWidget(comboFastScan, 0, 2, 1, 1);

        labelFastScan = new QLabel(groupStandardMiscellaneous);
        labelFastScan->setObjectName(QStringLiteral("labelFastScan"));

        gridLayout_2->addWidget(labelFastScan, 0, 0, 1, 1);

        labelLocalIR = new QLabel(groupStandardMiscellaneous);
        labelLocalIR->setObjectName(QStringLiteral("labelLocalIR"));

        gridLayout_2->addWidget(labelLocalIR, 4, 0, 1, 1);

        editLocalIR = new QLineEdit(groupStandardMiscellaneous);
        editLocalIR->setObjectName(QStringLiteral("editLocalIR"));
        editLocalIR->setEnabled(false);
        editLocalIR->setMaximumSize(QSize(50, 16777215));
        editLocalIR->setReadOnly(true);

        gridLayout_2->addWidget(editLocalIR, 4, 1, 1, 1);

        spinLocalIR = new QSpinBox(groupStandardMiscellaneous);
        spinLocalIR->setObjectName(QStringLiteral("spinLocalIR"));
        spinLocalIR->setKeyboardTracking(false);
        spinLocalIR->setMaximum(3);

        gridLayout_2->addWidget(spinLocalIR, 4, 2, 1, 1);

        sliderLocalIR = new QSlider(groupStandardMiscellaneous);
        sliderLocalIR->setObjectName(QStringLiteral("sliderLocalIR"));
        sliderLocalIR->setMaximum(3);
        sliderLocalIR->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderLocalIR, 4, 3, 1, 1);

        labeLEDs = new QLabel(groupStandardMiscellaneous);
        labeLEDs->setObjectName(QStringLiteral("labeLEDs"));

        gridLayout_2->addWidget(labeLEDs, 2, 0, 1, 1);

        editLEDs = new QLineEdit(groupStandardMiscellaneous);
        editLEDs->setObjectName(QStringLiteral("editLEDs"));
        editLEDs->setEnabled(false);
        editLEDs->setMaximumSize(QSize(50, 16777215));
        editLEDs->setReadOnly(true);

        gridLayout_2->addWidget(editLEDs, 2, 1, 1, 1);

        spinLEDs = new QSpinBox(groupStandardMiscellaneous);
        spinLEDs->setObjectName(QStringLiteral("spinLEDs"));
        spinLEDs->setKeyboardTracking(false);
        spinLEDs->setMaximum(3);

        gridLayout_2->addWidget(spinLEDs, 2, 2, 1, 1);

        sliderLEDs = new QSlider(groupStandardMiscellaneous);
        sliderLEDs->setObjectName(QStringLiteral("sliderLEDs"));
        sliderLEDs->setMaximum(3);
        sliderLEDs->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderLEDs, 2, 3, 1, 1);

        labelTargetStretch = new QLabel(groupStandardMiscellaneous);
        labelTargetStretch->setObjectName(QStringLiteral("labelTargetStretch"));

        gridLayout_2->addWidget(labelTargetStretch, 7, 0, 1, 1);

        editTargetStretch = new QLineEdit(groupStandardMiscellaneous);
        editTargetStretch->setObjectName(QStringLiteral("editTargetStretch"));
        editTargetStretch->setEnabled(false);
        editTargetStretch->setMaximumSize(QSize(50, 16777215));
        editTargetStretch->setReadOnly(true);

        gridLayout_2->addWidget(editTargetStretch, 7, 1, 1, 1);

        spinTargetStretch = new QSpinBox(groupStandardMiscellaneous);
        spinTargetStretch->setObjectName(QStringLiteral("spinTargetStretch"));
        spinTargetStretch->setKeyboardTracking(false);
        spinTargetStretch->setMaximum(3);

        gridLayout_2->addWidget(spinTargetStretch, 7, 2, 1, 1);

        sliderTargetStretch = new QSlider(groupStandardMiscellaneous);
        sliderTargetStretch->setObjectName(QStringLiteral("sliderTargetStretch"));
        sliderTargetStretch->setMaximum(3);
        sliderTargetStretch->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderTargetStretch, 7, 3, 1, 1);

        labelTargetStretch_2 = new QLabel(groupStandardMiscellaneous);
        labelTargetStretch_2->setObjectName(QStringLiteral("labelTargetStretch_2"));
        labelTargetStretch_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelTargetStretch_2, 8, 0, 1, 1);

        checkTargetStretch = new QCheckBox(groupStandardMiscellaneous);
        checkTargetStretch->setObjectName(QStringLiteral("checkTargetStretch"));
        checkTargetStretch->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(checkTargetStretch, 8, 1, 1, 1);


        verticalLayout_12->addWidget(groupStandardMiscellaneous);

        groupPulse = new QGroupBox(tabImage);
        groupPulse->setObjectName(QStringLiteral("groupPulse"));
        gridLayout_6 = new QGridLayout(groupPulse);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(-1, 6, -1, -1);
        labelAutoTune = new QLabel(groupPulse);
        labelAutoTune->setObjectName(QStringLiteral("labelAutoTune"));
        labelAutoTune->setMinimumSize(QSize(69, 0));

        gridLayout_6->addWidget(labelAutoTune, 0, 3, 1, 1);

        checkAutoTune = new QCheckBox(groupPulse);
        checkAutoTune->setObjectName(QStringLiteral("checkAutoTune"));
        checkAutoTune->setLayoutDirection(Qt::RightToLeft);

        gridLayout_6->addWidget(checkAutoTune, 0, 2, 1, 1);

        editPulseWidth = new QLineEdit(groupPulse);
        editPulseWidth->setObjectName(QStringLiteral("editPulseWidth"));
        editPulseWidth->setEnabled(false);
        editPulseWidth->setMaximumSize(QSize(50, 16777215));
        editPulseWidth->setReadOnly(true);

        gridLayout_6->addWidget(editPulseWidth, 0, 1, 1, 1);

        sliderCoarseTune = new QSlider(groupPulse);
        sliderCoarseTune->setObjectName(QStringLiteral("sliderCoarseTune"));
        sliderCoarseTune->setMaximum(255);
        sliderCoarseTune->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(sliderCoarseTune, 1, 3, 1, 1);

        labelPulseWidth = new QLabel(groupPulse);
        labelPulseWidth->setObjectName(QStringLiteral("labelPulseWidth"));

        gridLayout_6->addWidget(labelPulseWidth, 0, 0, 1, 1);

        spinCoarseTune = new QSpinBox(groupPulse);
        spinCoarseTune->setObjectName(QStringLiteral("spinCoarseTune"));
        spinCoarseTune->setMinimumSize(QSize(59, 0));
        spinCoarseTune->setKeyboardTracking(false);
        spinCoarseTune->setMaximum(255);

        gridLayout_6->addWidget(spinCoarseTune, 1, 2, 1, 1);

        editCoarseTune = new QLineEdit(groupPulse);
        editCoarseTune->setObjectName(QStringLiteral("editCoarseTune"));
        editCoarseTune->setEnabled(false);
        editCoarseTune->setMaximumSize(QSize(50, 16777215));
        editCoarseTune->setReadOnly(true);

        gridLayout_6->addWidget(editCoarseTune, 1, 1, 1, 1);

        labelCoarseTune = new QLabel(groupPulse);
        labelCoarseTune->setObjectName(QStringLiteral("labelCoarseTune"));

        gridLayout_6->addWidget(labelCoarseTune, 1, 0, 1, 1);

        labelFineTune = new QLabel(groupPulse);
        labelFineTune->setObjectName(QStringLiteral("labelFineTune"));

        gridLayout_6->addWidget(labelFineTune, 2, 0, 1, 1);

        editFineTune = new QLineEdit(groupPulse);
        editFineTune->setObjectName(QStringLiteral("editFineTune"));
        editFineTune->setEnabled(false);
        editFineTune->setMaximumSize(QSize(50, 16777215));
        editFineTune->setReadOnly(true);

        gridLayout_6->addWidget(editFineTune, 2, 1, 1, 1);

        spinFineTune = new QSpinBox(groupPulse);
        spinFineTune->setObjectName(QStringLiteral("spinFineTune"));
        spinFineTune->setKeyboardTracking(false);
        spinFineTune->setMaximum(255);

        gridLayout_6->addWidget(spinFineTune, 2, 2, 1, 1);

        sliderFineTune = new QSlider(groupPulse);
        sliderFineTune->setObjectName(QStringLiteral("sliderFineTune"));
        sliderFineTune->setMaximum(255);
        sliderFineTune->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(sliderFineTune, 2, 3, 1, 1);


        verticalLayout_12->addWidget(groupPulse);

        verticalSpacer_7 = new QSpacerItem(17, 98, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_7);


        horizontalLayout_9->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        groupStandardSensitivity = new QGroupBox(tabImage);
        groupStandardSensitivity->setObjectName(QStringLiteral("groupStandardSensitivity"));
        groupStandardSensitivity->setChecked(false);
        gridLayout1 = new QGridLayout(groupStandardSensitivity);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(-1, 6, -1, -1);
        spinSeaAuto = new QSpinBox(groupStandardSensitivity);
        spinSeaAuto->setObjectName(QStringLiteral("spinSeaAuto"));
        spinSeaAuto->setKeyboardTracking(false);
        spinSeaAuto->setMinimum(-50);
        spinSeaAuto->setMaximum(50);

        gridLayout1->addWidget(spinSeaAuto, 8, 2, 1, 1);

        checkSeaFlags = new QCheckBox(groupStandardSensitivity);
        checkSeaFlags->setObjectName(QStringLiteral("checkSeaFlags"));
        checkSeaFlags->setLayoutDirection(Qt::RightToLeft);
        checkSeaFlags->setChecked(true);

        gridLayout1->addWidget(checkSeaFlags, 8, 4, 1, 1);

        labelSeaAuto = new QLabel(groupStandardSensitivity);
        labelSeaAuto->setObjectName(QStringLiteral("labelSeaAuto"));
        labelSeaAuto->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelSeaAuto, 8, 0, 1, 1);

        sliderSeaAuto = new QSlider(groupStandardSensitivity);
        sliderSeaAuto->setObjectName(QStringLiteral("sliderSeaAuto"));
        sliderSeaAuto->setMinimum(-50);
        sliderSeaAuto->setMaximum(50);
        sliderSeaAuto->setOrientation(Qt::Horizontal);

        gridLayout1->addWidget(sliderSeaAuto, 8, 3, 1, 1);

        editSTCCurveType = new QLineEdit(groupStandardSensitivity);
        editSTCCurveType->setObjectName(QStringLiteral("editSTCCurveType"));
        editSTCCurveType->setEnabled(false);
        editSTCCurveType->setMaximumSize(QSize(55, 16777215));
        editSTCCurveType->setReadOnly(true);

        gridLayout1->addWidget(editSTCCurveType, 2, 1, 1, 1);

        comboSideLobe = new QComboBox(groupStandardSensitivity);
        comboSideLobe->setObjectName(QStringLiteral("comboSideLobe"));

        gridLayout1->addWidget(comboSideLobe, 9, 4, 1, 1);

        spinSideLobe = new QSpinBox(groupStandardSensitivity);
        spinSideLobe->setObjectName(QStringLiteral("spinSideLobe"));
        spinSideLobe->setKeyboardTracking(false);
        spinSideLobe->setMaximum(255);

        gridLayout1->addWidget(spinSideLobe, 9, 2, 1, 1);

        editNoiseReject = new QLineEdit(groupStandardSensitivity);
        editNoiseReject->setObjectName(QStringLiteral("editNoiseReject"));
        editNoiseReject->setEnabled(false);
        sizePolicy5.setHeightForWidth(editNoiseReject->sizePolicy().hasHeightForWidth());
        editNoiseReject->setSizePolicy(sizePolicy5);
        editNoiseReject->setMinimumSize(QSize(0, 20));
        editNoiseReject->setMaximumSize(QSize(50, 16777215));
        editNoiseReject->setReadOnly(true);

        gridLayout1->addWidget(editNoiseReject, 10, 1, 1, 1);

        labelNoiseReject = new QLabel(groupStandardSensitivity);
        labelNoiseReject->setObjectName(QStringLiteral("labelNoiseReject"));

        gridLayout1->addWidget(labelNoiseReject, 10, 0, 1, 1);

        spinNoiseReject = new QSpinBox(groupStandardSensitivity);
        spinNoiseReject->setObjectName(QStringLiteral("spinNoiseReject"));
        spinNoiseReject->setKeyboardTracking(false);
        spinNoiseReject->setMaximum(3);

        gridLayout1->addWidget(spinNoiseReject, 10, 2, 1, 1);

        sliderNoiseReject = new QSlider(groupStandardSensitivity);
        sliderNoiseReject->setObjectName(QStringLiteral("sliderNoiseReject"));
        sliderNoiseReject->setMaximum(3);
        sliderNoiseReject->setOrientation(Qt::Horizontal);

        gridLayout1->addWidget(sliderNoiseReject, 10, 3, 1, 1);

        editSeaAuto = new QLineEdit(groupStandardSensitivity);
        editSeaAuto->setObjectName(QStringLiteral("editSeaAuto"));
        editSeaAuto->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSeaAuto->sizePolicy().hasHeightForWidth());
        editSeaAuto->setSizePolicy(sizePolicy5);
        editSeaAuto->setMinimumSize(QSize(0, 20));
        editSeaAuto->setMaximumSize(QSize(50, 16777215));
        editSeaAuto->setReadOnly(true);

        gridLayout1->addWidget(editSeaAuto, 8, 1, 1, 1);

        labelSideLobe = new QLabel(groupStandardSensitivity);
        labelSideLobe->setObjectName(QStringLiteral("labelSideLobe"));

        gridLayout1->addWidget(labelSideLobe, 9, 0, 1, 1);

        editSideLobe = new QLineEdit(groupStandardSensitivity);
        editSideLobe->setObjectName(QStringLiteral("editSideLobe"));
        editSideLobe->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSideLobe->sizePolicy().hasHeightForWidth());
        editSideLobe->setSizePolicy(sizePolicy5);
        editSideLobe->setMinimumSize(QSize(0, 20));
        editSideLobe->setMaximumSize(QSize(50, 16777215));
        editSideLobe->setReadOnly(true);

        gridLayout1->addWidget(editSideLobe, 9, 1, 1, 1);

        sliderSideLobe = new QSlider(groupStandardSensitivity);
        sliderSideLobe->setObjectName(QStringLiteral("sliderSideLobe"));
        sliderSideLobe->setMaximum(255);
        sliderSideLobe->setOrientation(Qt::Horizontal);

        gridLayout1->addWidget(sliderSideLobe, 9, 3, 1, 1);

        labelCurveType = new QLabel(groupStandardSensitivity);
        labelCurveType->setObjectName(QStringLiteral("labelCurveType"));

        gridLayout1->addWidget(labelCurveType, 2, 0, 1, 1);

        comboSTCCurveType = new QComboBox(groupStandardSensitivity);
        comboSTCCurveType->setObjectName(QStringLiteral("comboSTCCurveType"));
        sizePolicy2.setHeightForWidth(comboSTCCurveType->sizePolicy().hasHeightForWidth());
        comboSTCCurveType->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(comboSTCCurveType, 2, 4, 1, 1);

        labelGain = new QLabel(groupStandardSensitivity);
        labelGain->setObjectName(QStringLiteral("labelGain"));

        gridLayout1->addWidget(labelGain, 3, 0, 1, 1);

        editGain = new QLineEdit(groupStandardSensitivity);
        editGain->setObjectName(QStringLiteral("editGain"));
        editGain->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGain->sizePolicy().hasHeightForWidth());
        editGain->setSizePolicy(sizePolicy5);
        editGain->setMinimumSize(QSize(0, 20));
        editGain->setMaximumSize(QSize(50, 16777215));
        editGain->setReadOnly(true);

        gridLayout1->addWidget(editGain, 3, 1, 1, 1);

        spinGain = new QSpinBox(groupStandardSensitivity);
        spinGain->setObjectName(QStringLiteral("spinGain"));
        spinGain->setKeyboardTracking(false);
        spinGain->setMaximum(255);

        gridLayout1->addWidget(spinGain, 3, 2, 1, 1);

        sliderGain = new QSlider(groupStandardSensitivity);
        sliderGain->setObjectName(QStringLiteral("sliderGain"));
        sliderGain->setMaximum(255);
        sliderGain->setOrientation(Qt::Horizontal);

        gridLayout1->addWidget(sliderGain, 3, 3, 1, 1);

        comboGain = new QComboBox(groupStandardSensitivity);
        comboGain->setObjectName(QStringLiteral("comboGain"));

        gridLayout1->addWidget(comboGain, 3, 4, 1, 1);

        labelRain = new QLabel(groupStandardSensitivity);
        labelRain->setObjectName(QStringLiteral("labelRain"));

        gridLayout1->addWidget(labelRain, 4, 0, 1, 1);

        editRain = new QLineEdit(groupStandardSensitivity);
        editRain->setObjectName(QStringLiteral("editRain"));
        editRain->setEnabled(false);
        sizePolicy5.setHeightForWidth(editRain->sizePolicy().hasHeightForWidth());
        editRain->setSizePolicy(sizePolicy5);
        editRain->setMinimumSize(QSize(0, 20));
        editRain->setMaximumSize(QSize(50, 16777215));
        editRain->setReadOnly(true);

        gridLayout1->addWidget(editRain, 4, 1, 1, 1);

        spinRain = new QSpinBox(groupStandardSensitivity);
        spinRain->setObjectName(QStringLiteral("spinRain"));
        spinRain->setKeyboardTracking(false);
        spinRain->setMaximum(255);

        gridLayout1->addWidget(spinRain, 4, 2, 1, 1);

        sliderRain = new QSlider(groupStandardSensitivity);
        sliderRain->setObjectName(QStringLiteral("sliderRain"));
        sliderRain->setMaximum(255);
        sliderRain->setOrientation(Qt::Horizontal);

        gridLayout1->addWidget(sliderRain, 4, 3, 1, 1);

        labelFTC = new QLabel(groupStandardSensitivity);
        labelFTC->setObjectName(QStringLiteral("labelFTC"));

        gridLayout1->addWidget(labelFTC, 5, 0, 1, 1);

        editFTC = new QLineEdit(groupStandardSensitivity);
        editFTC->setObjectName(QStringLiteral("editFTC"));
        editFTC->setEnabled(false);
        editFTC->setMaximumSize(QSize(50, 16777215));
        editFTC->setReadOnly(true);

        gridLayout1->addWidget(editFTC, 5, 1, 1, 1);

        spinFTC = new QSpinBox(groupStandardSensitivity);
        spinFTC->setObjectName(QStringLiteral("spinFTC"));
        spinFTC->setKeyboardTracking(false);
        spinFTC->setMaximum(255);

        gridLayout1->addWidget(spinFTC, 5, 2, 1, 1);

        sliderFTC = new QSlider(groupStandardSensitivity);
        sliderFTC->setObjectName(QStringLiteral("sliderFTC"));
        sliderFTC->setMaximum(255);
        sliderFTC->setOrientation(Qt::Horizontal);

        gridLayout1->addWidget(sliderFTC, 5, 3, 1, 1);

        labelSeaClutter = new QLabel(groupStandardSensitivity);
        labelSeaClutter->setObjectName(QStringLiteral("labelSeaClutter"));

        gridLayout1->addWidget(labelSeaClutter, 6, 0, 1, 1);

        editSeaClutter = new QLineEdit(groupStandardSensitivity);
        editSeaClutter->setObjectName(QStringLiteral("editSeaClutter"));
        editSeaClutter->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSeaClutter->sizePolicy().hasHeightForWidth());
        editSeaClutter->setSizePolicy(sizePolicy5);
        editSeaClutter->setMinimumSize(QSize(0, 20));
        editSeaClutter->setMaximumSize(QSize(50, 16777215));
        editSeaClutter->setReadOnly(true);

        gridLayout1->addWidget(editSeaClutter, 6, 1, 1, 1);

        spinSeaClutter = new QSpinBox(groupStandardSensitivity);
        spinSeaClutter->setObjectName(QStringLiteral("spinSeaClutter"));
        spinSeaClutter->setKeyboardTracking(false);
        spinSeaClutter->setMaximum(255);

        gridLayout1->addWidget(spinSeaClutter, 6, 2, 1, 1);

        sliderSeaClutter = new QSlider(groupStandardSensitivity);
        sliderSeaClutter->setObjectName(QStringLiteral("sliderSeaClutter"));
        sliderSeaClutter->setMaximum(255);
        sliderSeaClutter->setOrientation(Qt::Horizontal);

        gridLayout1->addWidget(sliderSeaClutter, 6, 3, 1, 1);

        comboSeaClutter = new QComboBox(groupStandardSensitivity);
        comboSeaClutter->setObjectName(QStringLiteral("comboSeaClutter"));

        gridLayout1->addWidget(comboSeaClutter, 6, 4, 1, 1);

        labelSea = new QLabel(groupStandardSensitivity);
        labelSea->setObjectName(QStringLiteral("labelSea"));

        gridLayout1->addWidget(labelSea, 7, 0, 1, 1);

        editSea = new QLineEdit(groupStandardSensitivity);
        editSea->setObjectName(QStringLiteral("editSea"));
        editSea->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSea->sizePolicy().hasHeightForWidth());
        editSea->setSizePolicy(sizePolicy5);
        editSea->setMinimumSize(QSize(0, 20));
        editSea->setMaximumSize(QSize(50, 16777215));
        editSea->setReadOnly(true);

        gridLayout1->addWidget(editSea, 7, 1, 1, 1);

        spinSea = new QSpinBox(groupStandardSensitivity);
        spinSea->setObjectName(QStringLiteral("spinSea"));
        spinSea->setKeyboardTracking(false);
        spinSea->setMaximum(255);

        gridLayout1->addWidget(spinSea, 7, 2, 1, 1);

        sliderSea = new QSlider(groupStandardSensitivity);
        sliderSea->setObjectName(QStringLiteral("sliderSea"));
        sliderSea->setMaximum(255);
        sliderSea->setOrientation(Qt::Horizontal);

        gridLayout1->addWidget(sliderSea, 7, 3, 1, 1);

        comboSea = new QComboBox(groupStandardSensitivity);
        comboSea->setObjectName(QStringLiteral("comboSea"));

        gridLayout1->addWidget(comboSea, 7, 4, 1, 1);


        verticalLayout_13->addWidget(groupStandardSensitivity);

        groupStandardTimedTransmit = new QGroupBox(tabImage);
        groupStandardTimedTransmit->setObjectName(QStringLiteral("groupStandardTimedTransmit"));
        gridLayout_11 = new QGridLayout(groupStandardTimedTransmit);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(-1, 6, -1, -1);
        labelModeEnabled = new QLabel(groupStandardTimedTransmit);
        labelModeEnabled->setObjectName(QStringLiteral("labelModeEnabled"));

        gridLayout_11->addWidget(labelModeEnabled, 0, 0, 1, 1);

        checkTimedTxMode = new QCheckBox(groupStandardTimedTransmit);
        checkTimedTxMode->setObjectName(QStringLiteral("checkTimedTxMode"));

        gridLayout_11->addWidget(checkTimedTxMode, 0, 1, 1, 1);

        labelTransmitPeriod = new QLabel(groupStandardTimedTransmit);
        labelTransmitPeriod->setObjectName(QStringLiteral("labelTransmitPeriod"));

        gridLayout_11->addWidget(labelTransmitPeriod, 1, 0, 1, 1);

        editTimedTransmit = new QLineEdit(groupStandardTimedTransmit);
        editTimedTransmit->setObjectName(QStringLiteral("editTimedTransmit"));
        editTimedTransmit->setEnabled(false);
        sizePolicy5.setHeightForWidth(editTimedTransmit->sizePolicy().hasHeightForWidth());
        editTimedTransmit->setSizePolicy(sizePolicy5);
        editTimedTransmit->setMinimumSize(QSize(0, 20));
        editTimedTransmit->setMaximumSize(QSize(50, 16777215));
        editTimedTransmit->setReadOnly(true);

        gridLayout_11->addWidget(editTimedTransmit, 1, 1, 1, 1);

        spinTimedTransmit = new QSpinBox(groupStandardTimedTransmit);
        spinTimedTransmit->setObjectName(QStringLiteral("spinTimedTransmit"));
        spinTimedTransmit->setKeyboardTracking(false);
        spinTimedTransmit->setMaximum(86400);

        gridLayout_11->addWidget(spinTimedTransmit, 1, 2, 1, 1);

        sliderTimedTransmit = new QSlider(groupStandardTimedTransmit);
        sliderTimedTransmit->setObjectName(QStringLiteral("sliderTimedTransmit"));
        sliderTimedTransmit->setMaximum(86400);
        sliderTimedTransmit->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(sliderTimedTransmit, 1, 3, 1, 1);

        labelStandbyPeriod = new QLabel(groupStandardTimedTransmit);
        labelStandbyPeriod->setObjectName(QStringLiteral("labelStandbyPeriod"));

        gridLayout_11->addWidget(labelStandbyPeriod, 2, 0, 1, 1);

        editTimedStandby = new QLineEdit(groupStandardTimedTransmit);
        editTimedStandby->setObjectName(QStringLiteral("editTimedStandby"));
        editTimedStandby->setEnabled(false);
        editTimedStandby->setMaximumSize(QSize(50, 16777215));
        editTimedStandby->setReadOnly(true);

        gridLayout_11->addWidget(editTimedStandby, 2, 1, 1, 1);

        spinTimedStandby = new QSpinBox(groupStandardTimedTransmit);
        spinTimedStandby->setObjectName(QStringLiteral("spinTimedStandby"));
        spinTimedStandby->setKeyboardTracking(false);
        spinTimedStandby->setMaximum(86400);

        gridLayout_11->addWidget(spinTimedStandby, 2, 2, 1, 1);

        sliderTimedStandby = new QSlider(groupStandardTimedTransmit);
        sliderTimedStandby->setObjectName(QStringLiteral("sliderTimedStandby"));
        sliderTimedStandby->setMaximum(86400);
        sliderTimedStandby->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(sliderTimedStandby, 2, 3, 1, 1);


        verticalLayout_13->addWidget(groupStandardTimedTransmit);

        verticalSpacer_8 = new QSpacerItem(17, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_8);


        horizontalLayout_9->addLayout(verticalLayout_13);


        verticalLayout_15->addLayout(horizontalLayout_9);

        tabs->addTab(tabImage, QString());
        tabSectorBlanking = new QWidget();
        tabSectorBlanking->setObjectName(QStringLiteral("tabSectorBlanking"));
        horizontalLayout_7 = new QHBoxLayout(tabSectorBlanking);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 0, -1);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        groupSector0 = new QGroupBox(tabSectorBlanking);
        groupSector0->setObjectName(QStringLiteral("groupSector0"));
        QPalette palette;
        QBrush brush(QColor(255, 170, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(212, 208, 200, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        groupSector0->setPalette(palette);
        layoutGuard1Setup = new QGridLayout(groupSector0);
        layoutGuard1Setup->setSpacing(6);
        layoutGuard1Setup->setContentsMargins(11, 11, 11, 11);
        layoutGuard1Setup->setObjectName(QStringLiteral("layoutGuard1Setup"));
        layoutGuard1Setup->setVerticalSpacing(6);
        layoutGuard1Setup->setContentsMargins(-1, 3, -1, -1);
        spinSector0End = new QDoubleSpinBox(groupSector0);
        spinSector0End->setObjectName(QStringLiteral("spinSector0End"));
        spinSector0End->setMinimumSize(QSize(85, 0));
        spinSector0End->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinSector0End->setDecimals(1);
        spinSector0End->setMinimum(-360);
        spinSector0End->setMaximum(360);
        spinSector0End->setSingleStep(0.1);

        layoutGuard1Setup->addWidget(spinSector0End, 4, 4, 1, 1);

        sliderSector0End = new QSlider(groupSector0);
        sliderSector0End->setObjectName(QStringLiteral("sliderSector0End"));
        sliderSector0End->setMinimum(-360);
        sliderSector0End->setMaximum(360);
        sliderSector0End->setOrientation(Qt::Horizontal);

        layoutGuard1Setup->addWidget(sliderSector0End, 4, 5, 1, 1);

        labelSector0Start = new QLabel(groupSector0);
        labelSector0Start->setObjectName(QStringLiteral("labelSector0Start"));

        layoutGuard1Setup->addWidget(labelSector0Start, 1, 1, 1, 1);

        editSector0Start = new QLineEdit(groupSector0);
        editSector0Start->setObjectName(QStringLiteral("editSector0Start"));
        editSector0Start->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSector0Start->sizePolicy().hasHeightForWidth());
        editSector0Start->setSizePolicy(sizePolicy5);
        editSector0Start->setMinimumSize(QSize(0, 20));
        editSector0Start->setMaximumSize(QSize(55, 16777215));
        editSector0Start->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editSector0Start->setReadOnly(true);

        layoutGuard1Setup->addWidget(editSector0Start, 1, 3, 1, 1);

        spinSector0Start = new QDoubleSpinBox(groupSector0);
        spinSector0Start->setObjectName(QStringLiteral("spinSector0Start"));
        spinSector0Start->setMinimumSize(QSize(85, 0));
        spinSector0Start->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinSector0Start->setDecimals(1);
        spinSector0Start->setMinimum(-360);
        spinSector0Start->setMaximum(360);
        spinSector0Start->setSingleStep(0.1);

        layoutGuard1Setup->addWidget(spinSector0Start, 1, 4, 1, 1);

        sliderSector0Start = new QSlider(groupSector0);
        sliderSector0Start->setObjectName(QStringLiteral("sliderSector0Start"));
        sliderSector0Start->setMinimumSize(QSize(140, 0));
        sliderSector0Start->setMinimum(-360);
        sliderSector0Start->setMaximum(360);
        sliderSector0Start->setOrientation(Qt::Horizontal);

        layoutGuard1Setup->addWidget(sliderSector0Start, 1, 5, 1, 1);

        labelSector0End = new QLabel(groupSector0);
        labelSector0End->setObjectName(QStringLiteral("labelSector0End"));

        layoutGuard1Setup->addWidget(labelSector0End, 4, 1, 1, 1);

        editSector0End = new QLineEdit(groupSector0);
        editSector0End->setObjectName(QStringLiteral("editSector0End"));
        editSector0End->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSector0End->sizePolicy().hasHeightForWidth());
        editSector0End->setSizePolicy(sizePolicy5);
        editSector0End->setMinimumSize(QSize(0, 20));
        editSector0End->setMaximumSize(QSize(55, 16777215));
        editSector0End->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editSector0End->setReadOnly(true);

        layoutGuard1Setup->addWidget(editSector0End, 4, 3, 1, 1);

        checkSector0Enabled = new QCheckBox(groupSector0);
        checkSector0Enabled->setObjectName(QStringLiteral("checkSector0Enabled"));

        layoutGuard1Setup->addWidget(checkSector0Enabled, 0, 1, 1, 3);


        gridLayout_8->addWidget(groupSector0, 0, 0, 1, 1);

        groupSector1 = new QGroupBox(tabSectorBlanking);
        groupSector1->setObjectName(QStringLiteral("groupSector1"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        groupSector1->setPalette(palette1);
        layoutGuard1Setup_2 = new QGridLayout(groupSector1);
        layoutGuard1Setup_2->setSpacing(6);
        layoutGuard1Setup_2->setContentsMargins(11, 11, 11, 11);
        layoutGuard1Setup_2->setObjectName(QStringLiteral("layoutGuard1Setup_2"));
        layoutGuard1Setup_2->setVerticalSpacing(6);
        layoutGuard1Setup_2->setContentsMargins(-1, 3, -1, -1);
        editSector1Start = new QLineEdit(groupSector1);
        editSector1Start->setObjectName(QStringLiteral("editSector1Start"));
        editSector1Start->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSector1Start->sizePolicy().hasHeightForWidth());
        editSector1Start->setSizePolicy(sizePolicy5);
        editSector1Start->setMinimumSize(QSize(0, 20));
        editSector1Start->setMaximumSize(QSize(55, 16777215));
        editSector1Start->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editSector1Start->setReadOnly(true);

        layoutGuard1Setup_2->addWidget(editSector1Start, 1, 4, 1, 1);

        spinSector1Start = new QDoubleSpinBox(groupSector1);
        spinSector1Start->setObjectName(QStringLiteral("spinSector1Start"));
        spinSector1Start->setMinimumSize(QSize(85, 0));
        spinSector1Start->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinSector1Start->setDecimals(1);
        spinSector1Start->setMinimum(-360);
        spinSector1Start->setMaximum(360);
        spinSector1Start->setSingleStep(0.1);

        layoutGuard1Setup_2->addWidget(spinSector1Start, 1, 5, 1, 1);

        sliderSector1Start = new QSlider(groupSector1);
        sliderSector1Start->setObjectName(QStringLiteral("sliderSector1Start"));
        sliderSector1Start->setMinimum(-360);
        sliderSector1Start->setMaximum(360);
        sliderSector1Start->setOrientation(Qt::Horizontal);

        layoutGuard1Setup_2->addWidget(sliderSector1Start, 1, 6, 1, 1);

        labelSector1Start = new QLabel(groupSector1);
        labelSector1Start->setObjectName(QStringLiteral("labelSector1Start"));

        layoutGuard1Setup_2->addWidget(labelSector1Start, 1, 2, 1, 1);

        editSector1End = new QLineEdit(groupSector1);
        editSector1End->setObjectName(QStringLiteral("editSector1End"));
        editSector1End->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSector1End->sizePolicy().hasHeightForWidth());
        editSector1End->setSizePolicy(sizePolicy5);
        editSector1End->setMinimumSize(QSize(0, 20));
        editSector1End->setMaximumSize(QSize(55, 16777215));
        editSector1End->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editSector1End->setReadOnly(true);

        layoutGuard1Setup_2->addWidget(editSector1End, 4, 4, 1, 1);

        sliderSector1End = new QSlider(groupSector1);
        sliderSector1End->setObjectName(QStringLiteral("sliderSector1End"));
        sliderSector1End->setMinimum(-360);
        sliderSector1End->setMaximum(360);
        sliderSector1End->setOrientation(Qt::Horizontal);

        layoutGuard1Setup_2->addWidget(sliderSector1End, 4, 6, 1, 1);

        spinSector1End = new QDoubleSpinBox(groupSector1);
        spinSector1End->setObjectName(QStringLiteral("spinSector1End"));
        spinSector1End->setMinimumSize(QSize(85, 0));
        spinSector1End->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinSector1End->setDecimals(1);
        spinSector1End->setMinimum(-360);
        spinSector1End->setMaximum(360);
        spinSector1End->setSingleStep(0.1);

        layoutGuard1Setup_2->addWidget(spinSector1End, 4, 5, 1, 1);

        labelSector1End = new QLabel(groupSector1);
        labelSector1End->setObjectName(QStringLiteral("labelSector1End"));

        layoutGuard1Setup_2->addWidget(labelSector1End, 4, 2, 1, 1);

        checkSector1Enabled = new QCheckBox(groupSector1);
        checkSector1Enabled->setObjectName(QStringLiteral("checkSector1Enabled"));

        layoutGuard1Setup_2->addWidget(checkSector1Enabled, 0, 2, 1, 3);


        gridLayout_8->addWidget(groupSector1, 1, 0, 1, 1);

        groupSector2 = new QGroupBox(tabSectorBlanking);
        groupSector2->setObjectName(QStringLiteral("groupSector2"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        groupSector2->setPalette(palette2);
        layoutGuard1Setup_3 = new QGridLayout(groupSector2);
        layoutGuard1Setup_3->setSpacing(6);
        layoutGuard1Setup_3->setContentsMargins(11, 11, 11, 11);
        layoutGuard1Setup_3->setObjectName(QStringLiteral("layoutGuard1Setup_3"));
        layoutGuard1Setup_3->setVerticalSpacing(6);
        layoutGuard1Setup_3->setContentsMargins(-1, 3, -1, -1);
        labelSector2Start = new QLabel(groupSector2);
        labelSector2Start->setObjectName(QStringLiteral("labelSector2Start"));

        layoutGuard1Setup_3->addWidget(labelSector2Start, 1, 1, 1, 1);

        editSector2Start = new QLineEdit(groupSector2);
        editSector2Start->setObjectName(QStringLiteral("editSector2Start"));
        editSector2Start->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSector2Start->sizePolicy().hasHeightForWidth());
        editSector2Start->setSizePolicy(sizePolicy5);
        editSector2Start->setMinimumSize(QSize(0, 20));
        editSector2Start->setMaximumSize(QSize(55, 16777215));
        editSector2Start->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editSector2Start->setReadOnly(true);

        layoutGuard1Setup_3->addWidget(editSector2Start, 1, 3, 1, 1);

        spinSector2Start = new QDoubleSpinBox(groupSector2);
        spinSector2Start->setObjectName(QStringLiteral("spinSector2Start"));
        spinSector2Start->setMinimumSize(QSize(85, 0));
        spinSector2Start->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinSector2Start->setDecimals(1);
        spinSector2Start->setMinimum(-360);
        spinSector2Start->setMaximum(360);
        spinSector2Start->setSingleStep(0.1);

        layoutGuard1Setup_3->addWidget(spinSector2Start, 1, 4, 1, 1);

        sliderSector2Start = new QSlider(groupSector2);
        sliderSector2Start->setObjectName(QStringLiteral("sliderSector2Start"));
        sliderSector2Start->setMinimum(-360);
        sliderSector2Start->setMaximum(360);
        sliderSector2Start->setOrientation(Qt::Horizontal);

        layoutGuard1Setup_3->addWidget(sliderSector2Start, 1, 5, 1, 1);

        labelSector2End = new QLabel(groupSector2);
        labelSector2End->setObjectName(QStringLiteral("labelSector2End"));

        layoutGuard1Setup_3->addWidget(labelSector2End, 4, 1, 1, 1);

        editSector2End = new QLineEdit(groupSector2);
        editSector2End->setObjectName(QStringLiteral("editSector2End"));
        editSector2End->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSector2End->sizePolicy().hasHeightForWidth());
        editSector2End->setSizePolicy(sizePolicy5);
        editSector2End->setMinimumSize(QSize(0, 20));
        editSector2End->setMaximumSize(QSize(55, 16777215));
        editSector2End->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editSector2End->setReadOnly(true);

        layoutGuard1Setup_3->addWidget(editSector2End, 4, 3, 1, 1);

        spinSector2End = new QDoubleSpinBox(groupSector2);
        spinSector2End->setObjectName(QStringLiteral("spinSector2End"));
        spinSector2End->setMinimumSize(QSize(85, 0));
        spinSector2End->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinSector2End->setDecimals(1);
        spinSector2End->setMinimum(-360);
        spinSector2End->setMaximum(360);
        spinSector2End->setSingleStep(0.1);

        layoutGuard1Setup_3->addWidget(spinSector2End, 4, 4, 1, 1);

        sliderSector2End = new QSlider(groupSector2);
        sliderSector2End->setObjectName(QStringLiteral("sliderSector2End"));
        sliderSector2End->setMinimum(-360);
        sliderSector2End->setMaximum(360);
        sliderSector2End->setOrientation(Qt::Horizontal);

        layoutGuard1Setup_3->addWidget(sliderSector2End, 4, 5, 1, 1);

        checkSector2Enabled = new QCheckBox(groupSector2);
        checkSector2Enabled->setObjectName(QStringLiteral("checkSector2Enabled"));

        layoutGuard1Setup_3->addWidget(checkSector2Enabled, 0, 1, 1, 3);


        gridLayout_8->addWidget(groupSector2, 2, 0, 1, 1);


        horizontalLayout_7->addLayout(gridLayout_8);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        groupSector4 = new QGroupBox(tabSectorBlanking);
        groupSector4->setObjectName(QStringLiteral("groupSector4"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        groupSector4->setPalette(palette3);
        layoutGuard1Setup_6 = new QGridLayout(groupSector4);
        layoutGuard1Setup_6->setSpacing(6);
        layoutGuard1Setup_6->setContentsMargins(11, 11, 11, 11);
        layoutGuard1Setup_6->setObjectName(QStringLiteral("layoutGuard1Setup_6"));
        layoutGuard1Setup_6->setVerticalSpacing(6);
        layoutGuard1Setup_6->setContentsMargins(-1, 3, -1, -1);
        editSector4Start = new QLineEdit(groupSector4);
        editSector4Start->setObjectName(QStringLiteral("editSector4Start"));
        editSector4Start->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSector4Start->sizePolicy().hasHeightForWidth());
        editSector4Start->setSizePolicy(sizePolicy5);
        editSector4Start->setMinimumSize(QSize(0, 20));
        editSector4Start->setMaximumSize(QSize(55, 16777215));
        editSector4Start->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editSector4Start->setReadOnly(true);

        layoutGuard1Setup_6->addWidget(editSector4Start, 1, 4, 1, 1);

        spinSector4Start = new QDoubleSpinBox(groupSector4);
        spinSector4Start->setObjectName(QStringLiteral("spinSector4Start"));
        spinSector4Start->setMinimumSize(QSize(85, 0));
        spinSector4Start->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinSector4Start->setDecimals(1);
        spinSector4Start->setMinimum(-360);
        spinSector4Start->setMaximum(360);
        spinSector4Start->setSingleStep(0.1);

        layoutGuard1Setup_6->addWidget(spinSector4Start, 1, 5, 1, 1);

        sliderSector4Start = new QSlider(groupSector4);
        sliderSector4Start->setObjectName(QStringLiteral("sliderSector4Start"));
        sliderSector4Start->setMinimum(-360);
        sliderSector4Start->setMaximum(360);
        sliderSector4Start->setOrientation(Qt::Horizontal);

        layoutGuard1Setup_6->addWidget(sliderSector4Start, 1, 6, 1, 1);

        labelSector4Start = new QLabel(groupSector4);
        labelSector4Start->setObjectName(QStringLiteral("labelSector4Start"));

        layoutGuard1Setup_6->addWidget(labelSector4Start, 1, 2, 1, 1);

        editSector4End = new QLineEdit(groupSector4);
        editSector4End->setObjectName(QStringLiteral("editSector4End"));
        editSector4End->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSector4End->sizePolicy().hasHeightForWidth());
        editSector4End->setSizePolicy(sizePolicy5);
        editSector4End->setMinimumSize(QSize(0, 20));
        editSector4End->setMaximumSize(QSize(55, 16777215));
        editSector4End->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editSector4End->setReadOnly(true);

        layoutGuard1Setup_6->addWidget(editSector4End, 4, 4, 1, 1);

        sliderSector4End = new QSlider(groupSector4);
        sliderSector4End->setObjectName(QStringLiteral("sliderSector4End"));
        sliderSector4End->setMinimum(-360);
        sliderSector4End->setMaximum(360);
        sliderSector4End->setOrientation(Qt::Horizontal);

        layoutGuard1Setup_6->addWidget(sliderSector4End, 4, 6, 1, 1);

        spinSector4End = new QDoubleSpinBox(groupSector4);
        spinSector4End->setObjectName(QStringLiteral("spinSector4End"));
        spinSector4End->setMinimumSize(QSize(85, 0));
        spinSector4End->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinSector4End->setDecimals(1);
        spinSector4End->setMinimum(-360);
        spinSector4End->setMaximum(360);
        spinSector4End->setSingleStep(0.1);

        layoutGuard1Setup_6->addWidget(spinSector4End, 4, 5, 1, 1);

        labelSector4End = new QLabel(groupSector4);
        labelSector4End->setObjectName(QStringLiteral("labelSector4End"));

        layoutGuard1Setup_6->addWidget(labelSector4End, 4, 2, 1, 1);

        checkSector4Enabled = new QCheckBox(groupSector4);
        checkSector4Enabled->setObjectName(QStringLiteral("checkSector4Enabled"));

        layoutGuard1Setup_6->addWidget(checkSector4Enabled, 0, 2, 1, 3);


        gridLayout_10->addWidget(groupSector4, 1, 0, 1, 1);

        groupSector5 = new QGroupBox(tabSectorBlanking);
        groupSector5->setObjectName(QStringLiteral("groupSector5"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        groupSector5->setPalette(palette4);
        layoutGuard1Setup_5 = new QGridLayout(groupSector5);
        layoutGuard1Setup_5->setSpacing(6);
        layoutGuard1Setup_5->setContentsMargins(11, 11, 11, 11);
        layoutGuard1Setup_5->setObjectName(QStringLiteral("layoutGuard1Setup_5"));
        layoutGuard1Setup_5->setVerticalSpacing(6);
        layoutGuard1Setup_5->setContentsMargins(-1, 3, -1, -1);
        labelSector5Start = new QLabel(groupSector5);
        labelSector5Start->setObjectName(QStringLiteral("labelSector5Start"));

        layoutGuard1Setup_5->addWidget(labelSector5Start, 1, 1, 1, 1);

        editSector5Start = new QLineEdit(groupSector5);
        editSector5Start->setObjectName(QStringLiteral("editSector5Start"));
        editSector5Start->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSector5Start->sizePolicy().hasHeightForWidth());
        editSector5Start->setSizePolicy(sizePolicy5);
        editSector5Start->setMinimumSize(QSize(0, 20));
        editSector5Start->setMaximumSize(QSize(55, 16777215));
        editSector5Start->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editSector5Start->setReadOnly(true);

        layoutGuard1Setup_5->addWidget(editSector5Start, 1, 3, 1, 1);

        spinSector5Start = new QDoubleSpinBox(groupSector5);
        spinSector5Start->setObjectName(QStringLiteral("spinSector5Start"));
        spinSector5Start->setMinimumSize(QSize(85, 0));
        spinSector5Start->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinSector5Start->setDecimals(1);
        spinSector5Start->setMinimum(-360);
        spinSector5Start->setMaximum(360);
        spinSector5Start->setSingleStep(0.1);

        layoutGuard1Setup_5->addWidget(spinSector5Start, 1, 4, 1, 1);

        sliderSector5Start = new QSlider(groupSector5);
        sliderSector5Start->setObjectName(QStringLiteral("sliderSector5Start"));
        sliderSector5Start->setMinimum(-360);
        sliderSector5Start->setMaximum(360);
        sliderSector5Start->setOrientation(Qt::Horizontal);

        layoutGuard1Setup_5->addWidget(sliderSector5Start, 1, 5, 1, 1);

        labelSector5End = new QLabel(groupSector5);
        labelSector5End->setObjectName(QStringLiteral("labelSector5End"));

        layoutGuard1Setup_5->addWidget(labelSector5End, 4, 1, 1, 1);

        editSector5End = new QLineEdit(groupSector5);
        editSector5End->setObjectName(QStringLiteral("editSector5End"));
        editSector5End->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSector5End->sizePolicy().hasHeightForWidth());
        editSector5End->setSizePolicy(sizePolicy5);
        editSector5End->setMinimumSize(QSize(0, 20));
        editSector5End->setMaximumSize(QSize(55, 16777215));
        editSector5End->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editSector5End->setReadOnly(true);

        layoutGuard1Setup_5->addWidget(editSector5End, 4, 3, 1, 1);

        spinSector5End = new QDoubleSpinBox(groupSector5);
        spinSector5End->setObjectName(QStringLiteral("spinSector5End"));
        spinSector5End->setMinimumSize(QSize(85, 0));
        spinSector5End->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinSector5End->setDecimals(1);
        spinSector5End->setMinimum(-360);
        spinSector5End->setMaximum(360);
        spinSector5End->setSingleStep(0.1);

        layoutGuard1Setup_5->addWidget(spinSector5End, 4, 4, 1, 1);

        sliderSector5End = new QSlider(groupSector5);
        sliderSector5End->setObjectName(QStringLiteral("sliderSector5End"));
        sliderSector5End->setMinimum(-360);
        sliderSector5End->setMaximum(360);
        sliderSector5End->setOrientation(Qt::Horizontal);

        layoutGuard1Setup_5->addWidget(sliderSector5End, 4, 5, 1, 1);

        checkSector5Enabled = new QCheckBox(groupSector5);
        checkSector5Enabled->setObjectName(QStringLiteral("checkSector5Enabled"));

        layoutGuard1Setup_5->addWidget(checkSector5Enabled, 0, 1, 1, 3);


        gridLayout_10->addWidget(groupSector5, 2, 0, 1, 1);

        groupSector3 = new QGroupBox(tabSectorBlanking);
        groupSector3->setObjectName(QStringLiteral("groupSector3"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        groupSector3->setPalette(palette5);
        layoutGuard1Setup_4 = new QGridLayout(groupSector3);
        layoutGuard1Setup_4->setSpacing(6);
        layoutGuard1Setup_4->setContentsMargins(11, 11, 11, 11);
        layoutGuard1Setup_4->setObjectName(QStringLiteral("layoutGuard1Setup_4"));
        layoutGuard1Setup_4->setVerticalSpacing(6);
        layoutGuard1Setup_4->setContentsMargins(-1, 3, -1, -1);
        spinSector3End = new QDoubleSpinBox(groupSector3);
        spinSector3End->setObjectName(QStringLiteral("spinSector3End"));
        spinSector3End->setMinimumSize(QSize(85, 0));
        spinSector3End->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinSector3End->setDecimals(1);
        spinSector3End->setMinimum(-360);
        spinSector3End->setMaximum(360);
        spinSector3End->setSingleStep(0.1);

        layoutGuard1Setup_4->addWidget(spinSector3End, 4, 4, 1, 1);

        sliderSector3End = new QSlider(groupSector3);
        sliderSector3End->setObjectName(QStringLiteral("sliderSector3End"));
        sliderSector3End->setMinimum(-360);
        sliderSector3End->setMaximum(360);
        sliderSector3End->setOrientation(Qt::Horizontal);

        layoutGuard1Setup_4->addWidget(sliderSector3End, 4, 5, 1, 1);

        labelSector3Start = new QLabel(groupSector3);
        labelSector3Start->setObjectName(QStringLiteral("labelSector3Start"));

        layoutGuard1Setup_4->addWidget(labelSector3Start, 1, 1, 1, 1);

        editSector3Start = new QLineEdit(groupSector3);
        editSector3Start->setObjectName(QStringLiteral("editSector3Start"));
        editSector3Start->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSector3Start->sizePolicy().hasHeightForWidth());
        editSector3Start->setSizePolicy(sizePolicy5);
        editSector3Start->setMinimumSize(QSize(0, 20));
        editSector3Start->setMaximumSize(QSize(55, 16777215));
        editSector3Start->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editSector3Start->setReadOnly(true);

        layoutGuard1Setup_4->addWidget(editSector3Start, 1, 3, 1, 1);

        spinSector3Start = new QDoubleSpinBox(groupSector3);
        spinSector3Start->setObjectName(QStringLiteral("spinSector3Start"));
        spinSector3Start->setMinimumSize(QSize(85, 0));
        spinSector3Start->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinSector3Start->setDecimals(1);
        spinSector3Start->setMinimum(-360);
        spinSector3Start->setMaximum(360);
        spinSector3Start->setSingleStep(0.1);

        layoutGuard1Setup_4->addWidget(spinSector3Start, 1, 4, 1, 1);

        sliderSector3Start = new QSlider(groupSector3);
        sliderSector3Start->setObjectName(QStringLiteral("sliderSector3Start"));
        sliderSector3Start->setMinimumSize(QSize(140, 0));
        sliderSector3Start->setMinimum(-360);
        sliderSector3Start->setMaximum(360);
        sliderSector3Start->setOrientation(Qt::Horizontal);

        layoutGuard1Setup_4->addWidget(sliderSector3Start, 1, 5, 1, 1);

        labelSector3End = new QLabel(groupSector3);
        labelSector3End->setObjectName(QStringLiteral("labelSector3End"));

        layoutGuard1Setup_4->addWidget(labelSector3End, 4, 1, 1, 1);

        editSector3End = new QLineEdit(groupSector3);
        editSector3End->setObjectName(QStringLiteral("editSector3End"));
        editSector3End->setEnabled(false);
        sizePolicy5.setHeightForWidth(editSector3End->sizePolicy().hasHeightForWidth());
        editSector3End->setSizePolicy(sizePolicy5);
        editSector3End->setMinimumSize(QSize(0, 20));
        editSector3End->setMaximumSize(QSize(55, 16777215));
        editSector3End->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editSector3End->setReadOnly(true);

        layoutGuard1Setup_4->addWidget(editSector3End, 4, 3, 1, 1);

        checkSector3Enabled = new QCheckBox(groupSector3);
        checkSector3Enabled->setObjectName(QStringLiteral("checkSector3Enabled"));

        layoutGuard1Setup_4->addWidget(checkSector3Enabled, 0, 1, 1, 3);


        gridLayout_10->addWidget(groupSector3, 0, 0, 1, 1);


        horizontalLayout_7->addLayout(gridLayout_10);

        tabs->addTab(tabSectorBlanking, QString());
        tabInstallation = new QWidget();
        tabInstallation->setObjectName(QStringLiteral("tabInstallation"));
        tabInstallation->setEnabled(false);
        verticalLayout_14 = new QVBoxLayout(tabInstallation);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        groupImageConfiguration = new QGroupBox(tabInstallation);
        groupImageConfiguration->setObjectName(QStringLiteral("groupImageConfiguration"));
        horizontalLayout_13 = new QHBoxLayout(groupImageConfiguration);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(-1, 6, -1, -1);
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        spinAntennaXOffset = new QDoubleSpinBox(groupImageConfiguration);
        spinAntennaXOffset->setObjectName(QStringLiteral("spinAntennaXOffset"));
        spinAntennaXOffset->setMinimumSize(QSize(75, 0));
        spinAntennaXOffset->setKeyboardTracking(false);
        spinAntennaXOffset->setDecimals(3);
        spinAntennaXOffset->setMinimum(-1000);
        spinAntennaXOffset->setMaximum(1000);
        spinAntennaXOffset->setSingleStep(0.001);

        gridLayout_13->addWidget(spinAntennaXOffset, 2, 2, 1, 1);

        editAntennaXOffset = new QLineEdit(groupImageConfiguration);
        editAntennaXOffset->setObjectName(QStringLiteral("editAntennaXOffset"));
        editAntennaXOffset->setEnabled(false);
        editAntennaXOffset->setMaximumSize(QSize(60, 16777215));
        editAntennaXOffset->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editAntennaXOffset->setReadOnly(true);

        gridLayout_13->addWidget(editAntennaXOffset, 2, 1, 1, 1);

        labelParkPosition = new QLabel(groupImageConfiguration);
        labelParkPosition->setObjectName(QStringLiteral("labelParkPosition"));

        gridLayout_13->addWidget(labelParkPosition, 0, 0, 1, 1);

        editParkPosition = new QLineEdit(groupImageConfiguration);
        editParkPosition->setObjectName(QStringLiteral("editParkPosition"));
        editParkPosition->setEnabled(false);
        sizePolicy5.setHeightForWidth(editParkPosition->sizePolicy().hasHeightForWidth());
        editParkPosition->setSizePolicy(sizePolicy5);
        editParkPosition->setMinimumSize(QSize(0, 20));
        editParkPosition->setMaximumSize(QSize(60, 16777215));
        editParkPosition->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editParkPosition->setReadOnly(true);

        gridLayout_13->addWidget(editParkPosition, 0, 1, 1, 1);

        spinParkPosition = new QSpinBox(groupImageConfiguration);
        spinParkPosition->setObjectName(QStringLiteral("spinParkPosition"));
        spinParkPosition->setKeyboardTracking(false);
        spinParkPosition->setMaximum(359);

        gridLayout_13->addWidget(spinParkPosition, 0, 2, 1, 1);

        sliderParkPosition = new QSlider(groupImageConfiguration);
        sliderParkPosition->setObjectName(QStringLiteral("sliderParkPosition"));
        sliderParkPosition->setMaximum(359);
        sliderParkPosition->setOrientation(Qt::Horizontal);

        gridLayout_13->addWidget(sliderParkPosition, 0, 3, 1, 1);

        labelAntennaHeight = new QLabel(groupImageConfiguration);
        labelAntennaHeight->setObjectName(QStringLiteral("labelAntennaHeight"));

        gridLayout_13->addWidget(labelAntennaHeight, 1, 0, 1, 1);

        sliderAntennaHeight = new QSlider(groupImageConfiguration);
        sliderAntennaHeight->setObjectName(QStringLiteral("sliderAntennaHeight"));
        sliderAntennaHeight->setMaximum(1000);
        sliderAntennaHeight->setOrientation(Qt::Horizontal);

        gridLayout_13->addWidget(sliderAntennaHeight, 1, 3, 1, 1);

        labelZeroRangeOffset = new QLabel(groupImageConfiguration);
        labelZeroRangeOffset->setObjectName(QStringLiteral("labelZeroRangeOffset"));

        gridLayout_13->addWidget(labelZeroRangeOffset, 4, 0, 1, 1);

        editZeroRange = new QLineEdit(groupImageConfiguration);
        editZeroRange->setObjectName(QStringLiteral("editZeroRange"));
        editZeroRange->setEnabled(false);
        sizePolicy5.setHeightForWidth(editZeroRange->sizePolicy().hasHeightForWidth());
        editZeroRange->setSizePolicy(sizePolicy5);
        editZeroRange->setMinimumSize(QSize(0, 20));
        editZeroRange->setMaximumSize(QSize(60, 16777215));
        editZeroRange->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editZeroRange->setReadOnly(true);

        gridLayout_13->addWidget(editZeroRange, 4, 1, 1, 1);

        sliderZeroRange = new QSlider(groupImageConfiguration);
        sliderZeroRange->setObjectName(QStringLiteral("sliderZeroRange"));
        sliderZeroRange->setMaximum(500);
        sliderZeroRange->setOrientation(Qt::Horizontal);

        gridLayout_13->addWidget(sliderZeroRange, 4, 3, 1, 1);

        labelZeroBearingOffset = new QLabel(groupImageConfiguration);
        labelZeroBearingOffset->setObjectName(QStringLiteral("labelZeroBearingOffset"));

        gridLayout_13->addWidget(labelZeroBearingOffset, 5, 0, 1, 1);

        editZeroBearing = new QLineEdit(groupImageConfiguration);
        editZeroBearing->setObjectName(QStringLiteral("editZeroBearing"));
        editZeroBearing->setEnabled(false);
        sizePolicy5.setHeightForWidth(editZeroBearing->sizePolicy().hasHeightForWidth());
        editZeroBearing->setSizePolicy(sizePolicy5);
        editZeroBearing->setMinimumSize(QSize(0, 20));
        editZeroBearing->setMaximumSize(QSize(60, 16777215));
        editZeroBearing->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editZeroBearing->setReadOnly(true);

        gridLayout_13->addWidget(editZeroBearing, 5, 1, 1, 1);

        sliderZeroBearing = new QSlider(groupImageConfiguration);
        sliderZeroBearing->setObjectName(QStringLiteral("sliderZeroBearing"));
        sliderZeroBearing->setMaximum(360);
        sliderZeroBearing->setOrientation(Qt::Horizontal);

        gridLayout_13->addWidget(sliderZeroBearing, 5, 3, 1, 1);

        spinZeroBearing = new QDoubleSpinBox(groupImageConfiguration);
        spinZeroBearing->setObjectName(QStringLiteral("spinZeroBearing"));
        spinZeroBearing->setMinimumSize(QSize(65, 0));
        spinZeroBearing->setKeyboardTracking(false);
        spinZeroBearing->setDecimals(1);
        spinZeroBearing->setMaximum(359.9);
        spinZeroBearing->setSingleStep(0.1);

        gridLayout_13->addWidget(spinZeroBearing, 5, 2, 1, 1);

        spinAntennaHeight = new QDoubleSpinBox(groupImageConfiguration);
        spinAntennaHeight->setObjectName(QStringLiteral("spinAntennaHeight"));
        spinAntennaHeight->setMinimumSize(QSize(75, 0));
        spinAntennaHeight->setKeyboardTracking(false);
        spinAntennaHeight->setDecimals(3);
        spinAntennaHeight->setMaximum(100);
        spinAntennaHeight->setSingleStep(0.001);

        gridLayout_13->addWidget(spinAntennaHeight, 1, 2, 1, 1);

        spinZeroRange = new QDoubleSpinBox(groupImageConfiguration);
        spinZeroRange->setObjectName(QStringLiteral("spinZeroRange"));
        spinZeroRange->setMinimumSize(QSize(75, 0));
        spinZeroRange->setKeyboardTracking(false);
        spinZeroRange->setDecimals(0);
        spinZeroRange->setMaximum(1023);
        spinZeroRange->setSingleStep(1);

        gridLayout_13->addWidget(spinZeroRange, 4, 2, 1, 1);

        editAntennaHeight = new QLineEdit(groupImageConfiguration);
        editAntennaHeight->setObjectName(QStringLiteral("editAntennaHeight"));
        editAntennaHeight->setEnabled(false);
        editAntennaHeight->setMaximumSize(QSize(60, 16777215));
        editAntennaHeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editAntennaHeight->setReadOnly(true);

        gridLayout_13->addWidget(editAntennaHeight, 1, 1, 1, 1);

        sliderAntennaXOffset = new QSlider(groupImageConfiguration);
        sliderAntennaXOffset->setObjectName(QStringLiteral("sliderAntennaXOffset"));
        sliderAntennaXOffset->setMinimum(-1000);
        sliderAntennaXOffset->setMaximum(1000);
        sliderAntennaXOffset->setOrientation(Qt::Horizontal);

        gridLayout_13->addWidget(sliderAntennaXOffset, 2, 3, 1, 1);

        labelAntennaXOffset = new QLabel(groupImageConfiguration);
        labelAntennaXOffset->setObjectName(QStringLiteral("labelAntennaXOffset"));

        gridLayout_13->addWidget(labelAntennaXOffset, 2, 0, 1, 1);

        labelAntennaYOffset = new QLabel(groupImageConfiguration);
        labelAntennaYOffset->setObjectName(QStringLiteral("labelAntennaYOffset"));

        gridLayout_13->addWidget(labelAntennaYOffset, 3, 0, 1, 1);

        editAntennaYOffset = new QLineEdit(groupImageConfiguration);
        editAntennaYOffset->setObjectName(QStringLiteral("editAntennaYOffset"));
        editAntennaYOffset->setEnabled(false);
        editAntennaYOffset->setMaximumSize(QSize(60, 16777215));
        editAntennaYOffset->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        editAntennaYOffset->setReadOnly(true);

        gridLayout_13->addWidget(editAntennaYOffset, 3, 1, 1, 1);

        spinAntennaYOffset = new QDoubleSpinBox(groupImageConfiguration);
        spinAntennaYOffset->setObjectName(QStringLiteral("spinAntennaYOffset"));
        spinAntennaYOffset->setMinimumSize(QSize(75, 0));
        spinAntennaYOffset->setKeyboardTracking(false);
        spinAntennaYOffset->setDecimals(3);
        spinAntennaYOffset->setMinimum(-1000);
        spinAntennaYOffset->setMaximum(1000);
        spinAntennaYOffset->setSingleStep(0.001);

        gridLayout_13->addWidget(spinAntennaYOffset, 3, 2, 1, 1);

        sliderAntennaYOffset = new QSlider(groupImageConfiguration);
        sliderAntennaYOffset->setObjectName(QStringLiteral("sliderAntennaYOffset"));
        sliderAntennaYOffset->setMinimum(-1000);
        sliderAntennaYOffset->setMaximum(1000);
        sliderAntennaYOffset->setOrientation(Qt::Horizontal);

        gridLayout_13->addWidget(sliderAntennaYOffset, 3, 3, 1, 1);


        horizontalLayout_13->addLayout(gridLayout_13);

        horizontalSpacer_141 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_141);

        pushFactoryDefaults = new QPushButton(groupImageConfiguration);
        pushFactoryDefaults->setObjectName(QStringLiteral("pushFactoryDefaults"));
        pushFactoryDefaults->setMinimumSize(QSize(0, 30));
        pushFactoryDefaults->setMaximumSize(QSize(170, 16777215));
        pushFactoryDefaults->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_13->addWidget(pushFactoryDefaults);


        verticalLayout_14->addWidget(groupImageConfiguration);

        groupAntennaType = new QGroupBox(tabInstallation);
        groupAntennaType->setObjectName(QStringLiteral("groupAntennaType"));
        groupAntennaType->setMinimumSize(QSize(0, 0));
        horizontalLayout_6 = new QHBoxLayout(groupAntennaType);
        horizontalLayout_6->setSpacing(12);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 6, -1, -1);
        editAntennaType = new QLineEdit(groupAntennaType);
        editAntennaType->setObjectName(QStringLiteral("editAntennaType"));
        editAntennaType->setEnabled(false);
        sizePolicy5.setHeightForWidth(editAntennaType->sizePolicy().hasHeightForWidth());
        editAntennaType->setSizePolicy(sizePolicy5);
        editAntennaType->setMinimumSize(QSize(150, 20));
        editAntennaType->setMaximumSize(QSize(50, 16777215));
        editAntennaType->setReadOnly(true);

        horizontalLayout_6->addWidget(editAntennaType);

        comboAntennaType = new QComboBox(groupAntennaType);
        comboAntennaType->setObjectName(QStringLiteral("comboAntennaType"));
        comboAntennaType->setEnabled(false);
        sizePolicy2.setHeightForWidth(comboAntennaType->sizePolicy().hasHeightForWidth());
        comboAntennaType->setSizePolicy(sizePolicy2);
        comboAntennaType->setMinimumSize(QSize(90, 20));

        horizontalLayout_6->addWidget(comboAntennaType);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_15);


        verticalLayout_14->addWidget(groupAntennaType);

        verticalSpacer_9 = new QSpacerItem(198, 294, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_9);

        tabs->addTab(tabInstallation, QString());
        tabFeatures = new QWidget();
        tabFeatures->setObjectName(QStringLiteral("tabFeatures"));
        verticalLayout_10 = new QVBoxLayout(tabFeatures);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupFeaturesMisc = new QGroupBox(tabFeatures);
        groupFeaturesMisc->setObjectName(QStringLiteral("groupFeaturesMisc"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(groupFeaturesMisc->sizePolicy().hasHeightForWidth());
        groupFeaturesMisc->setSizePolicy(sizePolicy6);
        gridLayout_7 = new QGridLayout(groupFeaturesMisc);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(12);
        gridLayout_7->setContentsMargins(9, 6, 12, -1);
        editCombinedNoiseIR = new QLineEdit(groupFeaturesMisc);
        editCombinedNoiseIR->setObjectName(QStringLiteral("editCombinedNoiseIR"));
        editCombinedNoiseIR->setEnabled(false);
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(editCombinedNoiseIR->sizePolicy().hasHeightForWidth());
        editCombinedNoiseIR->setSizePolicy(sizePolicy7);
        editCombinedNoiseIR->setMinimumSize(QSize(120, 0));
        editCombinedNoiseIR->setMaximumSize(QSize(16777215, 16777215));
        editCombinedNoiseIR->setReadOnly(true);

        gridLayout_7->addWidget(editCombinedNoiseIR, 0, 1, 1, 1);

        labelCombinedNoiseIR_2 = new QLabel(groupFeaturesMisc);
        labelCombinedNoiseIR_2->setObjectName(QStringLiteral("labelCombinedNoiseIR_2"));
        sizePolicy3.setHeightForWidth(labelCombinedNoiseIR_2->sizePolicy().hasHeightForWidth());
        labelCombinedNoiseIR_2->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(labelCombinedNoiseIR_2, 1, 0, 1, 1);

        editInstrRangeMin = new QLineEdit(groupFeaturesMisc);
        editInstrRangeMin->setObjectName(QStringLiteral("editInstrRangeMin"));
        editInstrRangeMin->setEnabled(false);
        sizePolicy7.setHeightForWidth(editInstrRangeMin->sizePolicy().hasHeightForWidth());
        editInstrRangeMin->setSizePolicy(sizePolicy7);
        editInstrRangeMin->setMinimumSize(QSize(120, 0));
        editInstrRangeMin->setMaximumSize(QSize(16777215, 16777215));
        editInstrRangeMin->setReadOnly(true);

        gridLayout_7->addWidget(editInstrRangeMin, 1, 1, 1, 1);

        editInstrRangeMax = new QLineEdit(groupFeaturesMisc);
        editInstrRangeMax->setObjectName(QStringLiteral("editInstrRangeMax"));
        editInstrRangeMax->setEnabled(false);
        sizePolicy7.setHeightForWidth(editInstrRangeMax->sizePolicy().hasHeightForWidth());
        editInstrRangeMax->setSizePolicy(sizePolicy7);
        editInstrRangeMax->setMinimumSize(QSize(120, 0));
        editInstrRangeMax->setMaximumSize(QSize(16777215, 16777215));
        editInstrRangeMax->setReadOnly(true);

        gridLayout_7->addWidget(editInstrRangeMax, 1, 2, 1, 1);

        labelCombinedNoiseIR = new QLabel(groupFeaturesMisc);
        labelCombinedNoiseIR->setObjectName(QStringLiteral("labelCombinedNoiseIR"));
        sizePolicy3.setHeightForWidth(labelCombinedNoiseIR->sizePolicy().hasHeightForWidth());
        labelCombinedNoiseIR->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(labelCombinedNoiseIR, 0, 0, 1, 1);

        labelUseModes = new QLabel(groupFeaturesMisc);
        labelUseModes->setObjectName(QStringLiteral("labelUseModes"));
        sizePolicy3.setHeightForWidth(labelUseModes->sizePolicy().hasHeightForWidth());
        labelUseModes->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(labelUseModes, 2, 0, 1, 1);

        editUseModes = new QLineEdit(groupFeaturesMisc);
        editUseModes->setObjectName(QStringLiteral("editUseModes"));
        editUseModes->setEnabled(false);
        sizePolicy.setHeightForWidth(editUseModes->sizePolicy().hasHeightForWidth());
        editUseModes->setSizePolicy(sizePolicy);
        editUseModes->setMinimumSize(QSize(250, 0));
        editUseModes->setMaximumSize(QSize(16777215, 16777215));
        editUseModes->setReadOnly(true);

        gridLayout_7->addWidget(editUseModes, 2, 1, 1, 2);

        labelExtendedSeaGain = new QLabel(groupFeaturesMisc);
        labelExtendedSeaGain->setObjectName(QStringLiteral("labelExtendedSeaGain"));
        sizePolicy3.setHeightForWidth(labelExtendedSeaGain->sizePolicy().hasHeightForWidth());
        labelExtendedSeaGain->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(labelExtendedSeaGain, 4, 0, 1, 1);

        editSeaLimitsManual = new QLineEdit(groupFeaturesMisc);
        editSeaLimitsManual->setObjectName(QStringLiteral("editSeaLimitsManual"));
        editSeaLimitsManual->setEnabled(false);
        sizePolicy7.setHeightForWidth(editSeaLimitsManual->sizePolicy().hasHeightForWidth());
        editSeaLimitsManual->setSizePolicy(sizePolicy7);
        editSeaLimitsManual->setMinimumSize(QSize(120, 0));
        editSeaLimitsManual->setMaximumSize(QSize(16777215, 16777215));
        editSeaLimitsManual->setReadOnly(true);

        gridLayout_7->addWidget(editSeaLimitsManual, 4, 1, 1, 1);

        editSeaLimitsAuto = new QLineEdit(groupFeaturesMisc);
        editSeaLimitsAuto->setObjectName(QStringLiteral("editSeaLimitsAuto"));
        editSeaLimitsAuto->setEnabled(false);
        sizePolicy7.setHeightForWidth(editSeaLimitsAuto->sizePolicy().hasHeightForWidth());
        editSeaLimitsAuto->setSizePolicy(sizePolicy7);
        editSeaLimitsAuto->setMinimumSize(QSize(120, 0));
        editSeaLimitsAuto->setMaximumSize(QSize(16777215, 16777215));
        editSeaLimitsAuto->setReadOnly(true);

        gridLayout_7->addWidget(editSeaLimitsAuto, 4, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 1, 3, 1, 1);

        labelBlankSectors = new QLabel(groupFeaturesMisc);
        labelBlankSectors->setObjectName(QStringLiteral("labelBlankSectors"));

        gridLayout_7->addWidget(labelBlankSectors, 0, 4, 1, 1);

        chckBlankSectors = new QCheckBox(groupFeaturesMisc);
        chckBlankSectors->setObjectName(QStringLiteral("chckBlankSectors"));
        chckBlankSectors->setEnabled(false);
        chckBlankSectors->setMinimumSize(QSize(0, 0));
        chckBlankSectors->setLayoutDirection(Qt::LeftToRight);
        chckBlankSectors->setCheckable(true);
        chckBlankSectors->setChecked(true);

        gridLayout_7->addWidget(chckBlankSectors, 0, 5, 1, 1);

        editBlankSectors = new QLineEdit(groupFeaturesMisc);
        editBlankSectors->setObjectName(QStringLiteral("editBlankSectors"));
        editBlankSectors->setEnabled(false);
        sizePolicy7.setHeightForWidth(editBlankSectors->sizePolicy().hasHeightForWidth());
        editBlankSectors->setSizePolicy(sizePolicy7);
        editBlankSectors->setMinimumSize(QSize(40, 0));
        editBlankSectors->setMaximumSize(QSize(16777215, 16777215));
        editBlankSectors->setReadOnly(true);

        gridLayout_7->addWidget(editBlankSectors, 0, 6, 1, 1);


        horizontalLayout_3->addWidget(groupFeaturesMisc);


        verticalLayout_10->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox = new QGroupBox(tabFeatures);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy8);
        groupBox->setMinimumSize(QSize(0, 0));
        gridLayout_9 = new QGridLayout(groupBox);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setHorizontalSpacing(12);
        gridLayout_9->setContentsMargins(-1, 6, 12, -1);
        chckUserControlSea = new QCheckBox(groupBox);
        chckUserControlSea->setObjectName(QStringLiteral("chckUserControlSea"));
        chckUserControlSea->setEnabled(false);
        chckUserControlSea->setMinimumSize(QSize(0, 0));
        chckUserControlSea->setLayoutDirection(Qt::LeftToRight);
        chckUserControlSea->setCheckable(true);
        chckUserControlSea->setChecked(true);

        gridLayout_9->addWidget(chckUserControlSea, 1, 1, 1, 1);

        editUserControlSidelobeGain = new QLineEdit(groupBox);
        editUserControlSidelobeGain->setObjectName(QStringLiteral("editUserControlSidelobeGain"));
        editUserControlSidelobeGain->setEnabled(false);
        sizePolicy.setHeightForWidth(editUserControlSidelobeGain->sizePolicy().hasHeightForWidth());
        editUserControlSidelobeGain->setSizePolicy(sizePolicy);
        editUserControlSidelobeGain->setMinimumSize(QSize(160, 0));
        editUserControlSidelobeGain->setMaximumSize(QSize(16777215, 16777215));
        editUserControlSidelobeGain->setReadOnly(true);

        gridLayout_9->addWidget(editUserControlSidelobeGain, 0, 6, 1, 1);

        labelUserControlFastScan = new QLabel(groupBox);
        labelUserControlFastScan->setObjectName(QStringLiteral("labelUserControlFastScan"));
        labelUserControlFastScan->setEnabled(true);
        sizePolicy3.setHeightForWidth(labelUserControlFastScan->sizePolicy().hasHeightForWidth());
        labelUserControlFastScan->setSizePolicy(sizePolicy3);
        labelUserControlFastScan->setMinimumSize(QSize(0, 0));

        gridLayout_9->addWidget(labelUserControlFastScan, 4, 4, 1, 1);

        chckUserControlSTCCurve = new QCheckBox(groupBox);
        chckUserControlSTCCurve->setObjectName(QStringLiteral("chckUserControlSTCCurve"));
        chckUserControlSTCCurve->setEnabled(false);
        chckUserControlSTCCurve->setMinimumSize(QSize(0, 0));
        chckUserControlSTCCurve->setLayoutDirection(Qt::LeftToRight);
        chckUserControlSTCCurve->setCheckable(true);
        chckUserControlSTCCurve->setChecked(true);

        gridLayout_9->addWidget(chckUserControlSTCCurve, 5, 1, 1, 1);

        labelUserControlLED = new QLabel(groupBox);
        labelUserControlLED->setObjectName(QStringLiteral("labelUserControlLED"));
        labelUserControlLED->setEnabled(true);
        sizePolicy3.setHeightForWidth(labelUserControlLED->sizePolicy().hasHeightForWidth());
        labelUserControlLED->setSizePolicy(sizePolicy3);
        labelUserControlLED->setMinimumSize(QSize(0, 0));

        gridLayout_9->addWidget(labelUserControlLED, 6, 0, 1, 1);

        editUserControlBeamSharpening = new QLineEdit(groupBox);
        editUserControlBeamSharpening->setObjectName(QStringLiteral("editUserControlBeamSharpening"));
        editUserControlBeamSharpening->setEnabled(false);
        sizePolicy.setHeightForWidth(editUserControlBeamSharpening->sizePolicy().hasHeightForWidth());
        editUserControlBeamSharpening->setSizePolicy(sizePolicy);
        editUserControlBeamSharpening->setMaximumSize(QSize(16777215, 16777215));
        editUserControlBeamSharpening->setReadOnly(true);

        gridLayout_9->addWidget(editUserControlBeamSharpening, 5, 6, 1, 1);

        editUserControlIR = new QLineEdit(groupBox);
        editUserControlIR->setObjectName(QStringLiteral("editUserControlIR"));
        editUserControlIR->setEnabled(false);
        sizePolicy.setHeightForWidth(editUserControlIR->sizePolicy().hasHeightForWidth());
        editUserControlIR->setSizePolicy(sizePolicy);
        editUserControlIR->setMaximumSize(QSize(16777215, 16777215));
        editUserControlIR->setReadOnly(true);

        gridLayout_9->addWidget(editUserControlIR, 2, 2, 1, 1);

        chckUserControlGain = new QCheckBox(groupBox);
        chckUserControlGain->setObjectName(QStringLiteral("chckUserControlGain"));
        chckUserControlGain->setEnabled(false);
        chckUserControlGain->setMinimumSize(QSize(0, 0));
        chckUserControlGain->setLayoutDirection(Qt::LeftToRight);
        chckUserControlGain->setCheckable(true);
        chckUserControlGain->setChecked(true);

        gridLayout_9->addWidget(chckUserControlGain, 1, 5, 1, 1);

        editUserControlSTCCurve = new QLineEdit(groupBox);
        editUserControlSTCCurve->setObjectName(QStringLiteral("editUserControlSTCCurve"));
        editUserControlSTCCurve->setEnabled(false);
        sizePolicy.setHeightForWidth(editUserControlSTCCurve->sizePolicy().hasHeightForWidth());
        editUserControlSTCCurve->setSizePolicy(sizePolicy);
        editUserControlSTCCurve->setMaximumSize(QSize(16777215, 16777215));
        editUserControlSTCCurve->setReadOnly(true);

        gridLayout_9->addWidget(editUserControlSTCCurve, 5, 2, 1, 1);

        editUserControlGain = new QLineEdit(groupBox);
        editUserControlGain->setObjectName(QStringLiteral("editUserControlGain"));
        editUserControlGain->setEnabled(false);
        sizePolicy.setHeightForWidth(editUserControlGain->sizePolicy().hasHeightForWidth());
        editUserControlGain->setSizePolicy(sizePolicy);
        editUserControlGain->setMaximumSize(QSize(16777215, 16777215));
        editUserControlGain->setReadOnly(true);

        gridLayout_9->addWidget(editUserControlGain, 1, 6, 1, 1);

        labelUserControlSeaIR = new QLabel(groupBox);
        labelUserControlSeaIR->setObjectName(QStringLiteral("labelUserControlSeaIR"));
        labelUserControlSeaIR->setEnabled(true);
        sizePolicy3.setHeightForWidth(labelUserControlSeaIR->sizePolicy().hasHeightForWidth());
        labelUserControlSeaIR->setSizePolicy(sizePolicy3);
        labelUserControlSeaIR->setMinimumSize(QSize(0, 0));

        gridLayout_9->addWidget(labelUserControlSeaIR, 2, 0, 1, 1);

        labelUserControlSea = new QLabel(groupBox);
        labelUserControlSea->setObjectName(QStringLiteral("labelUserControlSea"));
        labelUserControlSea->setEnabled(true);
        sizePolicy3.setHeightForWidth(labelUserControlSea->sizePolicy().hasHeightForWidth());
        labelUserControlSea->setSizePolicy(sizePolicy3);
        labelUserControlSea->setMinimumSize(QSize(0, 0));

        gridLayout_9->addWidget(labelUserControlSea, 1, 0, 1, 1);

        chckUserControlRangeStretch = new QCheckBox(groupBox);
        chckUserControlRangeStretch->setObjectName(QStringLiteral("chckUserControlRangeStretch"));
        chckUserControlRangeStretch->setEnabled(false);
        chckUserControlRangeStretch->setMinimumSize(QSize(0, 0));
        chckUserControlRangeStretch->setLayoutDirection(Qt::LeftToRight);
        chckUserControlRangeStretch->setCheckable(true);
        chckUserControlRangeStretch->setChecked(true);

        gridLayout_9->addWidget(chckUserControlRangeStretch, 4, 1, 1, 1);

        chckUserControlIR = new QCheckBox(groupBox);
        chckUserControlIR->setObjectName(QStringLiteral("chckUserControlIR"));
        chckUserControlIR->setEnabled(false);
        chckUserControlIR->setMinimumSize(QSize(0, 0));
        chckUserControlIR->setLayoutDirection(Qt::LeftToRight);
        chckUserControlIR->setCheckable(true);
        chckUserControlIR->setChecked(true);

        gridLayout_9->addWidget(chckUserControlIR, 2, 1, 1, 1);

        labelUserControlBeamSharpening = new QLabel(groupBox);
        labelUserControlBeamSharpening->setObjectName(QStringLiteral("labelUserControlBeamSharpening"));
        labelUserControlBeamSharpening->setEnabled(true);
        sizePolicy3.setHeightForWidth(labelUserControlBeamSharpening->sizePolicy().hasHeightForWidth());
        labelUserControlBeamSharpening->setSizePolicy(sizePolicy3);
        labelUserControlBeamSharpening->setMinimumSize(QSize(0, 0));

        gridLayout_9->addWidget(labelUserControlBeamSharpening, 5, 4, 1, 1);

        labelUserControlLocalIR = new QLabel(groupBox);
        labelUserControlLocalIR->setObjectName(QStringLiteral("labelUserControlLocalIR"));
        labelUserControlLocalIR->setEnabled(true);
        sizePolicy3.setHeightForWidth(labelUserControlLocalIR->sizePolicy().hasHeightForWidth());
        labelUserControlLocalIR->setSizePolicy(sizePolicy3);
        labelUserControlLocalIR->setMinimumSize(QSize(0, 0));

        gridLayout_9->addWidget(labelUserControlLocalIR, 3, 0, 1, 1);

        labelUserControlRange = new QLabel(groupBox);
        labelUserControlRange->setObjectName(QStringLiteral("labelUserControlRange"));
        labelUserControlRange->setEnabled(true);
        sizePolicy3.setHeightForWidth(labelUserControlRange->sizePolicy().hasHeightForWidth());
        labelUserControlRange->setSizePolicy(sizePolicy3);
        labelUserControlRange->setMinimumSize(QSize(0, 0));

        gridLayout_9->addWidget(labelUserControlRange, 0, 0, 1, 1);

        editUserControlSea = new QLineEdit(groupBox);
        editUserControlSea->setObjectName(QStringLiteral("editUserControlSea"));
        editUserControlSea->setEnabled(false);
        sizePolicy.setHeightForWidth(editUserControlSea->sizePolicy().hasHeightForWidth());
        editUserControlSea->setSizePolicy(sizePolicy);
        editUserControlSea->setMaximumSize(QSize(16777215, 16777215));
        editUserControlSea->setReadOnly(true);

        gridLayout_9->addWidget(editUserControlSea, 1, 2, 1, 1);

        chckUserControlNoiseReject = new QCheckBox(groupBox);
        chckUserControlNoiseReject->setObjectName(QStringLiteral("chckUserControlNoiseReject"));
        chckUserControlNoiseReject->setEnabled(false);
        chckUserControlNoiseReject->setMinimumSize(QSize(0, 0));
        chckUserControlNoiseReject->setLayoutDirection(Qt::LeftToRight);
        chckUserControlNoiseReject->setCheckable(true);
        chckUserControlNoiseReject->setChecked(true);

        gridLayout_9->addWidget(chckUserControlNoiseReject, 3, 5, 1, 1);

        editUserControlLED = new QLineEdit(groupBox);
        editUserControlLED->setObjectName(QStringLiteral("editUserControlLED"));
        editUserControlLED->setEnabled(false);
        sizePolicy.setHeightForWidth(editUserControlLED->sizePolicy().hasHeightForWidth());
        editUserControlLED->setSizePolicy(sizePolicy);
        editUserControlLED->setMaximumSize(QSize(16777215, 16777215));
        editUserControlLED->setReadOnly(true);

        gridLayout_9->addWidget(editUserControlLED, 6, 2, 1, 1);

        labelUserControlRangeStretch = new QLabel(groupBox);
        labelUserControlRangeStretch->setObjectName(QStringLiteral("labelUserControlRangeStretch"));
        labelUserControlRangeStretch->setEnabled(true);
        sizePolicy3.setHeightForWidth(labelUserControlRangeStretch->sizePolicy().hasHeightForWidth());
        labelUserControlRangeStretch->setSizePolicy(sizePolicy3);
        labelUserControlRangeStretch->setMinimumSize(QSize(0, 0));

        gridLayout_9->addWidget(labelUserControlRangeStretch, 4, 0, 1, 1);

        editUserControlLocalIR = new QLineEdit(groupBox);
        editUserControlLocalIR->setObjectName(QStringLiteral("editUserControlLocalIR"));
        editUserControlLocalIR->setEnabled(false);
        sizePolicy.setHeightForWidth(editUserControlLocalIR->sizePolicy().hasHeightForWidth());
        editUserControlLocalIR->setSizePolicy(sizePolicy);
        editUserControlLocalIR->setMaximumSize(QSize(16777215, 16777215));
        editUserControlLocalIR->setReadOnly(true);

        gridLayout_9->addWidget(editUserControlLocalIR, 3, 2, 1, 1);

        labelUserControlTargetStretch = new QLabel(groupBox);
        labelUserControlTargetStretch->setObjectName(QStringLiteral("labelUserControlTargetStretch"));
        labelUserControlTargetStretch->setEnabled(true);
        sizePolicy3.setHeightForWidth(labelUserControlTargetStretch->sizePolicy().hasHeightForWidth());
        labelUserControlTargetStretch->setSizePolicy(sizePolicy3);
        labelUserControlTargetStretch->setMinimumSize(QSize(0, 0));

        gridLayout_9->addWidget(labelUserControlTargetStretch, 6, 4, 1, 1);

        labelUserControlRain = new QLabel(groupBox);
        labelUserControlRain->setObjectName(QStringLiteral("labelUserControlRain"));
        labelUserControlRain->setEnabled(true);
        sizePolicy3.setHeightForWidth(labelUserControlRain->sizePolicy().hasHeightForWidth());
        labelUserControlRain->setSizePolicy(sizePolicy3);
        labelUserControlRain->setMinimumSize(QSize(0, 0));

        gridLayout_9->addWidget(labelUserControlRain, 2, 4, 1, 1);

        chckUserControlRange = new QCheckBox(groupBox);
        chckUserControlRange->setObjectName(QStringLiteral("chckUserControlRange"));
        chckUserControlRange->setEnabled(false);
        chckUserControlRange->setMinimumSize(QSize(0, 0));
        chckUserControlRange->setLayoutDirection(Qt::LeftToRight);
        chckUserControlRange->setCheckable(true);
        chckUserControlRange->setChecked(true);

        gridLayout_9->addWidget(chckUserControlRange, 0, 1, 1, 1);

        editUserControlFastScan = new QLineEdit(groupBox);
        editUserControlFastScan->setObjectName(QStringLiteral("editUserControlFastScan"));
        editUserControlFastScan->setEnabled(false);
        sizePolicy.setHeightForWidth(editUserControlFastScan->sizePolicy().hasHeightForWidth());
        editUserControlFastScan->setSizePolicy(sizePolicy);
        editUserControlFastScan->setMaximumSize(QSize(16777215, 16777215));
        editUserControlFastScan->setReadOnly(true);

        gridLayout_9->addWidget(editUserControlFastScan, 4, 6, 1, 1);

        labelUserControlGain = new QLabel(groupBox);
        labelUserControlGain->setObjectName(QStringLiteral("labelUserControlGain"));
        labelUserControlGain->setEnabled(true);
        sizePolicy3.setHeightForWidth(labelUserControlGain->sizePolicy().hasHeightForWidth());
        labelUserControlGain->setSizePolicy(sizePolicy3);
        labelUserControlGain->setMinimumSize(QSize(0, 0));

        gridLayout_9->addWidget(labelUserControlGain, 1, 4, 1, 1);

        editUserControlTargetStretch = new QLineEdit(groupBox);
        editUserControlTargetStretch->setObjectName(QStringLiteral("editUserControlTargetStretch"));
        editUserControlTargetStretch->setEnabled(false);
        sizePolicy.setHeightForWidth(editUserControlTargetStretch->sizePolicy().hasHeightForWidth());
        editUserControlTargetStretch->setSizePolicy(sizePolicy);
        editUserControlTargetStretch->setMaximumSize(QSize(16777215, 16777215));
        editUserControlTargetStretch->setReadOnly(true);

        gridLayout_9->addWidget(editUserControlTargetStretch, 6, 6, 1, 1);

        chckUserControlTargetStretch = new QCheckBox(groupBox);
        chckUserControlTargetStretch->setObjectName(QStringLiteral("chckUserControlTargetStretch"));
        chckUserControlTargetStretch->setEnabled(false);
        chckUserControlTargetStretch->setMinimumSize(QSize(0, 0));
        chckUserControlTargetStretch->setLayoutDirection(Qt::LeftToRight);
        chckUserControlTargetStretch->setCheckable(true);
        chckUserControlTargetStretch->setChecked(true);

        gridLayout_9->addWidget(chckUserControlTargetStretch, 6, 5, 1, 1);

        editUserControlNoiseReject = new QLineEdit(groupBox);
        editUserControlNoiseReject->setObjectName(QStringLiteral("editUserControlNoiseReject"));
        editUserControlNoiseReject->setEnabled(false);
        sizePolicy.setHeightForWidth(editUserControlNoiseReject->sizePolicy().hasHeightForWidth());
        editUserControlNoiseReject->setSizePolicy(sizePolicy);
        editUserControlNoiseReject->setMaximumSize(QSize(16777215, 16777215));
        editUserControlNoiseReject->setReadOnly(true);

        gridLayout_9->addWidget(editUserControlNoiseReject, 3, 6, 1, 1);

        chckUserControlRain = new QCheckBox(groupBox);
        chckUserControlRain->setObjectName(QStringLiteral("chckUserControlRain"));
        chckUserControlRain->setEnabled(false);
        chckUserControlRain->setMinimumSize(QSize(0, 0));
        chckUserControlRain->setLayoutDirection(Qt::LeftToRight);
        chckUserControlRain->setCheckable(true);
        chckUserControlRain->setChecked(true);

        gridLayout_9->addWidget(chckUserControlRain, 2, 5, 1, 1);

        labelUserControlSidelobeGain = new QLabel(groupBox);
        labelUserControlSidelobeGain->setObjectName(QStringLiteral("labelUserControlSidelobeGain"));
        labelUserControlSidelobeGain->setEnabled(true);
        sizePolicy3.setHeightForWidth(labelUserControlSidelobeGain->sizePolicy().hasHeightForWidth());
        labelUserControlSidelobeGain->setSizePolicy(sizePolicy3);
        labelUserControlSidelobeGain->setMinimumSize(QSize(0, 0));

        gridLayout_9->addWidget(labelUserControlSidelobeGain, 0, 4, 1, 1);

        chckUserControlLED = new QCheckBox(groupBox);
        chckUserControlLED->setObjectName(QStringLiteral("chckUserControlLED"));
        chckUserControlLED->setEnabled(false);
        chckUserControlLED->setMinimumSize(QSize(0, 0));
        chckUserControlLED->setLayoutDirection(Qt::LeftToRight);
        chckUserControlLED->setCheckable(true);
        chckUserControlLED->setChecked(true);

        gridLayout_9->addWidget(chckUserControlLED, 6, 1, 1, 1);

        chckUserControlFastScan = new QCheckBox(groupBox);
        chckUserControlFastScan->setObjectName(QStringLiteral("chckUserControlFastScan"));
        chckUserControlFastScan->setEnabled(false);
        chckUserControlFastScan->setMinimumSize(QSize(0, 0));
        chckUserControlFastScan->setLayoutDirection(Qt::LeftToRight);
        chckUserControlFastScan->setCheckable(true);
        chckUserControlFastScan->setChecked(true);

        gridLayout_9->addWidget(chckUserControlFastScan, 4, 5, 1, 1);

        chckUserControlSidelobeGain = new QCheckBox(groupBox);
        chckUserControlSidelobeGain->setObjectName(QStringLiteral("chckUserControlSidelobeGain"));
        chckUserControlSidelobeGain->setEnabled(false);
        chckUserControlSidelobeGain->setMinimumSize(QSize(0, 0));
        chckUserControlSidelobeGain->setLayoutDirection(Qt::LeftToRight);
        chckUserControlSidelobeGain->setCheckable(true);
        chckUserControlSidelobeGain->setChecked(true);

        gridLayout_9->addWidget(chckUserControlSidelobeGain, 0, 5, 1, 1);

        editUserControlRangeStretch = new QLineEdit(groupBox);
        editUserControlRangeStretch->setObjectName(QStringLiteral("editUserControlRangeStretch"));
        editUserControlRangeStretch->setEnabled(false);
        sizePolicy.setHeightForWidth(editUserControlRangeStretch->sizePolicy().hasHeightForWidth());
        editUserControlRangeStretch->setSizePolicy(sizePolicy);
        editUserControlRangeStretch->setMaximumSize(QSize(16777215, 16777215));
        editUserControlRangeStretch->setReadOnly(true);

        gridLayout_9->addWidget(editUserControlRangeStretch, 4, 2, 1, 1);

        labelUserControlNoiseReject = new QLabel(groupBox);
        labelUserControlNoiseReject->setObjectName(QStringLiteral("labelUserControlNoiseReject"));
        labelUserControlNoiseReject->setEnabled(true);
        sizePolicy3.setHeightForWidth(labelUserControlNoiseReject->sizePolicy().hasHeightForWidth());
        labelUserControlNoiseReject->setSizePolicy(sizePolicy3);
        labelUserControlNoiseReject->setMinimumSize(QSize(0, 0));

        gridLayout_9->addWidget(labelUserControlNoiseReject, 3, 4, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_13, 0, 3, 1, 1);

        chckUserControlLocalIR = new QCheckBox(groupBox);
        chckUserControlLocalIR->setObjectName(QStringLiteral("chckUserControlLocalIR"));
        chckUserControlLocalIR->setEnabled(false);
        chckUserControlLocalIR->setMinimumSize(QSize(0, 0));
        chckUserControlLocalIR->setLayoutDirection(Qt::LeftToRight);
        chckUserControlLocalIR->setCheckable(true);
        chckUserControlLocalIR->setChecked(true);

        gridLayout_9->addWidget(chckUserControlLocalIR, 3, 1, 1, 1);

        chckUserControlBeamSharpening = new QCheckBox(groupBox);
        chckUserControlBeamSharpening->setObjectName(QStringLiteral("chckUserControlBeamSharpening"));
        chckUserControlBeamSharpening->setEnabled(false);
        chckUserControlBeamSharpening->setMinimumSize(QSize(0, 0));
        chckUserControlBeamSharpening->setLayoutDirection(Qt::LeftToRight);
        chckUserControlBeamSharpening->setCheckable(true);
        chckUserControlBeamSharpening->setChecked(true);

        gridLayout_9->addWidget(chckUserControlBeamSharpening, 5, 5, 1, 1);

        editUserControlRange = new QLineEdit(groupBox);
        editUserControlRange->setObjectName(QStringLiteral("editUserControlRange"));
        editUserControlRange->setEnabled(false);
        sizePolicy.setHeightForWidth(editUserControlRange->sizePolicy().hasHeightForWidth());
        editUserControlRange->setSizePolicy(sizePolicy);
        editUserControlRange->setMinimumSize(QSize(160, 0));
        editUserControlRange->setMaximumSize(QSize(16777215, 16777215));
        editUserControlRange->setReadOnly(true);

        gridLayout_9->addWidget(editUserControlRange, 0, 2, 1, 1);

        labelUserControlSTCCurve = new QLabel(groupBox);
        labelUserControlSTCCurve->setObjectName(QStringLiteral("labelUserControlSTCCurve"));
        labelUserControlSTCCurve->setEnabled(true);
        sizePolicy3.setHeightForWidth(labelUserControlSTCCurve->sizePolicy().hasHeightForWidth());
        labelUserControlSTCCurve->setSizePolicy(sizePolicy3);
        labelUserControlSTCCurve->setMinimumSize(QSize(0, 0));

        gridLayout_9->addWidget(labelUserControlSTCCurve, 5, 0, 1, 1);

        editUserControlRain = new QLineEdit(groupBox);
        editUserControlRain->setObjectName(QStringLiteral("editUserControlRain"));
        editUserControlRain->setEnabled(false);
        sizePolicy.setHeightForWidth(editUserControlRain->sizePolicy().hasHeightForWidth());
        editUserControlRain->setSizePolicy(sizePolicy);
        editUserControlRain->setMaximumSize(QSize(16777215, 16777215));
        editUserControlRain->setReadOnly(true);

        gridLayout_9->addWidget(editUserControlRain, 2, 6, 1, 1);


        horizontalLayout_4->addWidget(groupBox);


        verticalLayout_10->addLayout(horizontalLayout_4);

        verticalSpacer_71 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_71);

        tabs->addTab(tabFeatures, QString());
        tabGuardZone = new QWidget();
        tabGuardZone->setObjectName(QStringLiteral("tabGuardZone"));
        tabGuardZone->setEnabled(false);
        verticalLayout_2 = new QVBoxLayout(tabGuardZone);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        groupGuard1Zone = new QGroupBox(tabGuardZone);
        groupGuard1Zone->setObjectName(QStringLiteral("groupGuard1Zone"));
        layoutGuard1Zone = new QVBoxLayout(groupGuard1Zone);
        layoutGuard1Zone->setSpacing(6);
        layoutGuard1Zone->setContentsMargins(11, 11, 11, 11);
        layoutGuard1Zone->setObjectName(QStringLiteral("layoutGuard1Zone"));
        layoutGuard1Zone->setContentsMargins(-1, 3, -1, -1);
        groupGuard1Alarm = new QGroupBox(groupGuard1Zone);
        groupGuard1Alarm->setObjectName(QStringLiteral("groupGuard1Alarm"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(groupGuard1Alarm->sizePolicy().hasHeightForWidth());
        groupGuard1Alarm->setSizePolicy(sizePolicy9);
        layoutGuard1Alarm = new QGridLayout(groupGuard1Alarm);
        layoutGuard1Alarm->setSpacing(6);
        layoutGuard1Alarm->setContentsMargins(11, 11, 11, 11);
        layoutGuard1Alarm->setObjectName(QStringLiteral("layoutGuard1Alarm"));
        layoutGuard1Alarm->setVerticalSpacing(6);
        layoutGuard1Alarm->setContentsMargins(-1, 3, -1, -1);
        labelGuard1Type = new QLabel(groupGuard1Alarm);
        labelGuard1Type->setObjectName(QStringLiteral("labelGuard1Type"));

        layoutGuard1Alarm->addWidget(labelGuard1Type, 0, 0, 1, 1);

        editGuard1Type = new QLineEdit(groupGuard1Alarm);
        editGuard1Type->setObjectName(QStringLiteral("editGuard1Type"));
        editGuard1Type->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuard1Type->sizePolicy().hasHeightForWidth());
        editGuard1Type->setSizePolicy(sizePolicy5);
        editGuard1Type->setMinimumSize(QSize(0, 20));
        editGuard1Type->setMaximumSize(QSize(60, 16777215));
        editGuard1Type->setReadOnly(true);

        layoutGuard1Alarm->addWidget(editGuard1Type, 0, 1, 1, 1);

        labelGuard1State = new QLabel(groupGuard1Alarm);
        labelGuard1State->setObjectName(QStringLiteral("labelGuard1State"));

        layoutGuard1Alarm->addWidget(labelGuard1State, 1, 0, 1, 1);

        editGuard1State = new QLineEdit(groupGuard1Alarm);
        editGuard1State->setObjectName(QStringLiteral("editGuard1State"));
        editGuard1State->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuard1State->sizePolicy().hasHeightForWidth());
        editGuard1State->setSizePolicy(sizePolicy5);
        editGuard1State->setMinimumSize(QSize(0, 20));
        editGuard1State->setMaximumSize(QSize(60, 16777215));
        editGuard1State->setReadOnly(true);

        layoutGuard1Alarm->addWidget(editGuard1State, 1, 1, 1, 1);

        pushGuard1Cancel = new QPushButton(groupGuard1Alarm);
        pushGuard1Cancel->setObjectName(QStringLiteral("pushGuard1Cancel"));

        layoutGuard1Alarm->addWidget(pushGuard1Cancel, 1, 3, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        layoutGuard1Alarm->addItem(horizontalSpacer_16, 0, 2, 1, 1);


        layoutGuard1Zone->addWidget(groupGuard1Alarm);

        groupGuard1Setup = new QGroupBox(groupGuard1Zone);
        groupGuard1Setup->setObjectName(QStringLiteral("groupGuard1Setup"));
        layoutGuard1Setup1 = new QGridLayout(groupGuard1Setup);
        layoutGuard1Setup1->setSpacing(6);
        layoutGuard1Setup1->setContentsMargins(11, 11, 11, 11);
        layoutGuard1Setup1->setObjectName(QStringLiteral("layoutGuard1Setup1"));
        layoutGuard1Setup1->setVerticalSpacing(6);
        layoutGuard1Setup1->setContentsMargins(-1, 3, -1, -1);
        labelGuard1Enabled = new QLabel(groupGuard1Setup);
        labelGuard1Enabled->setObjectName(QStringLiteral("labelGuard1Enabled"));

        layoutGuard1Setup1->addWidget(labelGuard1Enabled, 0, 0, 1, 1);

        labelGuard1RangeStart = new QLabel(groupGuard1Setup);
        labelGuard1RangeStart->setObjectName(QStringLiteral("labelGuard1RangeStart"));

        layoutGuard1Setup1->addWidget(labelGuard1RangeStart, 1, 0, 1, 1);

        labelGuard1RangeEnd = new QLabel(groupGuard1Setup);
        labelGuard1RangeEnd->setObjectName(QStringLiteral("labelGuard1RangeEnd"));

        layoutGuard1Setup1->addWidget(labelGuard1RangeEnd, 2, 0, 1, 1);

        labelGuard1Bearing = new QLabel(groupGuard1Setup);
        labelGuard1Bearing->setObjectName(QStringLiteral("labelGuard1Bearing"));

        layoutGuard1Setup1->addWidget(labelGuard1Bearing, 3, 0, 1, 1);

        labelGuard1Width = new QLabel(groupGuard1Setup);
        labelGuard1Width->setObjectName(QStringLiteral("labelGuard1Width"));

        layoutGuard1Setup1->addWidget(labelGuard1Width, 4, 0, 1, 1);

        labelGuard1AlarmType = new QLabel(groupGuard1Setup);
        labelGuard1AlarmType->setObjectName(QStringLiteral("labelGuard1AlarmType"));

        layoutGuard1Setup1->addWidget(labelGuard1AlarmType, 5, 0, 1, 1);

        checkGuard1Enabled = new QCheckBox(groupGuard1Setup);
        checkGuard1Enabled->setObjectName(QStringLiteral("checkGuard1Enabled"));

        layoutGuard1Setup1->addWidget(checkGuard1Enabled, 0, 1, 1, 1);

        editGuard1RangeStart = new QLineEdit(groupGuard1Setup);
        editGuard1RangeStart->setObjectName(QStringLiteral("editGuard1RangeStart"));
        editGuard1RangeStart->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuard1RangeStart->sizePolicy().hasHeightForWidth());
        editGuard1RangeStart->setSizePolicy(sizePolicy5);
        editGuard1RangeStart->setMinimumSize(QSize(0, 20));
        editGuard1RangeStart->setMaximumSize(QSize(50, 16777215));
        editGuard1RangeStart->setReadOnly(true);

        layoutGuard1Setup1->addWidget(editGuard1RangeStart, 1, 1, 1, 1);

        editGuard1RangeEnd = new QLineEdit(groupGuard1Setup);
        editGuard1RangeEnd->setObjectName(QStringLiteral("editGuard1RangeEnd"));
        editGuard1RangeEnd->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuard1RangeEnd->sizePolicy().hasHeightForWidth());
        editGuard1RangeEnd->setSizePolicy(sizePolicy5);
        editGuard1RangeEnd->setMinimumSize(QSize(0, 20));
        editGuard1RangeEnd->setMaximumSize(QSize(50, 16777215));
        editGuard1RangeEnd->setReadOnly(true);

        layoutGuard1Setup1->addWidget(editGuard1RangeEnd, 2, 1, 1, 1);

        editGuard1Bearing = new QLineEdit(groupGuard1Setup);
        editGuard1Bearing->setObjectName(QStringLiteral("editGuard1Bearing"));
        editGuard1Bearing->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuard1Bearing->sizePolicy().hasHeightForWidth());
        editGuard1Bearing->setSizePolicy(sizePolicy5);
        editGuard1Bearing->setMinimumSize(QSize(0, 20));
        editGuard1Bearing->setMaximumSize(QSize(50, 16777215));
        editGuard1Bearing->setReadOnly(true);

        layoutGuard1Setup1->addWidget(editGuard1Bearing, 3, 1, 1, 1);

        editGuard1Width = new QLineEdit(groupGuard1Setup);
        editGuard1Width->setObjectName(QStringLiteral("editGuard1Width"));
        editGuard1Width->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuard1Width->sizePolicy().hasHeightForWidth());
        editGuard1Width->setSizePolicy(sizePolicy5);
        editGuard1Width->setMinimumSize(QSize(0, 20));
        editGuard1Width->setMaximumSize(QSize(50, 16777215));
        editGuard1Width->setReadOnly(true);

        layoutGuard1Setup1->addWidget(editGuard1Width, 4, 1, 1, 1);

        editGuard1AlarmType = new QLineEdit(groupGuard1Setup);
        editGuard1AlarmType->setObjectName(QStringLiteral("editGuard1AlarmType"));
        editGuard1AlarmType->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuard1AlarmType->sizePolicy().hasHeightForWidth());
        editGuard1AlarmType->setSizePolicy(sizePolicy5);
        editGuard1AlarmType->setMinimumSize(QSize(0, 20));
        editGuard1AlarmType->setMaximumSize(QSize(50, 16777215));
        editGuard1AlarmType->setReadOnly(true);

        layoutGuard1Setup1->addWidget(editGuard1AlarmType, 5, 1, 1, 1);

        spinGuard1RangeStart = new QSpinBox(groupGuard1Setup);
        spinGuard1RangeStart->setObjectName(QStringLiteral("spinGuard1RangeStart"));
        spinGuard1RangeStart->setKeyboardTracking(false);
        spinGuard1RangeStart->setMaximum(100000);

        layoutGuard1Setup1->addWidget(spinGuard1RangeStart, 1, 2, 1, 1);

        spinGuard1RangeEnd = new QSpinBox(groupGuard1Setup);
        spinGuard1RangeEnd->setObjectName(QStringLiteral("spinGuard1RangeEnd"));
        spinGuard1RangeEnd->setKeyboardTracking(false);
        spinGuard1RangeEnd->setMaximum(100000);

        layoutGuard1Setup1->addWidget(spinGuard1RangeEnd, 2, 2, 1, 1);

        comboGuard1AlarmType = new QComboBox(groupGuard1Setup);
        comboGuard1AlarmType->setObjectName(QStringLiteral("comboGuard1AlarmType"));

        layoutGuard1Setup1->addWidget(comboGuard1AlarmType, 5, 2, 1, 1);

        sliderGuard1RangeStart = new QSlider(groupGuard1Setup);
        sliderGuard1RangeStart->setObjectName(QStringLiteral("sliderGuard1RangeStart"));
        sliderGuard1RangeStart->setMinimumSize(QSize(65, 0));
        sliderGuard1RangeStart->setMaximum(100000);
        sliderGuard1RangeStart->setOrientation(Qt::Horizontal);

        layoutGuard1Setup1->addWidget(sliderGuard1RangeStart, 1, 3, 1, 1);

        sliderGuard1RangeEnd = new QSlider(groupGuard1Setup);
        sliderGuard1RangeEnd->setObjectName(QStringLiteral("sliderGuard1RangeEnd"));
        sliderGuard1RangeEnd->setMaximum(100000);
        sliderGuard1RangeEnd->setOrientation(Qt::Horizontal);

        layoutGuard1Setup1->addWidget(sliderGuard1RangeEnd, 2, 3, 1, 1);

        sliderGuard1Bearing = new QSlider(groupGuard1Setup);
        sliderGuard1Bearing->setObjectName(QStringLiteral("sliderGuard1Bearing"));
        sliderGuard1Bearing->setMaximum(360);
        sliderGuard1Bearing->setOrientation(Qt::Horizontal);

        layoutGuard1Setup1->addWidget(sliderGuard1Bearing, 3, 3, 1, 1);

        sliderGuard1Width = new QSlider(groupGuard1Setup);
        sliderGuard1Width->setObjectName(QStringLiteral("sliderGuard1Width"));
        sliderGuard1Width->setMaximum(360);
        sliderGuard1Width->setOrientation(Qt::Horizontal);

        layoutGuard1Setup1->addWidget(sliderGuard1Width, 4, 3, 1, 1);

        spinGuard1Bearing = new QSpinBox(groupGuard1Setup);
        spinGuard1Bearing->setObjectName(QStringLiteral("spinGuard1Bearing"));
        spinGuard1Bearing->setKeyboardTracking(false);
        spinGuard1Bearing->setMaximum(360);

        layoutGuard1Setup1->addWidget(spinGuard1Bearing, 3, 2, 1, 1);

        spinGuard1Width = new QSpinBox(groupGuard1Setup);
        spinGuard1Width->setObjectName(QStringLiteral("spinGuard1Width"));
        spinGuard1Width->setKeyboardTracking(false);
        spinGuard1Width->setMaximum(360);

        layoutGuard1Setup1->addWidget(spinGuard1Width, 4, 2, 1, 1);


        layoutGuard1Zone->addWidget(groupGuard1Setup);


        horizontalLayout_8->addWidget(groupGuard1Zone);

        groupGuard2Zone = new QGroupBox(tabGuardZone);
        groupGuard2Zone->setObjectName(QStringLiteral("groupGuard2Zone"));
        layoutGuard2Zone = new QVBoxLayout(groupGuard2Zone);
        layoutGuard2Zone->setSpacing(6);
        layoutGuard2Zone->setContentsMargins(11, 11, 11, 11);
        layoutGuard2Zone->setObjectName(QStringLiteral("layoutGuard2Zone"));
        layoutGuard2Zone->setContentsMargins(-1, 3, -1, -1);
        groupGuard2Alarm = new QGroupBox(groupGuard2Zone);
        groupGuard2Alarm->setObjectName(QStringLiteral("groupGuard2Alarm"));
        sizePolicy9.setHeightForWidth(groupGuard2Alarm->sizePolicy().hasHeightForWidth());
        groupGuard2Alarm->setSizePolicy(sizePolicy9);
        layoutGuard2Alarm = new QGridLayout(groupGuard2Alarm);
        layoutGuard2Alarm->setSpacing(6);
        layoutGuard2Alarm->setContentsMargins(11, 11, 11, 11);
        layoutGuard2Alarm->setObjectName(QStringLiteral("layoutGuard2Alarm"));
        layoutGuard2Alarm->setVerticalSpacing(6);
        layoutGuard2Alarm->setContentsMargins(-1, 3, -1, -1);
        labelGuard2Type = new QLabel(groupGuard2Alarm);
        labelGuard2Type->setObjectName(QStringLiteral("labelGuard2Type"));

        layoutGuard2Alarm->addWidget(labelGuard2Type, 0, 0, 1, 1);

        editGuard2Type = new QLineEdit(groupGuard2Alarm);
        editGuard2Type->setObjectName(QStringLiteral("editGuard2Type"));
        editGuard2Type->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuard2Type->sizePolicy().hasHeightForWidth());
        editGuard2Type->setSizePolicy(sizePolicy5);
        editGuard2Type->setMinimumSize(QSize(0, 20));
        editGuard2Type->setMaximumSize(QSize(60, 16777215));
        editGuard2Type->setReadOnly(true);

        layoutGuard2Alarm->addWidget(editGuard2Type, 0, 1, 1, 1);

        labelGuard2State = new QLabel(groupGuard2Alarm);
        labelGuard2State->setObjectName(QStringLiteral("labelGuard2State"));

        layoutGuard2Alarm->addWidget(labelGuard2State, 1, 0, 1, 1);

        editGuard2State = new QLineEdit(groupGuard2Alarm);
        editGuard2State->setObjectName(QStringLiteral("editGuard2State"));
        editGuard2State->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuard2State->sizePolicy().hasHeightForWidth());
        editGuard2State->setSizePolicy(sizePolicy5);
        editGuard2State->setMinimumSize(QSize(0, 20));
        editGuard2State->setMaximumSize(QSize(60, 16777215));
        editGuard2State->setReadOnly(true);

        layoutGuard2Alarm->addWidget(editGuard2State, 1, 1, 1, 1);

        pushGuard2Cancel = new QPushButton(groupGuard2Alarm);
        pushGuard2Cancel->setObjectName(QStringLiteral("pushGuard2Cancel"));

        layoutGuard2Alarm->addWidget(pushGuard2Cancel, 1, 3, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        layoutGuard2Alarm->addItem(horizontalSpacer_17, 0, 2, 1, 1);


        layoutGuard2Zone->addWidget(groupGuard2Alarm);

        groupGuard2Setup = new QGroupBox(groupGuard2Zone);
        groupGuard2Setup->setObjectName(QStringLiteral("groupGuard2Setup"));
        layoutGuard2Setup = new QGridLayout(groupGuard2Setup);
        layoutGuard2Setup->setSpacing(6);
        layoutGuard2Setup->setContentsMargins(11, 11, 11, 11);
        layoutGuard2Setup->setObjectName(QStringLiteral("layoutGuard2Setup"));
        layoutGuard2Setup->setVerticalSpacing(6);
        layoutGuard2Setup->setContentsMargins(-1, 3, -1, -1);
        labelGuard2Enabled = new QLabel(groupGuard2Setup);
        labelGuard2Enabled->setObjectName(QStringLiteral("labelGuard2Enabled"));

        layoutGuard2Setup->addWidget(labelGuard2Enabled, 0, 0, 1, 1);

        checkGuard2Enabled = new QCheckBox(groupGuard2Setup);
        checkGuard2Enabled->setObjectName(QStringLiteral("checkGuard2Enabled"));

        layoutGuard2Setup->addWidget(checkGuard2Enabled, 0, 1, 1, 1);

        labelGuard2RangeStart = new QLabel(groupGuard2Setup);
        labelGuard2RangeStart->setObjectName(QStringLiteral("labelGuard2RangeStart"));

        layoutGuard2Setup->addWidget(labelGuard2RangeStart, 1, 0, 1, 1);

        editGuard2RangeStart = new QLineEdit(groupGuard2Setup);
        editGuard2RangeStart->setObjectName(QStringLiteral("editGuard2RangeStart"));
        editGuard2RangeStart->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuard2RangeStart->sizePolicy().hasHeightForWidth());
        editGuard2RangeStart->setSizePolicy(sizePolicy5);
        editGuard2RangeStart->setMinimumSize(QSize(0, 20));
        editGuard2RangeStart->setMaximumSize(QSize(50, 16777215));
        editGuard2RangeStart->setReadOnly(true);

        layoutGuard2Setup->addWidget(editGuard2RangeStart, 1, 1, 1, 1);

        labelGuard2RangeEnd = new QLabel(groupGuard2Setup);
        labelGuard2RangeEnd->setObjectName(QStringLiteral("labelGuard2RangeEnd"));

        layoutGuard2Setup->addWidget(labelGuard2RangeEnd, 2, 0, 1, 1);

        editGuard2RangeEnd = new QLineEdit(groupGuard2Setup);
        editGuard2RangeEnd->setObjectName(QStringLiteral("editGuard2RangeEnd"));
        editGuard2RangeEnd->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuard2RangeEnd->sizePolicy().hasHeightForWidth());
        editGuard2RangeEnd->setSizePolicy(sizePolicy5);
        editGuard2RangeEnd->setMinimumSize(QSize(0, 20));
        editGuard2RangeEnd->setMaximumSize(QSize(50, 16777215));
        editGuard2RangeEnd->setReadOnly(true);

        layoutGuard2Setup->addWidget(editGuard2RangeEnd, 2, 1, 1, 1);

        labelGuard2Bearing = new QLabel(groupGuard2Setup);
        labelGuard2Bearing->setObjectName(QStringLiteral("labelGuard2Bearing"));

        layoutGuard2Setup->addWidget(labelGuard2Bearing, 3, 0, 1, 1);

        editGuard2Bearing = new QLineEdit(groupGuard2Setup);
        editGuard2Bearing->setObjectName(QStringLiteral("editGuard2Bearing"));
        editGuard2Bearing->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuard2Bearing->sizePolicy().hasHeightForWidth());
        editGuard2Bearing->setSizePolicy(sizePolicy5);
        editGuard2Bearing->setMinimumSize(QSize(0, 20));
        editGuard2Bearing->setMaximumSize(QSize(50, 16777215));
        editGuard2Bearing->setReadOnly(true);

        layoutGuard2Setup->addWidget(editGuard2Bearing, 3, 1, 1, 1);

        labelGuard2Width = new QLabel(groupGuard2Setup);
        labelGuard2Width->setObjectName(QStringLiteral("labelGuard2Width"));

        layoutGuard2Setup->addWidget(labelGuard2Width, 5, 0, 1, 1);

        editGuard2Width = new QLineEdit(groupGuard2Setup);
        editGuard2Width->setObjectName(QStringLiteral("editGuard2Width"));
        editGuard2Width->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuard2Width->sizePolicy().hasHeightForWidth());
        editGuard2Width->setSizePolicy(sizePolicy5);
        editGuard2Width->setMinimumSize(QSize(0, 20));
        editGuard2Width->setMaximumSize(QSize(50, 16777215));
        editGuard2Width->setReadOnly(true);

        layoutGuard2Setup->addWidget(editGuard2Width, 5, 1, 1, 1);

        labelGuard2AlarmType = new QLabel(groupGuard2Setup);
        labelGuard2AlarmType->setObjectName(QStringLiteral("labelGuard2AlarmType"));

        layoutGuard2Setup->addWidget(labelGuard2AlarmType, 6, 0, 1, 1);

        editGuard2AlarmType = new QLineEdit(groupGuard2Setup);
        editGuard2AlarmType->setObjectName(QStringLiteral("editGuard2AlarmType"));
        editGuard2AlarmType->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuard2AlarmType->sizePolicy().hasHeightForWidth());
        editGuard2AlarmType->setSizePolicy(sizePolicy5);
        editGuard2AlarmType->setMinimumSize(QSize(0, 20));
        editGuard2AlarmType->setMaximumSize(QSize(50, 16777215));
        editGuard2AlarmType->setReadOnly(true);

        layoutGuard2Setup->addWidget(editGuard2AlarmType, 6, 1, 1, 1);

        spinGuard2RangeStart = new QSpinBox(groupGuard2Setup);
        spinGuard2RangeStart->setObjectName(QStringLiteral("spinGuard2RangeStart"));
        spinGuard2RangeStart->setKeyboardTracking(false);
        spinGuard2RangeStart->setMaximum(100000);

        layoutGuard2Setup->addWidget(spinGuard2RangeStart, 1, 2, 1, 1);

        spinGuard2RangeEnd = new QSpinBox(groupGuard2Setup);
        spinGuard2RangeEnd->setObjectName(QStringLiteral("spinGuard2RangeEnd"));
        spinGuard2RangeEnd->setKeyboardTracking(false);
        spinGuard2RangeEnd->setMaximum(100000);

        layoutGuard2Setup->addWidget(spinGuard2RangeEnd, 2, 2, 1, 1);

        comboGuard2AlarmType = new QComboBox(groupGuard2Setup);
        comboGuard2AlarmType->setObjectName(QStringLiteral("comboGuard2AlarmType"));

        layoutGuard2Setup->addWidget(comboGuard2AlarmType, 6, 2, 1, 1);

        sliderGuard2RangeStart = new QSlider(groupGuard2Setup);
        sliderGuard2RangeStart->setObjectName(QStringLiteral("sliderGuard2RangeStart"));
        sliderGuard2RangeStart->setMinimumSize(QSize(65, 0));
        sliderGuard2RangeStart->setMaximum(100000);
        sliderGuard2RangeStart->setOrientation(Qt::Horizontal);

        layoutGuard2Setup->addWidget(sliderGuard2RangeStart, 1, 3, 1, 1);

        sliderGuard2RangeEnd = new QSlider(groupGuard2Setup);
        sliderGuard2RangeEnd->setObjectName(QStringLiteral("sliderGuard2RangeEnd"));
        sliderGuard2RangeEnd->setMaximum(100000);
        sliderGuard2RangeEnd->setOrientation(Qt::Horizontal);

        layoutGuard2Setup->addWidget(sliderGuard2RangeEnd, 2, 3, 1, 1);

        sliderGuard2Bearing = new QSlider(groupGuard2Setup);
        sliderGuard2Bearing->setObjectName(QStringLiteral("sliderGuard2Bearing"));
        sliderGuard2Bearing->setMaximum(360);
        sliderGuard2Bearing->setOrientation(Qt::Horizontal);

        layoutGuard2Setup->addWidget(sliderGuard2Bearing, 3, 3, 1, 1);

        sliderGuard2Width = new QSlider(groupGuard2Setup);
        sliderGuard2Width->setObjectName(QStringLiteral("sliderGuard2Width"));
        sliderGuard2Width->setMaximum(360);
        sliderGuard2Width->setOrientation(Qt::Horizontal);

        layoutGuard2Setup->addWidget(sliderGuard2Width, 5, 3, 1, 1);

        spinGuard2Bearing = new QSpinBox(groupGuard2Setup);
        spinGuard2Bearing->setObjectName(QStringLiteral("spinGuard2Bearing"));
        spinGuard2Bearing->setKeyboardTracking(false);
        spinGuard2Bearing->setMaximum(360);

        layoutGuard2Setup->addWidget(spinGuard2Bearing, 3, 2, 1, 1);

        spinGuard2Width = new QSpinBox(groupGuard2Setup);
        spinGuard2Width->setObjectName(QStringLiteral("spinGuard2Width"));
        spinGuard2Width->setKeyboardTracking(false);
        spinGuard2Width->setMaximum(360);

        layoutGuard2Setup->addWidget(spinGuard2Width, 5, 2, 1, 1);


        layoutGuard2Zone->addWidget(groupGuard2Setup);


        horizontalLayout_8->addWidget(groupGuard2Zone);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        groupGuardMiscellaneous = new QGroupBox(tabGuardZone);
        groupGuardMiscellaneous->setObjectName(QStringLiteral("groupGuardMiscellaneous"));
        gridLayout_21 = new QGridLayout(groupGuardMiscellaneous);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        gridLayout_21->setVerticalSpacing(6);
        gridLayout_21->setContentsMargins(-1, 3, -1, -1);
        labelGuardSensitivity = new QLabel(groupGuardMiscellaneous);
        labelGuardSensitivity->setObjectName(QStringLiteral("labelGuardSensitivity"));

        gridLayout_21->addWidget(labelGuardSensitivity, 0, 0, 1, 1);

        editGuardSensitivity = new QLineEdit(groupGuardMiscellaneous);
        editGuardSensitivity->setObjectName(QStringLiteral("editGuardSensitivity"));
        editGuardSensitivity->setEnabled(false);
        sizePolicy5.setHeightForWidth(editGuardSensitivity->sizePolicy().hasHeightForWidth());
        editGuardSensitivity->setSizePolicy(sizePolicy5);
        editGuardSensitivity->setMinimumSize(QSize(0, 20));
        editGuardSensitivity->setMaximumSize(QSize(50, 16777215));
        editGuardSensitivity->setReadOnly(true);

        gridLayout_21->addWidget(editGuardSensitivity, 0, 1, 1, 1);

        spinGuardSensitivity = new QSpinBox(groupGuardMiscellaneous);
        spinGuardSensitivity->setObjectName(QStringLiteral("spinGuardSensitivity"));
        spinGuardSensitivity->setMinimumSize(QSize(50, 0));
        spinGuardSensitivity->setKeyboardTracking(false);
        spinGuardSensitivity->setMaximum(255);

        gridLayout_21->addWidget(spinGuardSensitivity, 0, 2, 1, 1);

        sliderGuardSensitivity = new QSlider(groupGuardMiscellaneous);
        sliderGuardSensitivity->setObjectName(QStringLiteral("sliderGuardSensitivity"));
        sliderGuardSensitivity->setMinimumSize(QSize(65, 0));
        sliderGuardSensitivity->setMaximum(255);
        sliderGuardSensitivity->setOrientation(Qt::Horizontal);

        gridLayout_21->addWidget(sliderGuardSensitivity, 0, 3, 1, 1);


        horizontalLayout_19->addWidget(groupGuardMiscellaneous);

        horizontalSpacer_151 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_151);

        horizontalLayout_19->setStretch(0, 1);
        horizontalLayout_19->setStretch(1, 2);

        verticalLayout_2->addLayout(horizontalLayout_19);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabs->addTab(tabGuardZone, QString());
        tabAdvanced = new QWidget();
        tabAdvanced->setObjectName(QStringLiteral("tabAdvanced"));
        tabAdvanced->setEnabled(false);
        verticalLayout_101 = new QVBoxLayout(tabAdvanced);
        verticalLayout_101->setSpacing(6);
        verticalLayout_101->setContentsMargins(11, 11, 11, 11);
        verticalLayout_101->setObjectName(QStringLiteral("verticalLayout_101"));
        groupAdvancedControls = new QGroupBox(tabAdvanced);
        groupAdvancedControls->setObjectName(QStringLiteral("groupAdvancedControls"));
        verticalLayout_9 = new QVBoxLayout(groupAdvancedControls);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 3, -1, -1);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(9);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupRange = new QGroupBox(groupAdvancedControls);
        groupRange->setObjectName(QStringLiteral("groupRange"));
        layoutRange = new QGridLayout(groupRange);
        layoutRange->setSpacing(6);
        layoutRange->setContentsMargins(11, 11, 11, 11);
        layoutRange->setObjectName(QStringLiteral("layoutRange"));
        layoutRange->setContentsMargins(-1, 3, -1, -1);
        labelRangeTrim = new QLabel(groupRange);
        labelRangeTrim->setObjectName(QStringLiteral("labelRangeTrim"));
        labelRangeTrim->setMinimumSize(QSize(35, 0));

        layoutRange->addWidget(labelRangeTrim, 0, 0, 1, 1);

        editRangeTrim = new QLineEdit(groupRange);
        editRangeTrim->setObjectName(QStringLiteral("editRangeTrim"));
        editRangeTrim->setEnabled(false);
        editRangeTrim->setMaximumSize(QSize(50, 16777215));
        editRangeTrim->setReadOnly(true);

        layoutRange->addWidget(editRangeTrim, 0, 1, 1, 1);

        sliderRangeTrim = new QSlider(groupRange);
        sliderRangeTrim->setObjectName(QStringLiteral("sliderRangeTrim"));
        sliderRangeTrim->setMinimum(-100);
        sliderRangeTrim->setMaximum(100);
        sliderRangeTrim->setOrientation(Qt::Horizontal);

        layoutRange->addWidget(sliderRangeTrim, 0, 3, 1, 1);

        labelRangeRate = new QLabel(groupRange);
        labelRangeRate->setObjectName(QStringLiteral("labelRangeRate"));
        labelRangeRate->setMinimumSize(QSize(35, 0));

        layoutRange->addWidget(labelRangeRate, 1, 0, 1, 1);

        editRangeRate = new QLineEdit(groupRange);
        editRangeRate->setObjectName(QStringLiteral("editRangeRate"));
        editRangeRate->setEnabled(false);
        editRangeRate->setMaximumSize(QSize(50, 16777215));
        editRangeRate->setReadOnly(true);

        layoutRange->addWidget(editRangeRate, 1, 1, 1, 1);

        sliderRangeRate = new QSlider(groupRange);
        sliderRangeRate->setObjectName(QStringLiteral("sliderRangeRate"));
        sliderRangeRate->setMinimum(1);
        sliderRangeRate->setMaximum(100);
        sliderRangeRate->setValue(10);
        sliderRangeRate->setOrientation(Qt::Horizontal);

        layoutRange->addWidget(sliderRangeRate, 1, 3, 1, 1);

        spinRangeTrim = new QDoubleSpinBox(groupRange);
        spinRangeTrim->setObjectName(QStringLiteral("spinRangeTrim"));
        spinRangeTrim->setKeyboardTracking(false);
        spinRangeTrim->setDecimals(3);
        spinRangeTrim->setMinimum(-100);
        spinRangeTrim->setMaximum(100);
        spinRangeTrim->setSingleStep(0.001);

        layoutRange->addWidget(spinRangeTrim, 0, 2, 1, 1);

        spinRangeRate = new QSpinBox(groupRange);
        spinRangeRate->setObjectName(QStringLiteral("spinRangeRate"));
        spinRangeRate->setKeyboardTracking(false);
        spinRangeRate->setMinimum(1);
        spinRangeRate->setMaximum(100);

        layoutRange->addWidget(spinRangeRate, 1, 2, 1, 1);


        verticalLayout_7->addWidget(groupRange);

        groupSea = new QGroupBox(groupAdvancedControls);
        groupSea->setObjectName(QStringLiteral("groupSea"));
        layoutSea = new QGridLayout(groupSea);
        layoutSea->setSpacing(6);
        layoutSea->setContentsMargins(11, 11, 11, 11);
        layoutSea->setObjectName(QStringLiteral("layoutSea"));
        layoutSea->setContentsMargins(-1, 3, -1, -1);
        labelSeaTrim = new QLabel(groupSea);
        labelSeaTrim->setObjectName(QStringLiteral("labelSeaTrim"));
        labelSeaTrim->setMinimumSize(QSize(35, 0));

        layoutSea->addWidget(labelSeaTrim, 0, 0, 1, 1);

        editSeaTrim = new QLineEdit(groupSea);
        editSeaTrim->setObjectName(QStringLiteral("editSeaTrim"));
        editSeaTrim->setEnabled(false);
        editSeaTrim->setMaximumSize(QSize(50, 16777215));
        editSeaTrim->setReadOnly(true);

        layoutSea->addWidget(editSeaTrim, 0, 1, 1, 1);

        sliderSeaTrim = new QSlider(groupSea);
        sliderSeaTrim->setObjectName(QStringLiteral("sliderSeaTrim"));
        sliderSeaTrim->setMinimum(-100);
        sliderSeaTrim->setMaximum(100);
        sliderSeaTrim->setOrientation(Qt::Horizontal);

        layoutSea->addWidget(sliderSeaTrim, 0, 3, 1, 1);

        labelSeaRate1 = new QLabel(groupSea);
        labelSeaRate1->setObjectName(QStringLiteral("labelSeaRate1"));
        labelSeaRate1->setMinimumSize(QSize(35, 0));

        layoutSea->addWidget(labelSeaRate1, 1, 0, 1, 1);

        editSeaRate1 = new QLineEdit(groupSea);
        editSeaRate1->setObjectName(QStringLiteral("editSeaRate1"));
        editSeaRate1->setEnabled(false);
        editSeaRate1->setMaximumSize(QSize(50, 16777215));
        editSeaRate1->setReadOnly(true);

        layoutSea->addWidget(editSeaRate1, 1, 1, 1, 1);

        sliderSeaRate1 = new QSlider(groupSea);
        sliderSeaRate1->setObjectName(QStringLiteral("sliderSeaRate1"));
        sliderSeaRate1->setMaximum(100);
        sliderSeaRate1->setValue(10);
        sliderSeaRate1->setOrientation(Qt::Horizontal);

        layoutSea->addWidget(sliderSeaRate1, 1, 3, 1, 1);

        labelSeaRate2 = new QLabel(groupSea);
        labelSeaRate2->setObjectName(QStringLiteral("labelSeaRate2"));
        labelSeaRate2->setMinimumSize(QSize(35, 0));

        layoutSea->addWidget(labelSeaRate2, 2, 0, 1, 1);

        editSeaRate2 = new QLineEdit(groupSea);
        editSeaRate2->setObjectName(QStringLiteral("editSeaRate2"));
        editSeaRate2->setEnabled(false);
        editSeaRate2->setMaximumSize(QSize(50, 16777215));
        editSeaRate2->setReadOnly(true);

        layoutSea->addWidget(editSeaRate2, 2, 1, 1, 1);

        sliderSeaRate2 = new QSlider(groupSea);
        sliderSeaRate2->setObjectName(QStringLiteral("sliderSeaRate2"));
        sliderSeaRate2->setMaximum(100);
        sliderSeaRate2->setValue(10);
        sliderSeaRate2->setOrientation(Qt::Horizontal);

        layoutSea->addWidget(sliderSeaRate2, 2, 3, 1, 1);

        spinSeaTrim = new QDoubleSpinBox(groupSea);
        spinSeaTrim->setObjectName(QStringLiteral("spinSeaTrim"));
        spinSeaTrim->setKeyboardTracking(false);
        spinSeaTrim->setDecimals(3);
        spinSeaTrim->setMinimum(-100);
        spinSeaTrim->setMaximum(100);
        spinSeaTrim->setSingleStep(0.001);

        layoutSea->addWidget(spinSeaTrim, 0, 2, 1, 1);

        spinSeaRate1 = new QSpinBox(groupSea);
        spinSeaRate1->setObjectName(QStringLiteral("spinSeaRate1"));
        spinSeaRate1->setKeyboardTracking(false);
        spinSeaRate1->setMinimum(1);
        spinSeaRate1->setMaximum(100);
        spinSeaRate1->setValue(10);

        layoutSea->addWidget(spinSeaRate1, 1, 2, 1, 1);

        spinSeaRate2 = new QSpinBox(groupSea);
        spinSeaRate2->setObjectName(QStringLiteral("spinSeaRate2"));
        spinSeaRate2->setKeyboardTracking(false);
        spinSeaRate2->setMinimum(1);
        spinSeaRate2->setMaximum(100);
        spinSeaRate2->setValue(10);

        layoutSea->addWidget(spinSeaRate2, 2, 2, 1, 1);


        verticalLayout_7->addWidget(groupSea);

        groupRain = new QGroupBox(groupAdvancedControls);
        groupRain->setObjectName(QStringLiteral("groupRain"));
        layoutRain = new QGridLayout(groupRain);
        layoutRain->setSpacing(6);
        layoutRain->setContentsMargins(11, 11, 11, 11);
        layoutRain->setObjectName(QStringLiteral("layoutRain"));
        layoutRain->setContentsMargins(-1, 3, -1, -1);
        labelRainTrim = new QLabel(groupRain);
        labelRainTrim->setObjectName(QStringLiteral("labelRainTrim"));
        labelRainTrim->setMinimumSize(QSize(35, 0));

        layoutRain->addWidget(labelRainTrim, 0, 0, 1, 1);

        editRainTrim = new QLineEdit(groupRain);
        editRainTrim->setObjectName(QStringLiteral("editRainTrim"));
        editRainTrim->setEnabled(false);
        editRainTrim->setMaximumSize(QSize(50, 16777215));
        editRainTrim->setReadOnly(true);

        layoutRain->addWidget(editRainTrim, 0, 1, 1, 1);

        sliderRainTrim = new QSlider(groupRain);
        sliderRainTrim->setObjectName(QStringLiteral("sliderRainTrim"));
        sliderRainTrim->setMinimum(-100);
        sliderRainTrim->setMaximum(100);
        sliderRainTrim->setOrientation(Qt::Horizontal);

        layoutRain->addWidget(sliderRainTrim, 0, 3, 1, 1);

        spinRainTrim = new QDoubleSpinBox(groupRain);
        spinRainTrim->setObjectName(QStringLiteral("spinRainTrim"));
        spinRainTrim->setKeyboardTracking(false);
        spinRainTrim->setDecimals(3);
        spinRainTrim->setMinimum(-100);
        spinRainTrim->setMaximum(100);
        spinRainTrim->setSingleStep(0.001);

        layoutRain->addWidget(spinRainTrim, 0, 2, 1, 1);

        editRainRate = new QLineEdit(groupRain);
        editRainRate->setObjectName(QStringLiteral("editRainRate"));
        editRainRate->setEnabled(false);
        editRainRate->setMaximumSize(QSize(50, 16777215));
        editRainRate->setReadOnly(true);

        layoutRain->addWidget(editRainRate, 1, 1, 1, 1);

        sliderRainRate = new QSlider(groupRain);
        sliderRainRate->setObjectName(QStringLiteral("sliderRainRate"));
        sliderRainRate->setMinimum(1);
        sliderRainRate->setMaximum(100);
        sliderRainRate->setValue(10);
        sliderRainRate->setOrientation(Qt::Horizontal);

        layoutRain->addWidget(sliderRainRate, 1, 3, 1, 1);

        labelRainRate = new QLabel(groupRain);
        labelRainRate->setObjectName(QStringLiteral("labelRainRate"));
        labelRainRate->setMinimumSize(QSize(35, 0));

        layoutRain->addWidget(labelRainRate, 1, 0, 1, 1);

        spinRainRate = new QSpinBox(groupRain);
        spinRainRate->setObjectName(QStringLiteral("spinRainRate"));
        spinRainRate->setKeyboardTracking(false);
        spinRainRate->setMinimum(1);
        spinRainRate->setMaximum(100);
        spinRainRate->setValue(10);

        layoutRain->addWidget(spinRainRate, 1, 2, 1, 1);


        verticalLayout_7->addWidget(groupRain);


        horizontalLayout_10->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        groupMiscellaneous = new QGroupBox(groupAdvancedControls);
        groupMiscellaneous->setObjectName(QStringLiteral("groupMiscellaneous"));
        gridLayout_4 = new QGridLayout(groupMiscellaneous);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelUserMinSNR = new QLabel(groupMiscellaneous);
        labelUserMinSNR->setObjectName(QStringLiteral("labelUserMinSNR"));

        gridLayout_4->addWidget(labelUserMinSNR, 0, 0, 1, 1);

        editUserMinSNR = new QLineEdit(groupMiscellaneous);
        editUserMinSNR->setObjectName(QStringLiteral("editUserMinSNR"));
        editUserMinSNR->setEnabled(false);
        editUserMinSNR->setMaximumSize(QSize(50, 16777215));
        editUserMinSNR->setReadOnly(true);

        gridLayout_4->addWidget(editUserMinSNR, 0, 1, 1, 1);

        spinUserMinSNR = new QDoubleSpinBox(groupMiscellaneous);
        spinUserMinSNR->setObjectName(QStringLiteral("spinUserMinSNR"));
        spinUserMinSNR->setKeyboardTracking(false);
        spinUserMinSNR->setDecimals(3);
        spinUserMinSNR->setMinimum(-100);
        spinUserMinSNR->setMaximum(100);
        spinUserMinSNR->setSingleStep(0.001);

        gridLayout_4->addWidget(spinUserMinSNR, 0, 2, 1, 1);

        sliderUserMinSNR = new QSlider(groupMiscellaneous);
        sliderUserMinSNR->setObjectName(QStringLiteral("sliderUserMinSNR"));
        sliderUserMinSNR->setMinimum(-100);
        sliderUserMinSNR->setMaximum(100);
        sliderUserMinSNR->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(sliderUserMinSNR, 0, 3, 1, 1);

        labelVideoAperture = new QLabel(groupMiscellaneous);
        labelVideoAperture->setObjectName(QStringLiteral("labelVideoAperture"));

        gridLayout_4->addWidget(labelVideoAperture, 1, 0, 1, 1);

        editVideoAperture = new QLineEdit(groupMiscellaneous);
        editVideoAperture->setObjectName(QStringLiteral("editVideoAperture"));
        editVideoAperture->setEnabled(false);
        editVideoAperture->setMaximumSize(QSize(50, 16777215));
        editVideoAperture->setReadOnly(true);

        gridLayout_4->addWidget(editVideoAperture, 1, 1, 1, 1);

        spinVideoAperture = new QDoubleSpinBox(groupMiscellaneous);
        spinVideoAperture->setObjectName(QStringLiteral("spinVideoAperture"));
        spinVideoAperture->setKeyboardTracking(false);
        spinVideoAperture->setDecimals(3);
        spinVideoAperture->setMaximum(100);
        spinVideoAperture->setSingleStep(0.001);

        gridLayout_4->addWidget(spinVideoAperture, 1, 2, 1, 1);

        sliderVideoAperture = new QSlider(groupMiscellaneous);
        sliderVideoAperture->setObjectName(QStringLiteral("sliderVideoAperture"));
        sliderVideoAperture->setMaximum(100);
        sliderVideoAperture->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(sliderVideoAperture, 1, 3, 1, 1);

        labelMainBangSuppression = new QLabel(groupMiscellaneous);
        labelMainBangSuppression->setObjectName(QStringLiteral("labelMainBangSuppression"));

        gridLayout_4->addWidget(labelMainBangSuppression, 2, 0, 1, 1);

        checkMainBangSuppression = new QCheckBox(groupMiscellaneous);
        checkMainBangSuppression->setObjectName(QStringLiteral("checkMainBangSuppression"));
        checkMainBangSuppression->setLayoutDirection(Qt::LeftToRight);

        gridLayout_4->addWidget(checkMainBangSuppression, 2, 1, 1, 1);


        verticalLayout_8->addWidget(groupMiscellaneous);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);


        horizontalLayout_10->addLayout(verticalLayout_8);


        verticalLayout_9->addLayout(horizontalLayout_10);


        verticalLayout_101->addWidget(groupAdvancedControls);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_101->addItem(verticalSpacer);

        tabs->addTab(tabAdvanced, QString());
        tabBScan = new QWidget();
        tabBScan->setObjectName(QStringLiteral("tabBScan"));
        tabBScan->setEnabled(false);
        verticalLayout_tabBscan = new QVBoxLayout(tabBScan);
        verticalLayout_tabBscan->setSpacing(6);
        verticalLayout_tabBscan->setContentsMargins(11, 11, 11, 11);
        verticalLayout_tabBscan->setObjectName(QStringLiteral("verticalLayout_tabBscan"));
        tabs->addTab(tabBScan, QString());
        tabPPI = new QWidget();
        tabPPI->setObjectName(QStringLiteral("tabPPI"));
        tabPPI->setEnabled(false);
        verticalLayout_tabPPI = new QVBoxLayout(tabPPI);
        verticalLayout_tabPPI->setSpacing(6);
        verticalLayout_tabPPI->setContentsMargins(11, 11, 11, 11);
        verticalLayout_tabPPI->setObjectName(QStringLiteral("verticalLayout_tabPPI"));
        tabs->addTab(tabPPI, QString());
        tabTargets = new QWidget();
        tabTargets->setObjectName(QStringLiteral("tabTargets"));
        tabTargets->setEnabled(false);
        verticalLayout_3 = new QVBoxLayout(tabTargets);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_61 = new QHBoxLayout();
        horizontalLayout_61->setSpacing(0);
        horizontalLayout_61->setObjectName(QStringLiteral("horizontalLayout_61"));
        groupTargetsQuery = new QGroupBox(tabTargets);
        groupTargetsQuery->setObjectName(QStringLiteral("groupTargetsQuery"));
        sizePolicy3.setHeightForWidth(groupTargetsQuery->sizePolicy().hasHeightForWidth());
        groupTargetsQuery->setSizePolicy(sizePolicy3);
        horizontalLayout_51 = new QHBoxLayout(groupTargetsQuery);
        horizontalLayout_51->setSpacing(2);
        horizontalLayout_51->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_51->setObjectName(QStringLiteral("horizontalLayout_51"));
        horizontalLayout_51->setContentsMargins(-1, 3, -1, 6);
        pushTargetsQueryAll = new QPushButton(groupTargetsQuery);
        pushTargetsQueryAll->setObjectName(QStringLiteral("pushTargetsQueryAll"));
        sizePolicy1.setHeightForWidth(pushTargetsQueryAll->sizePolicy().hasHeightForWidth());
        pushTargetsQueryAll->setSizePolicy(sizePolicy1);
        pushTargetsQueryAll->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_51->addWidget(pushTargetsQueryAll);

        pushTargetsQuerySetup = new QPushButton(groupTargetsQuery);
        pushTargetsQuerySetup->setObjectName(QStringLiteral("pushTargetsQuerySetup"));
        sizePolicy1.setHeightForWidth(pushTargetsQuerySetup->sizePolicy().hasHeightForWidth());
        pushTargetsQuerySetup->setSizePolicy(sizePolicy1);
        pushTargetsQuerySetup->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_51->addWidget(pushTargetsQuerySetup);

        pushTargetsQueryTargets = new QPushButton(groupTargetsQuery);
        pushTargetsQueryTargets->setObjectName(QStringLiteral("pushTargetsQueryTargets"));
        sizePolicy1.setHeightForWidth(pushTargetsQueryTargets->sizePolicy().hasHeightForWidth());
        pushTargetsQueryTargets->setSizePolicy(sizePolicy1);
        pushTargetsQueryTargets->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_51->addWidget(pushTargetsQueryTargets);


        horizontalLayout_61->addWidget(groupTargetsQuery);

        AlaramSetupGroup = new QGroupBox(tabTargets);
        AlaramSetupGroup->setObjectName(QStringLiteral("AlaramSetupGroup"));
        sizePolicy9.setHeightForWidth(AlaramSetupGroup->sizePolicy().hasHeightForWidth());
        AlaramSetupGroup->setSizePolicy(sizePolicy9);
        horizontalLayout_41 = new QHBoxLayout(AlaramSetupGroup);
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        horizontalLayout_41->setContentsMargins(-1, 3, -1, 6);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelDangerZoneDist = new QLabel(AlaramSetupGroup);
        labelDangerZoneDist->setObjectName(QStringLiteral("labelDangerZoneDist"));
        sizePolicy9.setHeightForWidth(labelDangerZoneDist->sizePolicy().hasHeightForWidth());
        labelDangerZoneDist->setSizePolicy(sizePolicy9);
        labelDangerZoneDist->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_2->addWidget(labelDangerZoneDist);

        editDangerZoneDist = new QLineEdit(AlaramSetupGroup);
        editDangerZoneDist->setObjectName(QStringLiteral("editDangerZoneDist"));
        editDangerZoneDist->setEnabled(false);
        editDangerZoneDist->setMaximumSize(QSize(51, 16777215));
        editDangerZoneDist->setReadOnly(true);

        horizontalLayout_2->addWidget(editDangerZoneDist);

        spinDangerZoneDist = new QSpinBox(AlaramSetupGroup);
        spinDangerZoneDist->setObjectName(QStringLiteral("spinDangerZoneDist"));
        spinDangerZoneDist->setMinimumSize(QSize(75, 0));
        spinDangerZoneDist->setKeyboardTracking(false);
        spinDangerZoneDist->setMaximum(10000);

        horizontalLayout_2->addWidget(spinDangerZoneDist);

        sliderDangerZoneDist = new QSlider(AlaramSetupGroup);
        sliderDangerZoneDist->setObjectName(QStringLiteral("sliderDangerZoneDist"));
        sliderDangerZoneDist->setMaximumSize(QSize(130, 16777215));
        sliderDangerZoneDist->setMaximum(10000);
        sliderDangerZoneDist->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderDangerZoneDist);


        horizontalLayout_41->addLayout(horizontalLayout_2);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(5);
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        labelDangerZoneTime = new QLabel(AlaramSetupGroup);
        labelDangerZoneTime->setObjectName(QStringLiteral("labelDangerZoneTime"));
        sizePolicy9.setHeightForWidth(labelDangerZoneTime->sizePolicy().hasHeightForWidth());
        labelDangerZoneTime->setSizePolicy(sizePolicy9);
        labelDangerZoneTime->setMaximumSize(QSize(16777215, 21));

        horizontalLayout_31->addWidget(labelDangerZoneTime);

        editDangerZoneTime = new QLineEdit(AlaramSetupGroup);
        editDangerZoneTime->setObjectName(QStringLiteral("editDangerZoneTime"));
        editDangerZoneTime->setEnabled(false);
        editDangerZoneTime->setMaximumSize(QSize(51, 16777215));
        editDangerZoneTime->setReadOnly(true);

        horizontalLayout_31->addWidget(editDangerZoneTime);

        spinDangerZoneTime = new QSpinBox(AlaramSetupGroup);
        spinDangerZoneTime->setObjectName(QStringLiteral("spinDangerZoneTime"));
        spinDangerZoneTime->setMinimumSize(QSize(80, 0));
        spinDangerZoneTime->setKeyboardTracking(false);
        spinDangerZoneTime->setMaximum(3600);

        horizontalLayout_31->addWidget(spinDangerZoneTime);

        sliderDangerZoneTime = new QSlider(AlaramSetupGroup);
        sliderDangerZoneTime->setObjectName(QStringLiteral("sliderDangerZoneTime"));
        sliderDangerZoneTime->setMaximumSize(QSize(130, 16777215));
        sliderDangerZoneTime->setMaximum(3600);
        sliderDangerZoneTime->setOrientation(Qt::Horizontal);

        horizontalLayout_31->addWidget(sliderDangerZoneTime);


        horizontalLayout_41->addLayout(horizontalLayout_31);


        horizontalLayout_61->addWidget(AlaramSetupGroup);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_61->addItem(horizontalSpacer_2);

        groupTargetsCancel = new QGroupBox(tabTargets);
        groupTargetsCancel->setObjectName(QStringLiteral("groupTargetsCancel"));
        horizontalLayout_71 = new QHBoxLayout(groupTargetsCancel);
        horizontalLayout_71->setSpacing(2);
        horizontalLayout_71->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_71->setObjectName(QStringLiteral("horizontalLayout_71"));
        horizontalLayout_71->setContentsMargins(-1, 3, -1, 6);
        pushCancelAll = new QPushButton(groupTargetsCancel);
        pushCancelAll->setObjectName(QStringLiteral("pushCancelAll"));
        pushCancelAll->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_71->addWidget(pushCancelAll);

        pushCancelSelection = new QPushButton(groupTargetsCancel);
        pushCancelSelection->setObjectName(QStringLiteral("pushCancelSelection"));
        pushCancelSelection->setEnabled(false);
        pushCancelSelection->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_71->addWidget(pushCancelSelection);

        pushCancelDisplay = new QPushButton(groupTargetsCancel);
        pushCancelDisplay->setObjectName(QStringLiteral("pushCancelDisplay"));
        pushCancelDisplay->setMaximumSize(QSize(57, 16777215));

        horizontalLayout_71->addWidget(pushCancelDisplay);


        horizontalLayout_61->addWidget(groupTargetsCancel);


        verticalLayout_3->addLayout(horizontalLayout_61);

        tableTargets = new QTableWidget(tabTargets);
        tableTargets->setObjectName(QStringLiteral("tableTargets"));

        verticalLayout_3->addWidget(tableTargets);

        tabs->addTab(tabTargets, QString());
        tabNewFunction = new QWidget();
        tabNewFunction->setObjectName(QStringLiteral("tabNewFunction"));
        pushButton = new QPushButton(tabNewFunction);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 190, 89, 25));
        tabs->addTab(tabNewFunction, QString());

        verticalLayout_5->addWidget(tabs);

        GUIDemoClass->setCentralWidget(centralWidget);

        retranslateUi(GUIDemoClass);

        tabs->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(GUIDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *GUIDemoClass)
    {
        GUIDemoClass->setWindowTitle(QApplication::translate("GUIDemoClass", "Navico Radar SDK GUI-Demo", Q_NULLPTR));
        groupScanner->setTitle(QApplication::translate("GUIDemoClass", "Scanner", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushScannerQuery->setToolTip(QApplication::translate("GUIDemoClass", "Performs a query all", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushScannerQuery->setText(QApplication::translate("GUIDemoClass", "Query", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkScannerPower->setToolTip(QApplication::translate("GUIDemoClass", "Power scanner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkScannerPower->setText(QApplication::translate("GUIDemoClass", "Scanner Power", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkScannerTransmit->setToolTip(QApplication::translate("GUIDemoClass", "Put the scanner in transmit mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkScannerTransmit->setText(QApplication::translate("GUIDemoClass", "Transmit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkScannerKickRadar->setToolTip(QApplication::translate("GUIDemoClass", "Enable transmission of client watchdog kicks", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkScannerKickRadar->setText(QApplication::translate("GUIDemoClass", "Kick Radar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editScannerRange->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        labelScannerType->setText(QApplication::translate("GUIDemoClass", "Type", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editScannerType->setToolTip(QApplication::translate("GUIDemoClass", "Scanner model", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelScannerState->setText(QApplication::translate("GUIDemoClass", "State", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editScannerState->setToolTip(QApplication::translate("GUIDemoClass", "State of the scanner", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        editScannerTimeout->setToolTip(QApplication::translate("GUIDemoClass", "Warming up count down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelScannerError->setText(QApplication::translate("GUIDemoClass", "Error", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editScannerError->setToolTip(QApplication::translate("GUIDemoClass", "Scanner model", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushScannerError->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushScannerError->setText(QApplication::translate("GUIDemoClass", "-", Q_NULLPTR));
        labelScannerRange->setText(QApplication::translate("GUIDemoClass", "Range", Q_NULLPTR));
        spinScannerRange->setSuffix(QApplication::translate("GUIDemoClass", " m", Q_NULLPTR));
        groupInformation->setTitle(QApplication::translate("GUIDemoClass", "Information", Q_NULLPTR));
        labelGWCompiled_->setText(QApplication::translate("GUIDemoClass", "GW Compiled", Q_NULLPTR));
        label_6->setText(QApplication::translate("GUIDemoClass", "Driver Version", Q_NULLPTR));
        labelRegVersion_->setText(QApplication::translate("GUIDemoClass", "Reg Version", Q_NULLPTR));
        label_5->setText(QApplication::translate("GUIDemoClass", "SW Build Date", Q_NULLPTR));
        label_8->setText(QApplication::translate("GUIDemoClass", "SW Version", Q_NULLPTR));
        label->setText(QApplication::translate("GUIDemoClass", "Cycle Count", Q_NULLPTR));
        labelMaxRange_->setText(QApplication::translate("GUIDemoClass", "Max Range", Q_NULLPTR));
        labelOperationTime_->setText(QApplication::translate("GUIDemoClass", "Operation Time", Q_NULLPTR));
        labelGWVersion_->setText(QApplication::translate("GUIDemoClass", "GW Version", Q_NULLPTR));
        label_7->setText(QApplication::translate("GUIDemoClass", "Scanner", Q_NULLPTR));
        label_4->setText(QApplication::translate("GUIDemoClass", "SW Version", Q_NULLPTR));
        labelSDKVersion_->setText(QApplication::translate("GUIDemoClass", "SDK Version", Q_NULLPTR));
        label_3->setText(QApplication::translate("GUIDemoClass", "NavRadar", Q_NULLPTR));
        label_14->setText(QApplication::translate("GUIDemoClass", "GateWare", Q_NULLPTR));
        groupMultiRadar->setTitle(QApplication::translate("GUIDemoClass", "Multi-Radar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushMultiRadarConnect->setToolTip(QApplication::translate("GUIDemoClass", "Connect to radar", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushMultiRadarConnect->setText(QApplication::translate("GUIDemoClass", "Connect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushMultiRadarQuery->setToolTip(QApplication::translate("GUIDemoClass", "Query the network for all radars and their supported services", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushMultiRadarQuery->setText(QApplication::translate("GUIDemoClass", "Query", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushMultiRadarClear->setToolTip(QApplication::translate("GUIDemoClass", "Clear the radar list, you will need to re-Query to restore the list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushMultiRadarClear->setText(QApplication::translate("GUIDemoClass", "Clear", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushMultiRadarReset->setToolTip(QApplication::translate("GUIDemoClass", "Force all radars on the network to renegotiate their device IDs the next time they are restarted/reconnected", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushMultiRadarReset->setText(QApplication::translate("GUIDemoClass", "Reset", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_22->setToolTip(QApplication::translate("GUIDemoClass", "Select the Radar to connect too (you must disconnect & reconnect before a change will be used)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_22->setText(QApplication::translate("GUIDemoClass", "Select Radar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        _comboMultiRadarSelect->setToolTip(QApplication::translate("GUIDemoClass", "Select the Radar to connect too (you must disconnect & reconnect before a change will be used)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushMultiRadarGetLockID->setToolTip(QApplication::translate("GUIDemoClass", "Show the lock ID of the selected radar", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushMultiRadarGetLockID->setText(QApplication::translate("GUIDemoClass", "Lock ID", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushMultiRadarUnlock->setToolTip(QApplication::translate("GUIDemoClass", "Attempt to unlock the selected radar", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushMultiRadarUnlock->setText(QApplication::translate("GUIDemoClass", "Unlock", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushMultiRadarUnlockAll->setToolTip(QApplication::translate("GUIDemoClass", "Atempt to unlock all the radars on the network", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushMultiRadarUnlockAll->setText(QApplication::translate("GUIDemoClass", "All", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushMultiRadarFlush->setToolTip(QApplication::translate("GUIDemoClass", "Flush/delete all cached unlock keys", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushMultiRadarFlush->setText(QApplication::translate("GUIDemoClass", "Flush", Q_NULLPTR));
        groupQuery->setTitle(QApplication::translate("GUIDemoClass", "Query", Q_NULLPTR));
        pushQueryAll->setText(QApplication::translate("GUIDemoClass", "All", Q_NULLPTR));
        pushQueryMode->setText(QApplication::translate("GUIDemoClass", "Mode", Q_NULLPTR));
        pushQuerySetup->setText(QApplication::translate("GUIDemoClass", "Setup", Q_NULLPTR));
        pushQueryProperties->setText(QApplication::translate("GUIDemoClass", "Properties", Q_NULLPTR));
        pushQueryConfiguration->setText(QApplication::translate("GUIDemoClass", " Configuration ", Q_NULLPTR));
        pushQueryAdvanced->setText(QApplication::translate("GUIDemoClass", "Advanced", Q_NULLPTR));
        pushQueryFeatures->setText(QApplication::translate("GUIDemoClass", "Features", Q_NULLPTR));
        groupUseMode->setTitle(QApplication::translate("GUIDemoClass", "Use Mode", Q_NULLPTR));
        groupStandardMiscellaneous->setTitle(QApplication::translate("GUIDemoClass", "Miscelaneous", Q_NULLPTR));
        labelIRLevel->setText(QApplication::translate("GUIDemoClass", "IR Level", Q_NULLPTR));
        labelTargetBoost->setText(QApplication::translate("GUIDemoClass", "Target Boost", Q_NULLPTR));
        labelRPM->setText(QApplication::translate("GUIDemoClass", "RPM", Q_NULLPTR));
        labelBeamSharpening->setText(QApplication::translate("GUIDemoClass", "Beam Sharp", Q_NULLPTR));
        comboFastScan->clear();
        comboFastScan->insertItems(0, QStringList()
         << QApplication::translate("GUIDemoClass", "Off", Q_NULLPTR)
         << QApplication::translate("GUIDemoClass", "36 rpm", Q_NULLPTR)
         << QApplication::translate("GUIDemoClass", "48 rpm", Q_NULLPTR)
        );
        labelFastScan->setText(QApplication::translate("GUIDemoClass", "Fast Scan", Q_NULLPTR));
        labelLocalIR->setText(QApplication::translate("GUIDemoClass", "Local IR", Q_NULLPTR));
        labeLEDs->setText(QApplication::translate("GUIDemoClass", "LEDs", Q_NULLPTR));
        labelTargetStretch->setText(QApplication::translate("GUIDemoClass", "Target Stretch", Q_NULLPTR));
        labelTargetStretch_2->setText(QApplication::translate("GUIDemoClass", "(legacy)", Q_NULLPTR));
        groupPulse->setTitle(QApplication::translate("GUIDemoClass", "Pulse", Q_NULLPTR));
        labelAutoTune->setText(QApplication::translate("GUIDemoClass", "Auto Tune", Q_NULLPTR));
        labelPulseWidth->setText(QApplication::translate("GUIDemoClass", "Pulse Width", Q_NULLPTR));
        labelCoarseTune->setText(QApplication::translate("GUIDemoClass", "Coarse Tune", Q_NULLPTR));
        labelFineTune->setText(QApplication::translate("GUIDemoClass", "Fine Tune", Q_NULLPTR));
        groupStandardSensitivity->setTitle(QApplication::translate("GUIDemoClass", "Sensitivity", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkSeaFlags->setToolTip(QApplication::translate("GUIDemoClass", "when checked update all values together, otherwise just update the individual one that has changed", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkSeaFlags->setText(QApplication::translate("GUIDemoClass", "combined", Q_NULLPTR));
        labelSeaAuto->setText(QApplication::translate("GUIDemoClass", "auto offset", Q_NULLPTR));
        comboSideLobe->clear();
        comboSideLobe->insertItems(0, QStringList()
         << QApplication::translate("GUIDemoClass", "Manual", Q_NULLPTR)
         << QApplication::translate("GUIDemoClass", "Auto", Q_NULLPTR)
        );
        labelNoiseReject->setText(QApplication::translate("GUIDemoClass", "Noise Reject", Q_NULLPTR));
        labelSideLobe->setText(QApplication::translate("GUIDemoClass", "Side Lobe", Q_NULLPTR));
        labelCurveType->setText(QApplication::translate("GUIDemoClass", "Curve Type", Q_NULLPTR));
        comboSTCCurveType->clear();
        comboSTCCurveType->insertItems(0, QStringList()
         << QApplication::translate("GUIDemoClass", "Calm", Q_NULLPTR)
         << QApplication::translate("GUIDemoClass", "Moderate", Q_NULLPTR)
         << QApplication::translate("GUIDemoClass", "Rough", Q_NULLPTR)
        );
        labelGain->setText(QApplication::translate("GUIDemoClass", "Gain", Q_NULLPTR));
        comboGain->clear();
        comboGain->insertItems(0, QStringList()
         << QApplication::translate("GUIDemoClass", "Manual", Q_NULLPTR)
         << QApplication::translate("GUIDemoClass", "Auto", Q_NULLPTR)
        );
        labelRain->setText(QApplication::translate("GUIDemoClass", "Rain", Q_NULLPTR));
        labelFTC->setText(QApplication::translate("GUIDemoClass", "FTC", Q_NULLPTR));
        labelSeaClutter->setText(QApplication::translate("GUIDemoClass", "Sea (Legacy)", Q_NULLPTR));
        comboSeaClutter->clear();
        comboSeaClutter->insertItems(0, QStringList()
         << QApplication::translate("GUIDemoClass", "Manual", Q_NULLPTR)
         << QApplication::translate("GUIDemoClass", "Harbour", Q_NULLPTR)
         << QApplication::translate("GUIDemoClass", "Offshore", Q_NULLPTR)
        );
        labelSea->setText(QApplication::translate("GUIDemoClass", "Sea", Q_NULLPTR));
        comboSea->clear();
        comboSea->insertItems(0, QStringList()
         << QApplication::translate("GUIDemoClass", "Manual", Q_NULLPTR)
         << QApplication::translate("GUIDemoClass", "Auto", Q_NULLPTR)
        );
        groupStandardTimedTransmit->setTitle(QApplication::translate("GUIDemoClass", "Timed Transmit", Q_NULLPTR));
        labelModeEnabled->setText(QApplication::translate("GUIDemoClass", "Mode Enabled", Q_NULLPTR));
        labelTransmitPeriod->setText(QApplication::translate("GUIDemoClass", "Transmit Period", Q_NULLPTR));
        labelStandbyPeriod->setText(QApplication::translate("GUIDemoClass", "Standby Period", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tabImage), QApplication::translate("GUIDemoClass", "Image", Q_NULLPTR));
        groupSector0->setTitle(QApplication::translate("GUIDemoClass", "Sector 0", Q_NULLPTR));
        spinSector0End->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        labelSector0Start->setText(QApplication::translate("GUIDemoClass", "Start", Q_NULLPTR));
        spinSector0Start->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        labelSector0End->setText(QApplication::translate("GUIDemoClass", "End", Q_NULLPTR));
        checkSector0Enabled->setText(QApplication::translate("GUIDemoClass", "Enabled", Q_NULLPTR));
        groupSector1->setTitle(QApplication::translate("GUIDemoClass", "Sector 1", Q_NULLPTR));
        spinSector1Start->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        labelSector1Start->setText(QApplication::translate("GUIDemoClass", "Start", Q_NULLPTR));
        spinSector1End->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        labelSector1End->setText(QApplication::translate("GUIDemoClass", "End", Q_NULLPTR));
        checkSector1Enabled->setText(QApplication::translate("GUIDemoClass", "Enabled", Q_NULLPTR));
        groupSector2->setTitle(QApplication::translate("GUIDemoClass", "Sector 2", Q_NULLPTR));
        labelSector2Start->setText(QApplication::translate("GUIDemoClass", "Start", Q_NULLPTR));
        spinSector2Start->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        labelSector2End->setText(QApplication::translate("GUIDemoClass", "End", Q_NULLPTR));
        spinSector2End->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        checkSector2Enabled->setText(QApplication::translate("GUIDemoClass", "Enabled", Q_NULLPTR));
        groupSector4->setTitle(QApplication::translate("GUIDemoClass", "Sector 4", Q_NULLPTR));
        spinSector4Start->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        labelSector4Start->setText(QApplication::translate("GUIDemoClass", "Start", Q_NULLPTR));
        spinSector4End->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        labelSector4End->setText(QApplication::translate("GUIDemoClass", "End", Q_NULLPTR));
        checkSector4Enabled->setText(QApplication::translate("GUIDemoClass", "Enabled", Q_NULLPTR));
        groupSector5->setTitle(QApplication::translate("GUIDemoClass", "Sector 5", Q_NULLPTR));
        labelSector5Start->setText(QApplication::translate("GUIDemoClass", "Start", Q_NULLPTR));
        spinSector5Start->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        labelSector5End->setText(QApplication::translate("GUIDemoClass", "End", Q_NULLPTR));
        spinSector5End->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        checkSector5Enabled->setText(QApplication::translate("GUIDemoClass", "Enabled", Q_NULLPTR));
        groupSector3->setTitle(QApplication::translate("GUIDemoClass", "Sector 3", Q_NULLPTR));
        spinSector3End->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        labelSector3Start->setText(QApplication::translate("GUIDemoClass", "Start", Q_NULLPTR));
        spinSector3Start->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        labelSector3End->setText(QApplication::translate("GUIDemoClass", "End", Q_NULLPTR));
        checkSector3Enabled->setText(QApplication::translate("GUIDemoClass", "Enabled", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tabSectorBlanking), QApplication::translate("GUIDemoClass", "Sector blanking", Q_NULLPTR));
        groupImageConfiguration->setTitle(QApplication::translate("GUIDemoClass", "Configuration", Q_NULLPTR));
        spinAntennaXOffset->setSuffix(QApplication::translate("GUIDemoClass", " m", Q_NULLPTR));
        labelParkPosition->setText(QApplication::translate("GUIDemoClass", "Park Position", Q_NULLPTR));
        spinParkPosition->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        labelAntennaHeight->setText(QApplication::translate("GUIDemoClass", "Antenna Height", Q_NULLPTR));
        labelZeroRangeOffset->setText(QApplication::translate("GUIDemoClass", "Zero Range Offset", Q_NULLPTR));
        labelZeroBearingOffset->setText(QApplication::translate("GUIDemoClass", "Zero Bearing Offset", Q_NULLPTR));
        spinZeroBearing->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        spinAntennaHeight->setSuffix(QApplication::translate("GUIDemoClass", " m", Q_NULLPTR));
        spinZeroRange->setSuffix(QString());
        labelAntennaXOffset->setText(QApplication::translate("GUIDemoClass", "Antenna X Offset", Q_NULLPTR));
        labelAntennaYOffset->setText(QApplication::translate("GUIDemoClass", "Antenna Y Offset", Q_NULLPTR));
        spinAntennaYOffset->setSuffix(QApplication::translate("GUIDemoClass", " m", Q_NULLPTR));
        pushFactoryDefaults->setText(QApplication::translate("GUIDemoClass", "  Reset to Factory Defaults  ", Q_NULLPTR));
        groupAntennaType->setTitle(QApplication::translate("GUIDemoClass", "Antenna", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tabInstallation), QApplication::translate("GUIDemoClass", "Installation", Q_NULLPTR));
        groupFeaturesMisc->setTitle(QApplication::translate("GUIDemoClass", "Miscellaneous", Q_NULLPTR));
        labelCombinedNoiseIR_2->setText(QApplication::translate("GUIDemoClass", "Instrumented Range Limits", Q_NULLPTR));
        labelCombinedNoiseIR->setText(QApplication::translate("GUIDemoClass", "Combined Noise IR", Q_NULLPTR));
        labelUseModes->setText(QApplication::translate("GUIDemoClass", "Supported Use Modes", Q_NULLPTR));
        editUseModes->setText(QString());
        labelExtendedSeaGain->setText(QApplication::translate("GUIDemoClass", "Extended Sea Gain", Q_NULLPTR));
        labelBlankSectors->setText(QApplication::translate("GUIDemoClass", "Blank Sectors", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("GUIDemoClass", "User Controls", Q_NULLPTR));
        editUserControlSidelobeGain->setText(QApplication::translate("GUIDemoClass", "unknown", Q_NULLPTR));
        labelUserControlFastScan->setText(QApplication::translate("GUIDemoClass", "Fast Scan", Q_NULLPTR));
        labelUserControlLED->setText(QApplication::translate("GUIDemoClass", "LED", Q_NULLPTR));
        editUserControlBeamSharpening->setText(QApplication::translate("GUIDemoClass", "unknown", Q_NULLPTR));
        editUserControlIR->setText(QApplication::translate("GUIDemoClass", "unknown", Q_NULLPTR));
        editUserControlSTCCurve->setText(QApplication::translate("GUIDemoClass", "unknown", Q_NULLPTR));
        editUserControlGain->setText(QApplication::translate("GUIDemoClass", "unknown", Q_NULLPTR));
        labelUserControlSeaIR->setText(QApplication::translate("GUIDemoClass", "IR", Q_NULLPTR));
        labelUserControlSea->setText(QApplication::translate("GUIDemoClass", "Sea", Q_NULLPTR));
        labelUserControlBeamSharpening->setText(QApplication::translate("GUIDemoClass", "Beam Sharpening", Q_NULLPTR));
        labelUserControlLocalIR->setText(QApplication::translate("GUIDemoClass", "Local IR", Q_NULLPTR));
        labelUserControlRange->setText(QApplication::translate("GUIDemoClass", "Range", Q_NULLPTR));
        editUserControlSea->setText(QApplication::translate("GUIDemoClass", "unknown", Q_NULLPTR));
        editUserControlLED->setText(QApplication::translate("GUIDemoClass", "unknown", Q_NULLPTR));
        labelUserControlRangeStretch->setText(QApplication::translate("GUIDemoClass", "Range Stretch", Q_NULLPTR));
        editUserControlLocalIR->setText(QApplication::translate("GUIDemoClass", "unknown", Q_NULLPTR));
        labelUserControlTargetStretch->setText(QApplication::translate("GUIDemoClass", "Target Stretch", Q_NULLPTR));
        labelUserControlRain->setText(QApplication::translate("GUIDemoClass", "Rain", Q_NULLPTR));
        editUserControlFastScan->setText(QApplication::translate("GUIDemoClass", "unknown", Q_NULLPTR));
        labelUserControlGain->setText(QApplication::translate("GUIDemoClass", "Gain", Q_NULLPTR));
        editUserControlTargetStretch->setText(QApplication::translate("GUIDemoClass", "unknown", Q_NULLPTR));
        editUserControlNoiseReject->setText(QApplication::translate("GUIDemoClass", "unknown", Q_NULLPTR));
        labelUserControlSidelobeGain->setText(QApplication::translate("GUIDemoClass", "Sidelobe Gain", Q_NULLPTR));
        editUserControlRangeStretch->setText(QApplication::translate("GUIDemoClass", "unknown", Q_NULLPTR));
        labelUserControlNoiseReject->setText(QApplication::translate("GUIDemoClass", "Noise Reject", Q_NULLPTR));
        editUserControlRange->setText(QApplication::translate("GUIDemoClass", "unknown", Q_NULLPTR));
        labelUserControlSTCCurve->setText(QApplication::translate("GUIDemoClass", "STC Curve", Q_NULLPTR));
        editUserControlRain->setText(QApplication::translate("GUIDemoClass", "unknown", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tabFeatures), QApplication::translate("GUIDemoClass", "Features", Q_NULLPTR));
        groupGuard1Zone->setTitle(QApplication::translate("GUIDemoClass", "Zone 1", Q_NULLPTR));
        groupGuard1Alarm->setTitle(QApplication::translate("GUIDemoClass", "Alarm", Q_NULLPTR));
        labelGuard1Type->setText(QApplication::translate("GUIDemoClass", "Type", Q_NULLPTR));
        labelGuard1State->setText(QApplication::translate("GUIDemoClass", "State", Q_NULLPTR));
        pushGuard1Cancel->setText(QApplication::translate("GUIDemoClass", "Cancel", Q_NULLPTR));
        groupGuard1Setup->setTitle(QApplication::translate("GUIDemoClass", "Setup", Q_NULLPTR));
        labelGuard1Enabled->setText(QApplication::translate("GUIDemoClass", "Enabled", Q_NULLPTR));
        labelGuard1RangeStart->setText(QApplication::translate("GUIDemoClass", "Range-Start", Q_NULLPTR));
        labelGuard1RangeEnd->setText(QApplication::translate("GUIDemoClass", "Range-End", Q_NULLPTR));
        labelGuard1Bearing->setText(QApplication::translate("GUIDemoClass", "Bearing", Q_NULLPTR));
        labelGuard1Width->setText(QApplication::translate("GUIDemoClass", "Width", Q_NULLPTR));
        labelGuard1AlarmType->setText(QApplication::translate("GUIDemoClass", "AlarmType", Q_NULLPTR));
        spinGuard1RangeStart->setSuffix(QApplication::translate("GUIDemoClass", " m", Q_NULLPTR));
        spinGuard1RangeEnd->setSuffix(QApplication::translate("GUIDemoClass", " m", Q_NULLPTR));
        comboGuard1AlarmType->clear();
        comboGuard1AlarmType->insertItems(0, QStringList()
         << QApplication::translate("GUIDemoClass", "Entry", Q_NULLPTR)
         << QApplication::translate("GUIDemoClass", "Exit", Q_NULLPTR)
         << QApplication::translate("GUIDemoClass", "Both", Q_NULLPTR)
        );
        spinGuard1Bearing->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        spinGuard1Width->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        groupGuard2Zone->setTitle(QApplication::translate("GUIDemoClass", "Zone 2", Q_NULLPTR));
        groupGuard2Alarm->setTitle(QApplication::translate("GUIDemoClass", "Alarm", Q_NULLPTR));
        labelGuard2Type->setText(QApplication::translate("GUIDemoClass", "Type", Q_NULLPTR));
        labelGuard2State->setText(QApplication::translate("GUIDemoClass", "State", Q_NULLPTR));
        pushGuard2Cancel->setText(QApplication::translate("GUIDemoClass", "Cancel", Q_NULLPTR));
        groupGuard2Setup->setTitle(QApplication::translate("GUIDemoClass", "Setup", Q_NULLPTR));
        labelGuard2Enabled->setText(QApplication::translate("GUIDemoClass", "Enabled", Q_NULLPTR));
        labelGuard2RangeStart->setText(QApplication::translate("GUIDemoClass", "Range-Start", Q_NULLPTR));
        labelGuard2RangeEnd->setText(QApplication::translate("GUIDemoClass", "Range-End", Q_NULLPTR));
        labelGuard2Bearing->setText(QApplication::translate("GUIDemoClass", "Bearing", Q_NULLPTR));
        labelGuard2Width->setText(QApplication::translate("GUIDemoClass", "Width", Q_NULLPTR));
        labelGuard2AlarmType->setText(QApplication::translate("GUIDemoClass", "AlarmType", Q_NULLPTR));
        spinGuard2RangeStart->setSuffix(QApplication::translate("GUIDemoClass", " m", Q_NULLPTR));
        spinGuard2RangeEnd->setSuffix(QApplication::translate("GUIDemoClass", " m", Q_NULLPTR));
        comboGuard2AlarmType->clear();
        comboGuard2AlarmType->insertItems(0, QStringList()
         << QApplication::translate("GUIDemoClass", "Entry", Q_NULLPTR)
         << QApplication::translate("GUIDemoClass", "Exit", Q_NULLPTR)
         << QApplication::translate("GUIDemoClass", "Both", Q_NULLPTR)
        );
        spinGuard2Bearing->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        spinGuard2Width->setSuffix(QApplication::translate("GUIDemoClass", " deg", Q_NULLPTR));
        groupGuardMiscellaneous->setTitle(QApplication::translate("GUIDemoClass", "Miscellaneous", Q_NULLPTR));
        labelGuardSensitivity->setText(QApplication::translate("GUIDemoClass", "Sensitivity", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tabGuardZone), QApplication::translate("GUIDemoClass", "Guard-Zones", Q_NULLPTR));
        groupAdvancedControls->setTitle(QApplication::translate("GUIDemoClass", "Controls", Q_NULLPTR));
        groupRange->setTitle(QApplication::translate("GUIDemoClass", "STC Range", Q_NULLPTR));
        labelRangeTrim->setText(QApplication::translate("GUIDemoClass", "Trim", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editRangeTrim->setToolTip(QApplication::translate("GUIDemoClass", "dB", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelRangeRate->setText(QApplication::translate("GUIDemoClass", "Rate", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editRangeRate->setToolTip(QApplication::translate("GUIDemoClass", "dB/dec", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupSea->setTitle(QApplication::translate("GUIDemoClass", "STC Sea", Q_NULLPTR));
        labelSeaTrim->setText(QApplication::translate("GUIDemoClass", "Trim", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editSeaTrim->setToolTip(QApplication::translate("GUIDemoClass", "dB", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelSeaRate1->setText(QApplication::translate("GUIDemoClass", "Rate-1", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editSeaRate1->setToolTip(QApplication::translate("GUIDemoClass", "dB/dec", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelSeaRate2->setText(QApplication::translate("GUIDemoClass", "Rate-2", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editSeaRate2->setToolTip(QApplication::translate("GUIDemoClass", "dB/dec", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupRain->setTitle(QApplication::translate("GUIDemoClass", "STC Rain", Q_NULLPTR));
        labelRainTrim->setText(QApplication::translate("GUIDemoClass", "Trim", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editRainTrim->setToolTip(QApplication::translate("GUIDemoClass", "dB", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        editRainRate->setToolTip(QApplication::translate("GUIDemoClass", "dB/dec", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelRainRate->setText(QApplication::translate("GUIDemoClass", "Rate", Q_NULLPTR));
        groupMiscellaneous->setTitle(QApplication::translate("GUIDemoClass", "Miscellaneous", Q_NULLPTR));
        labelUserMinSNR->setText(QApplication::translate("GUIDemoClass", "User Min SNR", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editUserMinSNR->setToolTip(QApplication::translate("GUIDemoClass", "dB", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelVideoAperture->setText(QApplication::translate("GUIDemoClass", "Video Aperture", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editVideoAperture->setToolTip(QApplication::translate("GUIDemoClass", "dB", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelMainBangSuppression->setText(QApplication::translate("GUIDemoClass", "Bang Suppression", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tabAdvanced), QApplication::translate("GUIDemoClass", "Advanced", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tabBScan), QApplication::translate("GUIDemoClass", "B-Scan", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tabPPI), QApplication::translate("GUIDemoClass", "PPI", Q_NULLPTR));
        groupTargetsQuery->setTitle(QApplication::translate("GUIDemoClass", "Query", Q_NULLPTR));
        pushTargetsQueryAll->setText(QApplication::translate("GUIDemoClass", "All", Q_NULLPTR));
        pushTargetsQuerySetup->setText(QApplication::translate("GUIDemoClass", "Setup", Q_NULLPTR));
        pushTargetsQueryTargets->setText(QApplication::translate("GUIDemoClass", "Targets", Q_NULLPTR));
        AlaramSetupGroup->setTitle(QApplication::translate("GUIDemoClass", "Alaram Setup", Q_NULLPTR));
        labelDangerZoneDist->setText(QApplication::translate("GUIDemoClass", "Distance", Q_NULLPTR));
        spinDangerZoneDist->setSuffix(QApplication::translate("GUIDemoClass", " m", Q_NULLPTR));
        labelDangerZoneTime->setText(QApplication::translate("GUIDemoClass", "Time", Q_NULLPTR));
        spinDangerZoneTime->setSuffix(QApplication::translate("GUIDemoClass", " secs", Q_NULLPTR));
        groupTargetsCancel->setTitle(QApplication::translate("GUIDemoClass", "Cancel", Q_NULLPTR));
        pushCancelAll->setText(QApplication::translate("GUIDemoClass", "All", Q_NULLPTR));
        pushCancelSelection->setText(QApplication::translate("GUIDemoClass", "Selection", Q_NULLPTR));
        pushCancelDisplay->setText(QApplication::translate("GUIDemoClass", "Display", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tabTargets), QApplication::translate("GUIDemoClass", "Targets", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GUIDemoClass", "PushButton", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(tabNewFunction), QApplication::translate("GUIDemoClass", "Page", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUIDemoClass: public Ui_GUIDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIDEMO_H
