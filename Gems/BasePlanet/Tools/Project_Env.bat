@echo off
REM 
REM Copyright (c) Contributors to the Open 3D Engine Project.
REM For complete copyright and license terms please see the LICENSE at the root of this distribution.
REM
REM SPDX-License-Identifier: Apache-2.0 OR MIT
REM
REM

:: Sets up environment for O3DE DCC tools and code access

:: Store current dir
%~d0
cd %~dp0
PUSHD %~dp0

:: Put you project env vars and overrides in this file

:: chanhe the relative path up to dev
set ABS_PATH=%~dp0

:: project name as a str tag
IF "%O3DE_PROJECT_NAME%"=="" (
    for %%I in ("%~dp0.") do for %%J in ("%%~dpI.") do set O3DE_PROJECT_NAME=%%~nxJ
    )

echo.
echo _____________________________________________________________________
echo.
echo ~    Setting up O3DE DSI %O3DE_PROJECT_NAME% Environment ...
echo _____________________________________________________________________
echo.
echo     O3DE_PROJECT_NAME = %O3DE_PROJECT_NAME%

:: if the user has set up a custom env call it
:: this should allow the user to locally
:: set env hooks like O3DE_DEV or O3DE_PROJECT
IF EXIST "%~dp0User_Env.bat" CALL %~dp0User_Env.bat
echo     O3DE_DEV = %O3DE_DEV%

:: Override the default maya version
IF "%MAYA_VERSION%"=="" (set MAYA_VERSION=2020)
echo     MAYA_VERSION = %MAYA_VERSION%

:: O3DE_PROJECT is ideally treated as a full path in the env launchers
:: do to changes in o3de, external engine/project/gem folder structures, etc.
IF "%O3DE_PROJECT%"=="" (
    for %%i in ("%~dp0..") do set "O3DE_PROJECT=%%~fi"
    )
echo     O3DE_PROJECT = %O3DE_PROJECT%

:: this is here for archaic reasons, WILL DEPRECATE
IF "%O3DE_PROJECT_PATH%"=="" (set O3DE_PROJECT_PATH=%O3DE_PROJECT%)
echo     O3DE_PROJECT_PATH = %O3DE_PROJECT_PATH%

:: Change to root Lumberyard dev dir
:: You must set this in a User_Env.bat to match youe engine repo location!
IF "%O3DE_DEV%"=="" (set O3DE_DEV=C:\Depot\o3de-engine)
echo     O3DE_DEV = %O3DE_DEV%

CALL %O3DE_DEV%\Gems\AtomLyIntegration\TechnicalArt\DccScriptingInterface\Tools\Dev\Windows\Env_Maya.bat

:: Constant Vars (Global)
SET DCCSI_GDEBUG=0
echo     DCCSI_GDEBUG = %DCCSI_GDEBUG%
SET DCCSI_DEV_MODE=0
echo     DCCSI_DEV_MODE = %DCCSI_DEV_MODE%
SET DCCSI_GDEBUGGER=WING
echo     DCCSI_GDEBUGGER = %DCCSI_GDEBUGGER%

:: Restore original directory
popd

:: Change to root dir
CD /D %ABS_PATH%

GOTO END_OF_FILE

:: Return to starting directory
POPD

:END_OF_FILE