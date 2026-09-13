@echo off
REM Fake Windows BSOD Prank - Creates realistic crash effect
REM DO NOT actually crash the system

setlocal enabledelayedexpansion

REM Set blue background and white text
color 1F
cls

REM Create BSOD effect using screen display
echo.
echo.
echo                                    :(
echo.
echo         Your PC ran into a problem and needs to restart.
echo         We're just collecting some error info, and then
echo         we will restart for you.
echo.
echo.
echo         If you'd like to know more, you can search online
echo         later for this error: CRITICAL_SYSTEM_ERROR
echo.
echo.
echo         Error Code: 0x00000050
echo         Parameter1: ffffffff800000ff
echo         Parameter2: 0000000000000008
echo         Parameter3: fffff80000000000
echo         Parameter4: 0000000000000002
echo.
echo.
echo         DRIVER_IRQL_NOT_LESS_OR_EQUAL
echo.
echo.
echo         Check for problems and fixes
echo         Restarting your PC in 60 seconds...
echo.
echo         Press any key to continue...
echo.

pause >nul

REM Reveal the prank
cls
color 2F
echo.
echo.
echo         HAHA! JUST KIDDING!
echo.
echo         Your PC is completely safe!
echo         You got pranked by BadUSB!
echo.
echo         Email: cyberren@gmail.com
echo.
echo.
pause >nul
