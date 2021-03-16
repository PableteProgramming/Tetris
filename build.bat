@echo off

set srcdir=%CD%

set prjdir=prj

if "%1"=="VS" goto msvc
if "%1"=="MinGW" goto mingw

:msvc
set dir=%CD%\%prjdir%\VS
cd "%dir%"
cmake --build .
goto ex


:mingw
set dir=%CD%\%prjdir%\MinGW
cd "%dir%"
make
goto ex


:ex
cd "%srcdir%"