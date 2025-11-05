# OOP Practicals Documentation (6-11)
**KDK College of Engineering, Nagpur**
**B.Tech CSE, 2nd Year**
**Author: Pranay Gajbhiye**

---

## Practical 6: Advanced Operator Overloading

### Aim
Write a C++ program to implement advanced operator overloading concepts including assignment, subscript, function call operators, and type conversion.

### Theory
Operator overloading allows us to redefine the behavior of operators for user-defined types. Advanced operators include:
- **Assignment Operator (=)**: Assigns one object to another
- **Subscript Operator ([])**: Provides array-like access
- **Function Call Operator (())**: Makes objects callable like functions
- **Type Conversion Operator**: Converts object to another type

### Algorithm
1. Create a Number class with private value member
2. Overload assignment operator to copy values between objects
3. Overload subscript operator to access individual digits
4. Overload function call operator to calculate power
5. Implement type conversion to int
6. Test all overloaded operators in main()

### Code
```cpp
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    // Assignment operator
    Number& operator=(const Number& n) {
        cout << "Assignment operator called" << endl;
        value = n.value;
        return *this;
    }

    // Subscript operator (returns digit at position)
    int operator[](int pos) {
        int temp = value;
        for(int i = 0; i < pos; i++) {
            temp /= 10;
        }
        return temp % 10;
    }

    // Function call operator (power function)
    int operator()(int exp) {
        int result = 1;
        for(int i = 0; i < exp; i++) {
            result *= value;
        }
        return result;
    }

    // Type conversion to int
    operator int() {
        return value;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(23);
    Number n2;
    n2 = n1;
    cout << "n1[0] = " << n1[0] << endl;
    cout << "n1(2) = " << n1(2) << endl;
    int x = n1;
    cout << "Converted: " << x << endl;
    return 0;
}
```

### Output
```
Assignment operator called
Value: 23
n1[0] (units digit) = 3
n1[1] (tens digit) = 2
n1(2) = 529
Converted to int: 23
```

### Result
Successfully implemented and demonstrated assignment, subscript, function call operators, and type conversion in C++.

---

## Practical 7: Types of Inheritance

### Aim
Write a C++ program to implement different types of inheritance: Single, Multilevel, Multiple, and Hierarchical.

### Theory
Inheritance allows a class to inherit properties from another class. Types:
- **Single**: Class inherits from one base class
- **Multilevel**: Class inherits from a derived class
- **Multiple**: Class inherits from multiple base classes
- **Hierarchical**: Multiple classes inherit from one base class

### Algorithm
1. Implement Single Inheritance: Dog inherits from Animal
2. Implement Multilevel Inheritance: SportsCar → Car → Vehicle
3. Implement Multiple Inheritance: Child inherits from Father and Mother
4. Implement Hierarchical Inheritance: Circle and Square inherit from Shape
5. Demonstrate each type with appropriate methods

### Code
```cpp
#include <iostream>
using namespace std;

// 1. SINGLE INHERITANCE
class Animal {
protected:
    string name;
public:
    Animal(string n) : name(n) {}
    void eat() { cout << name << " is eating" << endl; }
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}
    void bark() { cout << name << " is barking" << endl; }
};

// 2. MULTILEVEL INHERITANCE
class Vehicle {
protected:
    string brand;
public:
    Vehicle(string b) : brand(b) {}
    void start() { cout << brand << " started" << endl; }
};

class Car : public Vehicle {
public:
    Car(string b) : Vehicle(b) {}
    void drive() { cout << "Car is driving" << endl; }
};

class SportsCar : public Car {
public:
    SportsCar(string b) : Car(b) {}
    void turbo() { cout << "Turbo activated!" << endl; }
};

// 3. MULTIPLE INHERITANCE
class Father {
protected:
    string fname;
public:
    Father(string f) : fname(f) {}
    void showFather() { cout << "Father: " << fname << endl; }
};

class Mother {
protected:
    string mname;
public:
    Mother(string m) : mname(m) {}
    void showMother() { cout << "Mother: " << mname << endl; }
};

class Child : public Father, public Mother {
    string cname;
public:
    Child(string c, string f, string m) : Father(f), Mother(m), cname(c) {}
    void showFamily() {
        cout << "Child: " << cname << endl;
        showFather();
        showMother();
    }
};

// 4. HIERARCHICAL INHERITANCE
class Shape {
protected:
    int size;
public:
    Shape(int s) : size(s) {}
};

class Circle : public Shape {
public:
    Circle(int r) : Shape(r) {}
    void area() { cout << "Circle Area: " << 3.14 * size * size << endl; }
};

class Square : public Shape {
public:
    Square(int s) : Shape(s) {}
    void area() { cout << "Square Area: " << size * size << endl; }
};

int main() {
    Dog d("Buddy");
    d.eat();
    d.bark();

    SportsCar sc("Ferrari");
    sc.start();
    sc.turbo();

    Child c("Alice", "John", "Mary");
    c.showFamily();

    Circle circle(5);
    circle.area();

    return 0;
}
```

