@echo off

set srcdir=%CD%

set prjdir=prj

if "%1"=="VS" goto msvc
if "%1"=="MinGW" goto mingw

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