@echo off
echo Setting up the C++ compilation environment...

REM Try to find VS2022 installation
set "VSINSTALLDIR="
if exist "C:\Program Files\Microsoft Visual Studio\2022\Community" (
    set "VSINSTALLDIR=C:\Program Files\Microsoft Visual Studio\2022\Community"
) else if exist "C:\Program Files\Microsoft Visual Studio\2022\Professional" (
    set "VSINSTALLDIR=C:\Program Files\Microsoft Visual Studio\2022\Professional"
) else if exist "C:\Program Files\Microsoft Visual Studio\2022\Enterprise" (
    set "VSINSTALLDIR=C:\Program Files\Microsoft Visual Studio\2022\Enterprise"
) else if exist "C:\Program Files (x86)\Microsoft Visual Studio\2022\Community" (
    set "VSINSTALLDIR=C:\Program Files (x86)\Microsoft Visual Studio\2022\Community"
) else if exist "C:\Program Files (x86)\Microsoft Visual Studio\2022\Professional" (
    set "VSINSTALLDIR=C:\Program Files (x86)\Microsoft Visual Studio\2022\Professional"
) else if exist "C:\Program Files (x86)\Microsoft Visual Studio\2022\Enterprise" (
    set "VSINSTALLDIR=C:\Program Files (x86)\Microsoft Visual Studio\2022\Enterprise"
)

REM If VS2022 not found, try VS2019
if "%VSINSTALLDIR%"=="" (
    if exist "C:\Program Files\Microsoft Visual Studio\2019\Community" (
        set "VSINSTALLDIR=C:\Program Files\Microsoft Visual Studio\2019\Community"
    ) else if exist "C:\Program Files\Microsoft Visual Studio\2019\Professional" (
        set "VSINSTALLDIR=C:\Program Files\Microsoft Visual Studio\2019\Professional"
    ) else if exist "C:\Program Files\Microsoft Visual Studio\2019\Enterprise" (
        set "VSINSTALLDIR=C:\Program Files\Microsoft Visual Studio\2019\Enterprise"
    ) else if exist "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community" (
        set "VSINSTALLDIR=C:\Program Files (x86)\Microsoft Visual Studio\2019\Community"
    ) else if exist "C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional" (
        set "VSINSTALLDIR=C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional"
    ) else if exist "C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise" (
        set "VSINSTALLDIR=C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise"
    )
)

if "%VSINSTALLDIR%"=="" (
    echo Visual Studio installation not found.
    echo Please install Visual Studio with C++ development tools or MinGW.
    echo See How_To_Run_CPP_Programs.md for detailed instructions.
    pause
    exit /b 1
)

echo Found Visual Studio at: %VSINSTALLDIR%

REM Setup the environment
if exist "%VSINSTALLDIR%\VC\Auxiliary\Build\vcvarsall.bat" (
    echo Setting up the C++ development environment...
    call "%VSINSTALLDIR%\VC\Auxiliary\Build\vcvarsall.bat" x64
) else (
    echo Visual Studio C++ components not found.
    echo Please install the C++ development workload in Visual Studio.
    pause
    exit /b 1
)

REM Compile and run the program
echo.
echo Compiling OPP_practical_1.cpp...
cl.exe /EHsc OPP_practical_1.cpp

if %ERRORLEVEL% EQU 0 (
    echo.
    echo Compilation successful! Running the program...
    echo.
    OPP_practical_1.exe
) else (
    echo.
    echo Compilation failed with error code %ERRORLEVEL%.
    echo Please check your code for errors.
)

echo.
echo Press any key to exit...
pause