### Output
```
Buddy is eating
Buddy is barking
Ferrari started
Turbo activated!
Child: Alice
Father: John
Mother: Mary
Circle Area: 78.5
```

### Result
Successfully implemented and demonstrated all four types of inheritance in C++.

---

## Practical 8: Virtual and Friend Functions

### Aim
Write a C++ program to implement Virtual Functions for runtime polymorphism and Friend Functions for accessing private members.

### Theory
- **Virtual Functions**: Enable runtime polymorphism, allowing derived classes to override base class methods
- **Friend Functions**: Non-member functions that can access private and protected members of a class

### Algorithm
1. Create Animal base class with virtual sound() method
2. Create Dog and Cat derived classes that override sound()
3. Demonstrate runtime polymorphism using base class pointers
4. Create Box class with private dimensions
5. Declare friend functions to access private members
6. Test both concepts in main()

### Code
```cpp
#include <iostream>
using namespace std;

// VIRTUAL FUNCTIONS
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes sound" << endl;
    }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

// FRIEND FUNCTIONS
class Box {
private:
    int length, width, height;

public:
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    friend int calculateVolume(Box b);
    friend void displayBox(Box b);
};

int calculateVolume(Box b) {
    return b.length * b.width * b.height;
}

void displayBox(Box b) {
    cout << "Box: " << b.length << "x" << b.width << "x" << b.height << endl;
}

int main() {
    Animal* animals[3];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();

    for(int i = 0; i < 3; i++) {
        animals[i]->sound();
    }

    Box myBox(5, 3, 4);
    displayBox(myBox);
    cout << "Volume: " << calculateVolume(myBox) << endl;

    for(int i = 0; i < 3; i++) {
        delete animals[i];
    }

    return 0;
}
```

### Output
```
Dog barks
Cat meows
Dog barks
Box: 5x3x4
Volume: 60
```

### Result
Successfully implemented virtual functions for runtime polymorphism and friend functions for accessing private members.

---

## Practical 9: Function Overriding and Abstract Classes

### Aim
Write a C++ program to implement function overriding and abstract classes using pure virtual functions.

### Theory
- **Abstract Class**: Contains at least one pure virtual function (= 0), cannot be instantiated
- **Function Overriding**: Derived class provides its own implementation of base class virtual function
- **Pure Virtual Function**: Must be overridden in derived classes

### Algorithm
1. Create abstract Shape class with pure virtual area() function
2. Create Circle and Rectangle classes inheriting from Shape
3. Override pure virtual function in each derived class
4. Override display() virtual function
5. Demonstrate function overriding with Animal and Dog classes
6. Test polymorphism using base class pointers

### Code
```cpp
#include <iostream>
using namespace std;

// Abstract class
class Shape {
protected:
    string name;
public:
    Shape(string n) : name(n) {}

    // Pure virtual function
    virtual double area() = 0;

    virtual void display() {
        cout << "This is a " << name << endl;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : Shape("Circle"), radius(r) {}

    double area() override {
        return 3.14 * radius * radius;
    }

    void display() override {
        cout << "Circle with radius " << radius << endl;
    }
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : Shape("Rectangle"), length(l), width(w) {}

    double area() override {
        return length * width;
    }

    void display() override {
        cout << "Rectangle " << length << "x" << width << endl;
    }
};

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks: Woof!" << endl;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);

    for(int i = 0; i < 2; i++) {
        shapes[i]->display();
        cout << "Area: " << shapes[i]->area() << endl;
    }

    Animal* animals[2];
    animals[0] = new Animal();
    animals[1] = new Dog();

    for(int i = 0; i < 2; i++) {
        animals[i]->sound();
    }

    delete shapes[0];
    delete shapes[1];
    delete animals[0];
    delete animals[1];

    return 0;
}
```

### Output
```
Circle with radius 5
Area: 78.5
Rectangle 4x6
Area: 24
Animal makes sound
Dog barks: Woof!
```

### Result
Successfully implemented abstract classes with pure virtual functions and demonstrated function overriding.

---

## Practical 10: Exception Handling with Multiple Blocks

### Aim
Write a C++ program to implement exception handling through multiple try-catch blocks with custom exceptions.

