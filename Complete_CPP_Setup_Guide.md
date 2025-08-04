# Complete Guide to Running C++ Programs on Windows

This document provides detailed instructions on setting up and running C++ programs on Windows. I've provided multiple options to ensure you can run your programs regardless of your setup preference.

## Option 1: Using Visual Studio Code (Recommended)

Since you already have VS Code installed, this is the easiest option.

### Step 1: Install C++ Extension for VS Code
1. Open VS Code
2. Go to Extensions (Ctrl+Shift+X)
3. Search for "C/C++"
4. Install the Microsoft C/C++ extension

### Step 2: Install MinGW Compiler
1. Run the `Install_MinGW.bat` script I've created in your workspace
2. Follow the on-screen instructions to install MinGW
3. Make sure to add MinGW to your PATH as directed in the script

### Step 3: Configure VS Code for C++
1. Open your C++ file in VS Code
2. Press Ctrl+Shift+P to open the command palette
3. Type "C/C++: Edit Configurations" and select it
4. Set the compiler path to your MinGW installation (e.g., `C:\MinGW\bin\g++.exe`)

### Step 4: Run Your Program in VS Code
1. With your C++ file open, press F5
2. Select "C++ (GDB/LLDB)" if prompted
3. Select "g++.exe" as your compiler

Alternatively, you can install the "Code Runner" extension and run your file with Ctrl+Alt+N.

## Option 2: Using Command Line

After installing MinGW using the `Install_MinGW.bat` script:

1. Open Command Prompt
2. Navigate to your project directory:
   ```
   cd c:\Users\kalvi\OneDrive\Documents\VS\OOP--SEM-3-
   ```
3. Compile your program:
   ```
   g++ -o OPP_practical_1 OPP_practical_1.cpp
   ```
4. Run your program:
   ```
   OPP_practical_1
   ```

## Option 3: Using Visual Studio IDE

If you prefer a full-featured IDE:

1. Download and install Visual Studio Community Edition from [visualstudio.microsoft.com](https://visualstudio.microsoft.com/vs/community/)
2. During installation, select "Desktop development with C++"
3. Open Visual Studio
4. Go to File -> Open -> Project/Solution
5. Browse to your .cpp file and open it
6. Press F5 to build and run

## Understanding Your Program

The program you have (`OPP_practical_1.cpp`) demonstrates basic object-oriented programming concepts in C++:

1. It defines a `student` class with:
   - Private attributes: name and roll_no
   - Public methods: input() and display()

2. In the main function, it:
   - Creates a student object (`s1`)
   - Collects student information through the input() method
   - Displays the student details using the display() method

3. The program demonstrates key OOP concepts like:
   - Encapsulation (private attributes, public methods)
   - Class and object creation
   - Method implementation

## Common Issues and Solutions

1. **"g++ is not recognized as an internal or external command"**
   - Solution: Make sure MinGW is installed and added to your PATH

2. **Compilation errors**
   - Solution: Check for syntax errors in your code

3. **VS Code not finding your compiler**
   - Solution: Make sure you've configured your compiler path correctly in VS Code settings

4. **Program closes immediately after running**
   - Solution: This is normal behavior. Your program already includes a `cin.get()` at the end to wait for user input before closing

## Next Steps for Learning C++

1. Modify the student class to include more attributes like age, grade, etc.
2. Create an array of student objects to manage multiple students
3. Add functionality to save student data to a file
4. Implement inheritance by creating derived classes like "GraduateStudent"

## Need Additional Help?

- Official C++ Reference: [cppreference.com](https://en.cppreference.com/w/)
- C++ Tutorials: [learncpp.com](https://www.learncpp.com/)
- VS Code C++ Documentation: [code.visualstudio.com/docs/languages/cpp](https://code.visualstudio.com/docs/languages/cpp)
