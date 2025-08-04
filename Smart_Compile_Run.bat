@echo off
echo ===================================
echo C++ Setup and Compilation Assistant
echo ===================================
echo.

REM Try to find various C++ compilers
set COMPILER_FOUND=0

REM Check for MinGW in various locations
echo Checking for MinGW...
if exist "C:\MinGW\bin\g++.exe" (
    echo Found MinGW at C:\MinGW\bin\g++.exe
    set PATH=C:\MinGW\bin;%PATH%
    set COMPILER_FOUND=1
    goto :compile
)

if exist "C:\msys64\mingw64\bin\g++.exe" (
    echo Found MinGW at C:\msys64\mingw64\bin\g++.exe
    set PATH=C:\msys64\mingw64\bin;%PATH%
    set COMPILER_FOUND=1
    goto :compile
)

REM Check for Visual Studio compiler
echo Checking for Visual Studio...
for %%V in (2022 2019 2017) do (
    for %%E in (Enterprise Professional Community) do (
        if exist "C:\Program Files\Microsoft Visual Studio\%%V\%%E\VC\Tools\MSVC" (
            echo Found Visual Studio %%V %%E
            call "C:\Program Files\Microsoft Visual Studio\%%V\%%E\VC\Auxiliary\Build\vcvars64.bat" >nul 2>&1
            set COMPILER_FOUND=1
            goto :compile
        )
        if exist "C:\Program Files (x86)\Microsoft Visual Studio\%%V\%%E\VC\Tools\MSVC" (
            echo Found Visual Studio %%V %%E
            call "C:\Program Files (x86)\Microsoft Visual Studio\%%V\%%E\VC\Auxiliary\Build\vcvars64.bat" >nul 2>&1
            set COMPILER_FOUND=1
            goto :compile
        )
    )
)

REM Check for Clang
echo Checking for Clang...
where clang++ >nul 2>&1
if %ERRORLEVEL% EQU 0 (
    echo Found Clang
    set COMPILER_FOUND=1
    goto :compile_clang
)

:no_compiler
if %COMPILER_FOUND% EQU 0 (
    echo.
    echo No C++ compiler was found on your system.
    echo.
    echo Options:
    echo 1. Install MinGW (recommended for beginners)
    echo 2. Install Visual Studio with C++ components
    echo 3. Use VS Code to compile and run
    echo.
    echo For detailed instructions, please refer to the Complete_CPP_Setup_Guide.md file.
    echo.
    set /p INSTALL_CHOICE="Would you like to download MinGW now? (Y/N): "
    if /i "%INSTALL_CHOICE%"=="Y" goto :download_mingw
    goto :end
)

:download_mingw
echo.
echo Downloading MinGW installer...
mkdir "%USERPROFILE%\Downloads\MinGW_Setup" 2>nul
powershell -Command "& {$ProgressPreference = 'SilentlyContinue'; Invoke-WebRequest -Uri 'https://sourceforge.net/projects/mingw/files/Installer/mingw-get-setup.exe/download' -OutFile '%USERPROFILE%\Downloads\MinGW_Setup\mingw-get-setup.exe'}"

if not exist "%USERPROFILE%\Downloads\MinGW_Setup\mingw-get-setup.exe" (
    echo Failed to download MinGW installer.
    goto :end
)

echo.
echo MinGW installer downloaded to: %USERPROFILE%\Downloads\MinGW_Setup\mingw-get-setup.exe
echo.
echo Please follow these steps:
echo 1. Run the installer
echo 2. Accept the default installation location
echo 3. In the MinGW Installation Manager:
echo    - Expand "Basic Setup"
echo    - Check the box for "mingw32-gcc-g++" (C++ compiler)
echo    - Click "Installation" menu, then "Apply Changes"
echo    - Click "Apply" in the confirmation dialog
echo 4. After installation completes, restart this script
echo.
echo Opening the installer now...
start "" "%USERPROFILE%\Downloads\MinGW_Setup\mingw-get-setup.exe"
goto :end

:compile
echo.
where g++ >nul 2>&1
if %ERRORLEVEL% EQU 0 (
    echo Using G++ compiler...
    echo Compiling OPP_practical_1.cpp...
    g++ -o OPP_practical_1 OPP_practical_1.cpp
    
    if %ERRORLEVEL% EQU 0 (
        echo.
        echo Compilation successful!
        echo Running the program...
        echo ----------------------------------------
        echo.
        OPP_practical_1
        echo.
        echo ----------------------------------------
    ) else (
        echo.
        echo Compilation failed.
    )
    goto :end
) else (
    where cl >nul 2>&1
    if %ERRORLEVEL% EQU 0 (
        echo Using MSVC compiler...
        echo Compiling OPP_practical_1.cpp...
        cl /EHsc OPP_practical_1.cpp
        
        if %ERRORLEVEL% EQU 0 (
            echo.
            echo Compilation successful!
            echo Running the program...
            echo ----------------------------------------
            echo.
            OPP_practical_1
            echo.
            echo ----------------------------------------
        ) else (
            echo.
            echo Compilation failed.
        )
        goto :end
    )
)

:compile_clang
echo.
echo Using Clang compiler...
echo Compiling OPP_practical_1.cpp...
clang++ -o OPP_practical_1 OPP_practical_1.cpp

if %ERRORLEVEL% EQU 0 (
    echo.
    echo Compilation successful!
    echo Running the program...
    echo ----------------------------------------
    echo.
    OPP_practical_1
    echo.
    echo ----------------------------------------
) else (
    echo.
    echo Compilation failed.
)

:end
echo.
echo Press any key to exit...
pause