### Theory
Exception handling provides a way to handle runtime errors gracefully:
- **try**: Block that may throw exceptions
- **catch**: Block that handles specific exception types
- **throw**: Keyword to raise an exception
- **Multiple catch blocks**: Handle different exception types

### Algorithm
1. Create custom exception classes: DivideByZero, NegativeNumber
2. Create Calculator class with methods that throw exceptions
3. Implement divide() method that throws on zero division
4. Implement squareRoot() method that throws on negative input
5. Implement array access with bounds checking
6. Demonstrate multiple catch blocks for different exceptions

### Code
```cpp
#include <iostream>
using namespace std;

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
    // Test 1: Division by zero
    try {
        double result = Calculator::divide(10, 0);
    }
    catch(DivideByZero& e) {
        cout << "Caught: " << e.message << endl;
    }

    // Test 2: Negative square root
    try {
        double result = Calculator::squareRoot(-16);
    }
    catch(NegativeNumber& e) {
        cout << "Caught: " << e.message << endl;
    }

    // Test 3: Array bounds
    try {
        int arr[] = {1, 2, 3, 4, 5};
        int value = Calculator::getElement(arr, 5, 10);
    }
    catch(const char* e) {
        cout << "Caught: " << e << endl;
    }

    // Successful operations
    try {
        cout << "10 / 2 = " << Calculator::divide(10, 2) << endl;
        cout << "sqrt(16) = " << Calculator::squareRoot(16) << endl;
    }
    catch(...) {
        cout << "Unexpected error" << endl;
    }

    return 0;
}
```

### Output
```
Caught: Cannot divide by zero!
Caught: Cannot find square root of negative number!
Caught: Array index out of bounds!
10 / 2 = 5
sqrt(16) = 4
```

### Result
Successfully implemented exception handling with multiple catch blocks for different exception types.

---

## Practical 11: Custom Exception Classes

### Aim
Write a C++ program to implement custom exception classes inheriting from std::exception.

### Theory
Custom exceptions provide meaningful error messages and type-safe error handling:
- **std::exception**: Base class for standard exceptions
- **what()**: Virtual function that returns error description
- **Exception Hierarchy**: Organize exceptions in inheritance tree
- **throw()**: Exception specification (deprecated in C++11 but still used)

### Algorithm
1. Create base MyException class inheriting from std::exception
2. Override what() method to return custom message
3. Create specific exception classes: DivideByZeroError, NegativeNumberError, InvalidAgeError
4. Implement Calculator class with methods throwing custom exceptions
5. Implement Person class with age validation
6. Demonstrate exception hierarchy and catching

### Code
```cpp
#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
protected:
    string message;
public:
    MyException(string msg) : message(msg) {}
    const char* what() const throw() {
        return message.c_str();
    }
};

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

class Calculator {
public:
    static double divide(double a, double b) {
        if(b == 0) throw DivideByZeroError();
        return a / b;
    }

    static double squareRoot(double num) {
        if(num < 0) throw NegativeNumberError();
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
    // Test 1: Division exception
    try {
        Calculator::divide(10, 0);
    }
    catch(DivideByZeroError& e) {
        cout << "Error: " << e.what() << endl;
    }

    // Test 2: Negative number exception
    try {
        Calculator::squareRoot(-16);
    }
    catch(NegativeNumberError& e) {
        cout << "Error: " << e.what() << endl;
    }

    // Test 3: Invalid age
    try {
        Person p1("John", 25);
        p1.display();
        Person p2("Invalid", -5);
    }
    catch(InvalidAgeError& e) {
        cout << "Error: " << e.what() << endl;
        cout << "Invalid age was: " << e.getAge() << endl;
    }

    // Test 4: Base exception handling
    try {
        Calculator::divide(5, 0);
    }
    catch(MyException& e) {
        cout << "Caught MyException: " << e.what() << endl;
    }

    return 0;
}
```

### Output
```
Error: Division by zero not allowed!
Error: Negative number not allowed!
Name: John, Age: 25
Error: Invalid age provided!
Invalid age was: -5
Caught MyException: Division by zero not allowed!
```

### Result
Successfully implemented custom exception classes with inheritance hierarchy and demonstrated exception handling using base and derived exception classes.

---

## Summary

This documentation covered six important OOP practicals:

1. **Practical 6**: Advanced operator overloading (=, [], (), type conversion)
2. **Practical 7**: Four types of inheritance (single, multilevel, multiple, hierarchical)
3. **Practical 8**: Virtual functions and friend functions
4. **Practical 9**: Function overriding and abstract classes
5. **Practical 10**: Multiple exception handling blocks
6. **Practical 11**: Custom exception classes with inheritance

All programs demonstrate key object-oriented programming concepts essential for C++ development.

---

**End of Documentation**
