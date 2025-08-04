@echo off
echo Compiling and running OPP_practical_1.cpp...
echo.

REM Check if g++ is installed and in PATH
where g++ >nul 2>&1
if %ERRORLEVEL% NEQ 0 (
    echo ERROR: g++ compiler not found in PATH.
    echo Please run the Install_MinGW.bat script first and follow the instructions.
    echo See Complete_CPP_Setup_Guide.md for detailed guidance.
    echo.
    echo Press any key to exit...
    pause
    exit /b 1
)

REM Compile the program
echo Compiling with g++...
g++ -o OPP_practical_1 OPP_practical_1.cpp

REM Check if compilation was successful
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo Compilation failed. Please check your code for errors.
    echo.
    echo Press any key to exit...
    pause
    exit /b 1
)

echo.
echo Compilation successful!
echo.
echo Running the program...
echo ----------------------------------------
echo.

REM Run the compiled program
OPP_practical_1

echo.
echo ----------------------------------------
echo Program execution completed.
echo.
echo Press any key to exit...
pause
