rem idf.py build
@echo off & cls
color 5f
title Simple Script For ESP32
:begin
echo ==============================
echo 00.exit
echo 0.build ^& flash
echo 1.build all
echo 2.flash all
echo 3.clean
echo 4.menuconfig
echo 5.re-config
echo ==============================
set cmd=0
set /p cmd=">>"
if /i "%cmd%"=="00" goto exit
if /i "%cmd%"=="0" goto build_flash
if /i "%cmd%"=="1" goto build_all
if /i "%cmd%"=="2" goto flash_all
if /i "%cmd%"=="3" goto clean
if /i "%cmd%"=="4" goto menuconfig
if /i "%cmd%"=="5" goto reconfig

:exit
exit

:build_flash
idf.py build
idf.py -p COM3 -b 961200 flash
goto begin

:build_all
idf.py build
goto begin

:flash_all
idf.py -p COM3 -b 961200 flash
goto begin

:clean
idf.py clean

:menuconfig
idf.py menuconfig
goto begin

:menuconfig
idf.py reconfig
goto begin