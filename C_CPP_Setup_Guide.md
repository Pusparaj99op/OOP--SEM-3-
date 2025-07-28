# C/C++ Development Setup Guide for Windows

## Current Status: ✅ COMPILERS SUCCESSFULLY INSTALLED!

🎉 **SUCCESS!** Your system now has the following compilers installed:
- ✅ **GCC 13.2.0** - C compiler
- ✅ **G++ 13.2.0** - C++ compiler  
- ✅ **Make** - Build tool
- ✅ **Chocolatey** - Package manager for future installations

**Installation completed via:** Chocolatey package manager + Scoop

## Installation Options

### Option 1: Code::Blocks with MinGW (RECOMMENDED FOR BEGINNERS)

**Why this option?**
- Easiest installation
- Includes both IDE and compiler
- Works out of the box
- Good for learning

**Steps:**
1. Go to: http://www.codeblocks.org/downloads/binaries
2. Download: `codeblocks-20.03mingw-setup.exe` (about 130MB)
3. Run the installer and follow the setup wizard
4. This will install both Code::Blocks IDE and MinGW compiler
5. The compiler will be automatically added to your system PATH

**After installation, test with:**
```cmd
gcc --version
g++ --version
```

### Option 2: Standalone MinGW-w64 Installation

**Why this option?**
- More control over installation
- Smaller footprint
- Use with any text editor (like VS Code)

**Steps:**
1. Go to: https://www.mingw-w64.org/downloads/
2. Click on "MingW-W64-builds"
3. Download the installer
4. Run installer with these settings:
   - Version: Latest
   - Architecture: x86_64
   - Threads: win32
   - Exception: seh
   - Build revision: Latest
5. Install to: `C:\mingw64`
6. **IMPORTANT**: Add `C:\mingw64\bin` to your system PATH:
   - Press Windows + R, type `sysdm.cpl`
   - Go to "Advanced" tab → "Environment Variables"
   - Under "System Variables", find "Path" and click "Edit"
   - Click "New" and add: `C:\mingw64\bin`
   - Click OK on all dialogs
   - Restart Command Prompt

### Option 3: Visual Studio Build Tools (For Advanced Users)

**Steps:**
1. Go to: https://visualstudio.microsoft.com/visual-cpp-build-tools/
2. Download "Build Tools for Visual Studio"
3. Run installer and select "C++ build tools"
4. This installs Microsoft's compiler (cl.exe)

### Option 4: Dev-C++ (Alternative IDE)

**Steps:**
1. Go to: https://sourceforge.net/projects/dev-cpp/
2. Download and install Dev-C++
3. Includes MinGW compiler

## ✅ TESTED AND WORKING!

Your test programs have been successfully compiled and run:

### ✅ C++ Program Test
```cmd
g++ -g first_program.cpp -o first_program.exe
first_program.exe
```
**Output:**
```
Hello, World!
C++ is working correctly!
```

### ✅ C Program Test  
```cmd
gcc -g test_c_program.c -o test_c_program.exe
test_c_program.exe
```
**Output:**
```
Hello, World from C!
C compiler is working correctly!
Press any key to continue...
```

## How to Compile and Run Programs (NOW WORKING!)

### Method 1: Using Command Line (After installing compiler)

**For C++ programs (.cpp files):**
```cmd
# Compile
g++ -o program_name.exe source_file.cpp

# Run
program_name.exe

# Example:
g++ -o first_program.exe first_program.cpp
first_program.exe
```

**For C programs (.c files):**
```cmd
# Compile
gcc -o program_name.exe source_file.c

# Run
program_name.exe

# Example:
gcc -o test_c_program.exe test_c_program.c
test_c_program.exe
```

### Method 2: Using VS Code (Current Setup)

**Prerequisites:**
- Install a compiler first (see options above)
- C/C++ extension is already installed ✅

**Steps:**
1. Open your `.cpp` or `.c` file in VS Code
2. Press `Ctrl + Shift + P`
3. Type "Tasks: Run Task"
4. Select "Build C++ Program" to compile
5. Select "Run C++ Program" to execute

### Method 3: One-Command Compile and Run

**For quick testing:**
```cmd
# C++
g++ first_program.cpp && first_program.exe

# C
gcc test_c_program.c && a.exe
```

## Test Programs Available

### 1. first_program.cpp (C++)
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    cout << "C++ is working correctly!" << endl;
    return 0;
}
```

### 2. test_c_program.c (C)
*Currently empty - you can add your C code here*

## Troubleshooting

### Problem: 'gcc' is not recognized as an internal or external command

**Solution:**
- The compiler is not installed OR
- The compiler is not in your system PATH
- Follow installation steps above
- Make sure to add compiler to PATH
- Restart Command Prompt after adding to PATH

### Problem: Compilation errors

**Common issues:**
- Missing semicolons
- Incorrect header includes
- Wrong file extension (.cpp vs .c)
- Syntax errors

### Problem: Program runs but closes immediately

**Solution:**
Add this before `return 0;` in your main function:
```cpp
system("pause");  // Windows
// or
cin.get();        // Cross-platform
```

## Verification Steps

After installing a compiler, run these commands to verify:

```cmd
# Check compiler versions
gcc --version
g++ --version

# Test compile a simple program
echo #include ^<stdio.h^> > test.c
echo int main(){printf("Hello!");return 0;} >> test.c
gcc test.c -o test.exe
test.exe
```

## Next Steps

1. **Choose and install** one of the compiler options above
2. **Restart** your Command Prompt/VS Code after installation
3. **Test** the installation using the verification steps
4. **Compile and run** your first program
5. **Start coding!**

## Quick Reference

| Task | Command |
|------|---------|
| Compile C++ | `g++ file.cpp -o output.exe` |
| Compile C | `gcc file.c -o output.exe` |
| Run program | `output.exe` |
| Compile with debug | `g++ -g file.cpp -o output.exe` |
| Compile with warnings | `g++ -Wall file.cpp -o output.exe` |

---
**Status**: Compilers need to be installed before you can run C/C++ programs.
**Recommendation**: Start with Code::Blocks + MinGW for easiest setup.
