rem idf.py build
@echo off & cls
rem color 5f
title Simple Script For ESP32

idf.py build
idf.py -p COM3 -b 961200 flash
