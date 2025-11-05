// Aim: Write a C++ program to implement custom exception classes
// KDK College of Engineering, Nagpur
// B.Tech CSE, 2nd Year
// Author: Pranay Gajbhiye

#include <iostream>
#include <exception>
using namespace std;

// Base custom exception class
class MyException : public exception {
protected:
    string message;
public:
    MyException(string msg) : message(msg) {}
    const char* what() const throw() {
        return message.c_str();
    }
};

// Specific custom exception classes
class DivideByZeroError : public MyException {
public:
    DivideByZeroError() : MyException("Division by zero not allowed!") {}
};

class NegativeNumberError : public MyException {
public:
    NegativeNumberError() : MyException("Negative number not allowed!") {}
};

class InvalidAgeError : public MyException {
    int age;
public:
    InvalidAgeError(int a) : MyException("Invalid age provided!"), age(a) {}
    int getAge() { return age; }
};

// Simple classes using custom exceptions
class Calculator {
public:
    static double divide(double a, double b) {
        if(b == 0) {
            throw DivideByZeroError();
        }
        return a / b;
    }

    static double squareRoot(double num) {
        if(num < 0) {
            throw NegativeNumberError();
        }
        return sqrt(num);
    }
};

class Person {
    string name;
    int age;
public:
    Person(string n, int a) : name(n) {
        if(a < 0 || a > 150) {
            throw InvalidAgeError(a);
        }
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    cout << "=== Custom Exception Classes ===" << endl;

    // Test 1: Division by zero
    cout << "\n1. Division Exception:" << endl;
    try {
        double result = Calculator::divide(10, 0);
        cout << "Result: " << result << endl;
    }
    catch(DivideByZeroError& e) {
        cout << "Error: " << e.what() << endl;
    }

    // Test 2: Negative square root
    cout << "\n2. Negative Number Exception:" << endl;
    try {
        double result = Calculator::squareRoot(-16);
        cout << "Result: " << result << endl;
    }
    catch(NegativeNumberError& e) {
        cout << "Error: " << e.what() << endl;
    }

    // Test 3: Invalid age
    cout << "\n3. Invalid Age Exception:" << endl;
    try {
        Person p1("John", 25);
        p1.display();

        Person p2("Invalid", -5);  // This will throw exception
        p2.display();
    }
    catch(InvalidAgeError& e) {
        cout << "Error: " << e.what() << endl;
        cout << "Invalid age was: " << e.getAge() << endl;
    }

    // Test 4: Catching base exception
    cout << "\n4. Base Exception Handling:" << endl;
    try {
        Calculator::divide(5, 0);
    }
    catch(MyException& e) {  // Catches any derived exception
        cout << "Caught MyException: " << e.what() << endl;
    }

    cout << "\n5. Successful Operations:" << endl;
    try {
        cout << "10 / 2 = " << Calculator::divide(10, 2) << endl;
        cout << "sqrt(16) = " << Calculator::squareRoot(16) << endl;

        Person p("Alice", 30);
        p.display();
    }
    catch(MyException& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}