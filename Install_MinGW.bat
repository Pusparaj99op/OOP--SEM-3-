@echo off
echo This script will download and install MinGW for C/C++ compilation
echo.

REM Create directory for downloads
set "DOWNLOAD_DIR=%USERPROFILE%\Downloads\MinGW_Setup"
mkdir "%DOWNLOAD_DIR%" 2>nul

REM Download MinGW setup
echo Downloading MinGW installer...
powershell -Command "& {$ProgressPreference = 'SilentlyContinue'; Invoke-WebRequest -Uri 'https://sourceforge.net/projects/mingw/files/Installer/mingw-get-setup.exe/download' -OutFile '%DOWNLOAD_DIR%\mingw-get-setup.exe'}"

if not exist "%DOWNLOAD_DIR%\mingw-get-setup.exe" (
    echo Failed to download MinGW installer.
    pause
    exit /b 1
)

echo.
echo MinGW installer downloaded successfully to: %DOWNLOAD_DIR%\mingw-get-setup.exe
echo.
echo Please follow these steps to complete the installation:
echo.
echo 1. Run the downloaded installer
echo 2. Accept the default installation location (usually C:\MinGW)
echo 3. In the MinGW Installation Manager:
echo    - Expand "Basic Setup"
echo    - Check the box for "mingw32-gcc-g++" (C++ compiler)
echo    - Click "Installation" menu, then "Apply Changes"
echo    - Click "Apply" in the confirmation dialog
echo 4. After installation completes, add MinGW to your PATH:
echo    - Right-click on "This PC" or "Computer" and select "Properties"
echo    - Click "Advanced system settings"
echo    - Click "Environment Variables"
echo    - Find "Path" in System Variables and click "Edit"
echo    - Add "C:\MinGW\bin" (or your installation path)
echo    - Click "OK" to close all dialogs
echo.
echo After completing these steps, open a new command prompt and type:
echo    g++ --version
echo.
echo If it displays version information, you're all set!
echo.
echo You can then compile your program with:
echo    g++ -o OPP_practical_1 OPP_practical_1.cpp
echo And run it with:
echo    OPP_practical_1
echo.
echo Would you like to open the MinGW installer now? (Y/N)

set /p response="Enter Y or N: "
if /i "%response%"=="Y" start "" "%DOWNLOAD_DIR%\mingw-get-setup.exe"

echo.
echo Press any key to exit...
pause
