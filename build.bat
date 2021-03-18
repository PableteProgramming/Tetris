@echo off

set srcdir=%CD%

set prjdir=prj

if "%1"=="" goto needhelp

if "%1"=="VS" goto msvc
if "%1"=="MinGW" goto mingw else goto needhelp

:needhelp
echo call the program as follow:
echo build [VS] [MinGW]
echo Choose VS if building for Visual studio solution
echo Choose MinGW if building for MinGW Makefiles
goto ex

:msvc
echo building for Visual Studio Solution
set dir=%CD%\%prjdir%\VS
cd "%dir%"
cmake --build .
goto ex


:mingw
echo building for MinGW Makefiles
set dir=%CD%\%prjdir%\MinGW
cd "%dir%"
make
goto ex

:ex
cd "%srcdir%"