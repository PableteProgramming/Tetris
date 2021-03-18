@echo off

set srcdir=%CD%

set prjdir=prj


if "%1"=="" goto needhelp

if "%1"=="VS" goto msvc
if "%1"=="MinGW" goto mingw else goto needhelp

:needhelp
echo call the program as follow:
echo configure [VS] [MinGW]
echo Choose VS if configuring for Visual studio solution
echo Choose MinGW if configuring for MinGW Makefiles
goto ex

:msvc
echo configuring for Visual Studio Solution
set dir=%CD%\%prjdir%\VS
cd "%dir%"
cmake -G "Visual Studio 16 2019" -A Win32 ../..
goto ex


:mingw
echo configuring for MinGW Makefiles
set dir=%CD%\%prjdir%\MinGW
cd "%dir%"
cmake -G "MinGW Makefiles" ../..
goto ex

:ex
cd "%srcdir%"