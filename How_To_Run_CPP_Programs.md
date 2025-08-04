# How to Run C++ Programs on Windows

This document explains how to set up your C++ development environment on Windows and run C++ programs.

## 1. Setting Up C++ Compiler

### Option 1: MinGW (Minimalist GNU for Windows)

1. **Download MinGW Installer**:
   - Go to [MinGW's website](https://sourceforge.net/projects/mingw/) and download the installer
   - Or use the more up-to-date [MinGW-W64](https://www.mingw-w64.org/downloads/) for better C++11/14/17 support

2. **Install MinGW**:
   - Run the installer
   - Select the "mingw32-gcc-g++" component at minimum
   - Click "Installation" → "Apply Changes" to complete installation

3. **Add to PATH**:
   - Right-click on "This PC" or "Computer" → Properties
   - Click "Advanced system settings"
   - Click "Environment Variables"
   - In the "System variables" section, find and select the "Path" variable
   - Click "Edit"
   - Add the path to MinGW bin folder (typically `C:\MinGW\bin` or wherever you installed it)
   - Click "OK" on all dialogs

### Option 2: Visual Studio Community Edition

1. **Download Visual Studio Community**:
   - Go to [Visual Studio Downloads](https://visualstudio.microsoft.com/downloads/)
   - Download Visual Studio Community Edition

2. **Install Visual Studio**:
   - Run the installer
   - Select the "Desktop development with C++" workload
   - Complete the installation

## 2. Running C++ Programs

### Using Command Line with g++ (MinGW)

1. **Compile your program**:
   ```
   g++ -o program_name source_file.cpp
   ```
   For your specific file:
   ```
   g++ -o OPP_practical_1 OPP_practical_1.cpp
   ```

2. **Run your compiled program**:
   ```
   program_name
   ```
   For your specific file:
   ```
   OPP_practical_1
   ```

### Using Visual Studio Code

1. **Install VS Code Extensions**:
   - Install the "C/C++" extension from Microsoft
   - Install the "Code Runner" extension (optional but helpful)

2. **Configure VS Code**:
   - Open the Command Palette (Ctrl+Shift+P)
   - Type "C/C++: Edit Configurations"
   - Set the compiler path to your g++ installation

3. **Run your program**:
   - Open your .cpp file
   - Use the "Run" button in the top-right corner or
   - Press Ctrl+Alt+N if you have Code Runner installed or
   - Press F5 to debug

### Using Visual Studio IDE

1. **Create a new project**:
   - Open Visual Studio
   - Click "Create a new project"
   - Select "Console App" for C++
   - Follow the wizard to create the project

2. **Add your existing .cpp file**:
   - Right-click on "Source Files" in Solution Explorer
   - Select "Add" → "Existing Item"
   - Browse to your .cpp file and add it

3. **Build and Run**:
   - Press F5 to build and run your program
   - Press Ctrl+F5 to run without debugging

## Troubleshooting

- **Command not found errors**: Make sure your compiler is correctly added to the PATH
- **Compilation errors**: Check for syntax errors or missing libraries
- **Cannot open output file**: Make sure no other process is using the output file

## For Your Specific File (OPP_practical_1.cpp)

Once your environment is set up properly, you can compile and run your file with:

```
g++ -o OPP_practical_1 OPP_practical_1.cpp
OPP_practical_1
```

This will compile your Student Information System program and then run it.
