TEMPLATE = app

CONFIG *= warn_on
CONFIG(debug, debug|release): CONFIG *= console

#ifndef BRPC_LIB_INCL
DEFINES += BRPC_LIB BRPC_LIB_INCL
#endif

#------------------------------------------------------------
# Source Files
#------------------------------------------------------------

FORMS += \
    GUIDemo.ui \
    Registration.ui \

HEADERS += \
    CustomFrames.h \
    GUIDemo.h \
    MultiRadar.h \
    OverlayManager.h \
    QControlUtils.h \
    ScannerInfo.h \
    TabBase.h \
    TabAdvanced.h \
    TabBScan.h \
    TabGuardZone.h \
    TabImage.h \
    TabInstallation.h \
    TabFeatures.h \
    TabSectorBlanking.h \
    TabPPI.h \
    TabTargets.h \

SOURCES += \
    CustomFrames.cpp \
    GUIDemo.cpp \
    MultiRadar.cpp \
    OverlayManager.cpp \
    QControlUtils.cpp \
    ScannerInfo.cpp \
    TabBase.cpp \
    TabAdvanced.cpp \
    TabBScan.cpp \
    TabGuardZone.cpp \
    TabImage.cpp \
    TabInstallation.cpp \
    TabFeatures.cpp \
    TabSectorBlanking.cpp \
    TabPPI.cpp \
    TabTargets.cpp \
    main.cpp \

#------------------------------------------------------------
# Include directories
#------------------------------------------------------------

INCLUDES = \
    ../../include \

#ifndef BRPC_LIB_INCL
INCLUDES += \
    ../../../../HaRPCore/CoreOS/include \
    ../../../../HaRPCore/include \
    ../../../../HaRPCore/include/Protocol/NRP \
    ../../../ClientLibs/include/RadarNRP
#endif
  
#------------------------------------------------------------
# UI Generation
#------------------------------------------------------------

CONFIG(debug,   debug|release): TARGET_DIR = debug
CONFIG(release, debug|release): TARGET_DIR = release

UI_DIR = GeneratedFiles
MOC_DIR = $${UI_DIR}/$${TARGET_DIR}
INCLUDEPATH += $${UI_DIR}

#------------------------------------------------------------
# Libraries
#------------------------------------------------------------

LIBS += \
    -L../../lib/$${TARGET_DIR} \
  	-lNRPClient \
  	-lNRPPPI \
   
#------------------------------------------------------------
# Final config
#------------------------------------------------------------
  
#set the qmake variables
DEPENDPATH += $$INCLUDES
INCLUDEPATH += $$INCLUDES


