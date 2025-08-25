// Aim: C++ Program to implement Call by Value and Call by Reference.
// KDK College of Engineering, Nagpur
// B.Tech CSE, 2nd Year

#include <iostream>
// Function to swap two numbers using Call by Value
// This function operates on copies of the original variables.
void swapByValue(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    std::cout << "  -> Inside swapByValue function: x = " << x << ", y = " << y << std::endl;
}
// Function to swap two numbers using Call by Reference
// This function operates on the original variables using their references.
void swapByReference(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    std::cout << "  -> Inside swapByReference function: x = " << x << ", y = " << y << std::endl;
}
int main() {
    int a = 10;
    int b = 20;

    std::cout << "Initial values:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    // --- Part A: Call By Value ---
    std::cout << "Demonstrating Call by Value:" << std::endl;
    std::cout << "Calling swapByValue(a, b)..." << std::endl;
    swapByValue(a, b);
    std::cout << "Values after swapByValue function call:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << " (Notice: Original values are unchanged)" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    // --- Part B: Call By Reference ---
    std::cout << "Demonstrating Call by Reference:" << std::endl;
    std::cout << "Calling swapByReference(a, b)..." << std::endl;
    swapByReference(a, b);
    std::cout << "Values after swapByReference function call:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << " (Notice: Original values are swapped)" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    return 0;
}
