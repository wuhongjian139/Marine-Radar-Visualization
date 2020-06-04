# CMake 3.1 is needed because of bug in previous version of CMake
# regarding interface link libraries not properly propagated for
# IMPORTED targets.
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

## Verbosity
set(CMAKE_VERBOSE_MAKEFILE on)

##################
# Includes
##################
include_directories(../../include)

set(QT4_NO_LINK_QTMAIN TRUE)  ###
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC TRUE)
set(CMAKE_AUTOUIC TRUE)
set(CMAKE_AUTORCC TRUE)
find_package(Qt4 REQUIRED)

project(GUIDemo)
add_executable(GUIDemo
	CustomFrames.cpp 
	GUIDemo.cpp 
	main.cpp 
	MultiRadar.cpp 
	OverlayManager.cpp 
	QControlUtils.cpp 
	ScannerInfo.cpp 
	TabAdvanced.cpp 
	TabBase.cpp 
	TabBScan.cpp 
	TabFeatures.cpp 
	TabGuardZone.cpp 
	TabImage.cpp 
	TabInstallation.cpp 
	TabPPI.cpp 
	TabSectorBlanking.cpp 
	TabTargets.cpp 
)

target_link_libraries(GUIDemo ../../lib/debug/NRPClient.lib)
target_link_libraries(GUIDemo ../../lib/debug/NRPPPI.lib)

