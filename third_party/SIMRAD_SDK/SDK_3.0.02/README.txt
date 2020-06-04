===============================================================================
             Navico BRPC Radar Software-Development-Kit Library
===============================================================================

Introduction
------------
This library is intended to allow a third party to incorporate the control and 
processing of data from a Navico Broadband radar directly into an application. 

It requires the purchase of an Unlock-Key for each radar it is going to be used
with. A binary executable is included (as a separate _demo.zip file) that can
be used to gather the information (serial-number and Lock-ID) that needs to be
provided when purchasing an Unlock-Key.


Platforms
---------
Supported platforms include:
  * Windows XP and newer

    The library has been built and tested using Microsoft Visual-Studio 2010/2013/2015
  under Windows 7.

  * Linux (glibc >= 2.21, kernel >= 4.4)

    The library has been built using gcc 4.9.4 under Fedora 22, and tested under Fedora
  Core 22.


Installation
------------
The SDK is distributed as two separate .zip files; the library itself, and a
pre-built binary for an example/demonstration application whose source code is
included in the library.

To install the library package just unzip the package file into an appropriate
directory, this will create a subdirectory with the same name as the file
(minus the .zip of course).

All you need to do then is make sure its 'include' directory is added to your
compilers include path.

To test the installation, that the compatibility of your setup, we recommend
that you try building the demo application 'examples\GUIDemo' that's included.
Note that this requires the open-source QT libraries to build so you may need
to download these first.  The GUIDemo has been tested with Qt 4.8.


GUIDemo Example - Windows
-------------------------
If you have the QT Visual Studio add-in installed you can import the project
by loading the 'examples\GUIDemo\GUIDemo.pro' file. You will need to copy
the debug and release folder of the library that matches to your Visual Studio
version and x86/x64 architecture to lib\ for linking, and add the text
"PATH=%PATH%;..\..\lib\$(ConfigurationName)" to the GUIDemo projects properties
under "Configuration Properties|Debugging|Environment" so Visual Studio will be
able to find the library DLL's.


GUIDemo Example - Linux
-------------------------
The SDK should be compiled with C++11 enabled.  For most compilers, this is
enabled by passing the argument -std=c++11 (or -std=c++0x) to the compiler.
To build the GUIDemo:

    cd examples/GUIDemo
    qmake GUIDemo.pro "QMAKE_CXXFLAGS+=-std=c++11"
    make
    LD_LIBRARY_PATH=../../lib/release:$(LD_LIBRARY_PATH) ./GUIDemo

Some distributions rename qmake as qmake-qt4.


Disabling Navico C++11 Extensions
---------------------------------
The SDK attempts to compensate for missing C++11 features in versions of
compilers that do not support it.  Specifically, this attempts to define
nullptr and provide a limited static_assert.

If this conflicts with your project, define DISABLE_NAVICO_CXX11 to prevent
these extensions from being defined.


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

Library-Package:  NAVICO_SDK_<version>.zip
  SDK_<version>\
     docs\             - Separate MS-Word doc's for major library classes
        html\          - Doxygen documentation for include files
     examples\
        GUIDemo\       - Example demo application using QT libraries
     include\
     lib\              - Debug and release builds of the libraries
        VS2010_x64\    - Visual Studio 2010 x64 build
           debug\
           release\
        VS2010_x86\    - Visual Studio 2010 x86 build
           debug\
           release\
        VS2013_x64\    - Visual Studio 2013 x64 build
           debug\
           release\
        VS2013_x86\    - Visual Studio 2013 x86 build
           debug\
           release\
        VS2015_x64\    - Visual Studio 2015 x64 build
           debug\
           release\
        VS2015_x86\    - Visual Studio 2015 x86 build
           debug\
           release\
		lib.tar.bz2    - Linux package containing the following:
            linux_x64\     - Linux x64 build
               debug\
               release\
            linux_x86\     - Linux x86 build
               debug\
               release\
