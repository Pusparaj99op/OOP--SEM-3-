// Aim: Write a C++ program to implement exception handling through multiple blocks
// KDK College of Engineering, Nagpur
// B.Tech CSE, 2nd Year
// Author: Pranay Gajbhiye

#include <iostream>
using namespace std;

// Simple custom exception
class DivideByZero {
public:
    string message;
    DivideByZero(string msg) : message(msg) {}
};

class NegativeNumber {
public:
    string message;
    NegativeNumber(string msg) : message(msg) {}
};

// Simple calculator class
class Calculator {
public:
    static double divide(double a, double b) {
        if(b == 0) {
            throw DivideByZero("Cannot divide by zero!");
        }
        return a / b;
    }

    static double squareRoot(double num) {
        if(num < 0) {
            throw NegativeNumber("Cannot find square root of negative number!");
        }
        return sqrt(num);
    }

    static int getElement(int arr[], int size, int index) {
        if(index >= size || index < 0) {
            throw "Array index out of bounds!";
        }
        return arr[index];
    }
};

int main() {
    cout << "=== Exception Handling with Multiple Blocks ===" << endl;

    // Test 1: Division by zero
    cout << "\n1. Division by Zero:" << endl;
    try {
        double result = Calculator::divide(10, 0);
        cout << "Result: " << result << endl;
    }
    catch(DivideByZero& e) {
        cout << "Caught DivideByZero: " << e.message << endl;
    }
    catch(...) {
        cout << "Caught unknown exception" << endl;
    }

    // Test 2: Negative square root
    cout << "\n2. Negative Square Root:" << endl;
    try {
        double result = Calculator::squareRoot(-16);
        cout << "Result: " << result << endl;
    }
    catch(NegativeNumber& e) {
        cout << "Caught NegativeNumber: " << e.message << endl;
    }
    catch(...) {
        cout << "Caught unknown exception" << endl;
    }

    // Test 3: Array bounds
    cout << "\n3. Array Out of Bounds:" << endl;
    try {
        int arr[] = {1, 2, 3, 4, 5};
        int value = Calculator::getElement(arr, 5, 10);
        cout << "Value: " << value << endl;
    }
    catch(const char* e) {
        cout << "Caught string exception: " << e << endl;
    }
    catch(...) {
        cout << "Caught unknown exception" << endl;
    }

    // Test 4: Multiple catch blocks in one try
    cout << "\n4. Multiple Operations:" << endl;
    try {
        Calculator::divide(5, 0);  // This will throw
        Calculator::squareRoot(-9);  // This won't execute
    }
    catch(DivideByZero& e) {
        cout << "Division error: " << e.message << endl;
    }
    catch(NegativeNumber& e) {
        cout << "Math error: " << e.message << endl;
    }
    catch(...) {
        cout << "Unknown error occurred" << endl;
    }

    cout << "\n5. Successful Operations:" << endl;
    try {
        cout << "10 / 2 = " << Calculator::divide(10, 2) << endl;
        cout << "sqrt(16) = " << Calculator::squareRoot(16) << endl;

        int arr[] = {10, 20, 30};
        cout << "arr[1] = " << Calculator::getElement(arr, 3, 1) << endl;
    }
    catch(...) {
        cout << "Unexpected error" << endl;
    }

    return 0;
}