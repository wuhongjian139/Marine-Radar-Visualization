===============================================================================
             Navico BRPC Radar-Development-Kit GUI-Demo
===============================================================================

Introduction
------------
This application is a pre-built version of the GUIDemo application source code
included with the Navico BRPC SDK Library. It is provided as part of the 
library to allow library users to extract information from attached radars
which can then be used to purchase Unlock-Keys.

It's expected that eventually the extraction of this information will be built
into the applications being developed with the library.


Platforms
---------
Supported platforms include:
  * Windows XP and newer

    The library has been built using Microsoft Visual-Studio 2010, and tested
  under Windows 7.

  * Linux (glibc >= 2.21, kernel >= 4.4)

    The library has been built using gcc 4.9.4 under Fedora 22, and tested under Fedora
  Core 22.


Installation
------------
The SDK is distributed as two separate .zip files; the library itself, and a
pre-built binary for an example/demonstration application whose source code is
included in the library.

To install the demo application package just unzip the package file into an
appropriate directory, this will create a subdirectory with the same name as
the file (minus the 'NAVICO_' prefix and '.zip' suffix).


Installation - Windows
----------------------
You should then be able to run the GUIDemo.exe file. If it complains about 
missing DLLs you may also need to install the Microsoft Visual C++
Redistributable Package of the appropriate Visual Studio version and x86/x64
architecture.

Visual C++ 2010 SP1 Redistributable Package
x86: https://www.microsoft.com/en-us/download/details.aspx?id=8328
x64: https://www.microsoft.com/en-us/download/details.aspx?id=13523

Visual C++ Redistributable Packages for Visual Studio 2013
https://www.microsoft.com/en-us/download/details.aspx?id=40784

Visual C++ Redistributable for Visual Studio 2015
https://www.microsoft.com/en-us/download/details.aspx?id=48145


Installation - Linux
--------------------
You must have Qt 4.8 (or greater) installed for the GUIDemo.

You may need to modify LD_LIBRARY_PATH to allow the GUIDemo to find the
SDK libraries.  GUIDemo.sh is provided as a convenience to run the
GUIDemo app with LD_LIBRARY_PATH set to ./


Disclaimer
----------
Navico assumes no responsibility for use of this software. It is intended for
Commercial use only (i.e. not intended for aviation, military or medical
applications).


Package Contents
----------------
The version number of the package is incorporated into its name in the form
'M_N_BB', where: M is the major version number; N the minor version number;
and BB is the build number.


Package Contents - Windows
--------------------------
GUIDemo-Package:  NAVICO_SDK_<version>_demo.zip 
  SDK_<version>_demo\
    README.txt         - This document
    ChangeLog.txt
    Linux_x64\     - Linux x64 build
    Linux_x86\     - Linux x86 build
    VS2010_x64\    - Visual Studio 2010 x64 build
    VS2010_x86\    - Visual Studio 2010 x86 build
    VS2013_x64\    - Visual Studio 2013 x64 build
    VS2013_x86\    - Visual Studio 2013 x86 build
    VS2015_x64\    - Visual Studio 2015 x64 build
    VS2015_x86\    - Visual Studio 2015 x86 build
