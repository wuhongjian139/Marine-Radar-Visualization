
# library interface
radar_interface_files("" ""
    CustomFrames.h
	GUIDemo.h
	MultiRadar.h
	OverlayManager.h
	QControlUtils.h
	ScannerInfo.h
	TabAdvanced.h
	TabBase.h
	TabBScan.h
	TabFeatures.h
	TabGuardZone.h
	TabImage.h
	TabInstallation.h
	TabPPI.h
	TabSectorBlanking.h
	TabTargets.h
)

# implementation files
radar_source_files("" ""
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
