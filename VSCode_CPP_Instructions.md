# Running C++ Programs with VS Code

Since you already have VS Code installed, here's a simplified guide to run your C++ programs:

## 1. Install MinGW (if not already installed)

1. Run the `Install_MinGW.bat` script in your workspace
2. Follow the on-screen instructions to install MinGW
3. Make sure to add MinGW to your PATH as directed

## 2. Configure VS Code (I've already done this for you)

I've created the necessary configuration files:
- `.vscode/tasks.json` - For compiling your C++ program
- `.vscode/launch.json` - For running and debugging your program

## 3. Running Your C++ Program in VS Code

### Method 1: Using Code Runner Extension (easiest)
1. Open your C++ file in VS Code
2. Click the "Play" button in the top right corner, or
3. Right-click in the editor and select "Run Code", or
4. Press Ctrl+Alt+N

### Method 2: Using VS Code's Built-in Debugging
1. Open your C++ file in VS Code
2. Press F5
3. Select "C++ (GDB/LLDB)" if prompted

### Method 3: Using the Terminal in VS Code
1. Open a terminal in VS Code (Ctrl+`)
2. Run these commands:
   ```
   g++ -o OPP_practical_1 OPP_practical_1.cpp
   OPP_practical_1
   ```

## Troubleshooting

If you encounter errors about missing compilers:
1. Make sure MinGW is installed
2. Make sure MinGW's bin directory is in your PATH
3. Restart VS Code after installing MinGW

For detailed instructions, see the Complete_CPP_Setup_Guide.md file.

## Your Program

Your C++ program creates a simple Student Information System where:
1. It defines a student class with name and roll number
2. It allows input of student details
3. It displays the stored information

This demonstrates basic object-oriented programming concepts in C++.
