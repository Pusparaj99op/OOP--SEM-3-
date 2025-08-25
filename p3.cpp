// Aim: Write a C++ program to implement a concept of function overloading?
// - Function overloading is a feature of OOP that allows multiple functions with the same name but different parameters. This aim involves implementing this concept.
// KDK College of Engineering, Nagpur
// B.Tech CSE, 2nd Year
// Author: Pranay Gajbhiye

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Calculator {
public:
    // Function overloading with different number of parameters
    int add(int a, int b) { cout << "Adding two integers: "; return a + b; }    
    int add(int a, int b, int c) { cout << "Adding three integers: "; return a + b + c; }  

    // Function overloading with different data types
    float add(float a, float b) { cout << "Adding two floats: "; return a + b; }  
    double add(double a, double b) { cout << "Adding two doubles: "; return a + b; }  

    // Function overloading for display
    void display(int value) { cout << "Displaying integer: " << value << endl; }    
    void display(float value) { cout << "Displaying float: " << value << endl; }    
    void display(string text) { cout << "Displaying string: " << text << endl; }   
    void display(char ch) { cout << "Displaying character: " << ch << endl; }           };

   // Function overloading outside class for area calculations
float area(float radius) { cout << "Calculating area of circle: "; return 3.14159 * radius * radius; }
float area(float length, float width) { cout << "Calculating area of rectangle: "; return length * width; }
float area(float a, float b, float c) { cout << "Calculating area of triangle (using Heron's formula): "; float s = (a + b + c) / 2; 
    return sqrt(s * (s - a) * (s - b) * (s - c));  }

int main() {
    cout << "=== Function Overloading Demonstration ===" << endl;
    cout << "KDK College of Engineering, Nagpur" << endl;
    cout << "B.Tech CSE, 2nd Year" << endl;
    cout << "Author: Pranay Gajbhiye\n" << endl;    

    Calculator calc;    
    // Testing function overloading with different parameters
    cout << "1. Function Overloading with Different Number of Parameters:" << endl;
    cout << calc.add(10, 20) << endl;
    cout << calc.add(10, 20, 30) << endl;    

    cout << "\n2. Function Overloading with Different Data Types:" << endl;
    cout << calc.add(15.5f, 25.3f) << endl;
    cout << calc.add(12.567, 23.789) << endl;    
    
    cout << "\n3. Display Function Overloading:" << endl;
    calc.display(100);
    calc.display(45.67f);
    calc.display("Hello World!");
    calc.display('A');    

    cout << "\n4. Area Calculation Function Overloading:" << endl;
    cout << area(5.0f) << " sq units" << endl;  // Circle
    cout << area(10.0f, 15.0f) << " sq units" << endl;  // Rectangle
    cout << area(3.0f, 4.0f, 5.0f) << " sq units" << endl;  // Triangle    
    cout << "\n=== Function Overloading Concepts Demonstrated ===" << endl;
    cout << "1. Same function name with different parameter types" << endl;
    cout << "2. Same function name with different number of parameters" << endl;
    cout << "3. Compiler determines which function to call based on arguments" << endl;
    cout << "4. This is compile-time polymorphism (Static Polymorphism)" << endl;    
    return 0;
}


