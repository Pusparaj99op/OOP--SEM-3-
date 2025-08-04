@echo off
echo ===================================
echo MinGW Installer for C++ Development
echo ===================================
echo.
echo This script will download and install MinGW to C:\MinGW
echo.

REM Create directories
echo Creating directories...
mkdir "%USERPROFILE%\Downloads\MinGW_Setup" 2>nul
mkdir "C:\MinGW" 2>nul
mkdir "C:\MinGW\bin" 2>nul

echo.
echo Downloading MinGW installer...
powershell -Command "& {$ProgressPreference = 'SilentlyContinue'; Invoke-WebRequest -Uri 'https://github.com/niXman/mingw-builds-binaries/releases/download/13.1.0-rt_v11-rev1/x86_64-13.1.0-release-posix-seh-ucrt-rt_v11-rev1.7z' -OutFile '%USERPROFILE%\Downloads\MinGW_Setup\mingw64.7z'}"

if not exist "%USERPROFILE%\Downloads\MinGW_Setup\mingw64.7z" (
    echo Failed to download MinGW.
    echo.
    echo Please visit https://github.com/niXman/mingw-builds-binaries/releases
    echo and download the latest MinGW-W64 release manually.
    goto :end
)

echo.
echo Downloading 7-Zip portable extractor...
powershell -Command "& {$ProgressPreference = 'SilentlyContinue'; Invoke-WebRequest -Uri 'https://www.7-zip.org/a/7za920.zip' -OutFile '%USERPROFILE%\Downloads\MinGW_Setup\7za.zip'}"

if not exist "%USERPROFILE%\Downloads\MinGW_Setup\7za.zip" (
    echo Failed to download 7-Zip extractor.
    goto :end
)

echo.
echo Extracting 7-Zip...
powershell -Command "& {Add-Type -AssemblyName System.IO.Compression.FileSystem; [System.IO.Compression.ZipFile]::ExtractToDirectory('%USERPROFILE%\Downloads\MinGW_Setup\7za.zip', '%USERPROFILE%\Downloads\MinGW_Setup')}"

echo.
echo Extracting MinGW to C:\MinGW...
"%USERPROFILE%\Downloads\MinGW_Setup\7za.exe" x "%USERPROFILE%\Downloads\MinGW_Setup\mingw64.7z" -o"C:\" -y

echo.
echo Adding MinGW to the system PATH...
powershell -Command "& {$path = [Environment]::GetEnvironmentVariable('Path', 'Machine'); if (-not $path.Contains('C:\MinGW\bin')) { [Environment]::SetEnvironmentVariable('Path', $path + ';C:\MinGW\bin', 'Machine'); }}"

echo.
echo Installation complete!
echo.
echo MinGW has been installed to C:\MinGW
echo and added to your system PATH.
echo.
echo You may need to restart VS Code for the changes to take effect.
echo.
echo Testing the installation...
echo.
echo ===== Testing for g++ compiler =====
C:\MinGW\bin\g++.exe --version
echo ===================================

:end
echo.
echo Press any key to exit...
pause
