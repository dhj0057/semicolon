@echo off
chcp 65001 >nul
setlocal
set "PROJECT_JDK=C:\Users\AISW-510-125\.jdks\ms-21.0.10"

if not exist ".build" mkdir ".build"

"%PROJECT_JDK%\bin\javac.exe" -encoding UTF-8 -d ".build" Character.java Warrior.java Mage.java Archer.java Main.java
if errorlevel 1 exit /b 1

"%PROJECT_JDK%\bin\java.exe" -cp ".build" Main
endlocal
