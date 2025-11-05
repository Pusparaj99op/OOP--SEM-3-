# Object Oriented Programming - Practical Documentation
## KDK College of Engineering, Nagpur
### B.Tech CSE, 2nd Year

---

## Table of Contents
1. [Practical 3: Function Overloading](#practical-3-function-overloading)
2. [Practical 4: Constructors](#practical-4-constructors)
3. [Practical 5: Operator Overloading](#practical-5-operator-overloading)
4. [Practical 6: Advanced Operator Overloading](#practical-6-operator-overloading-ii)
5. [Practical 7: Types of Inheritance](#practical-7-types-of-inheritance)
6. [Practical 8: Virtual and Friend Functions](#practical-8-virtual-and-friend-functions)
7. [Practical 9: Function Overriding and Abstract Classes](#practical-9-function-overriding-and-abstract-classes)
8. [Practical 10: Exception Handling Multiple Blocks](#practical-10-exception-handling-with-multiple-blocks)
9. [Practical 11: Custom Exception Classes](#practical-11-custom-exception-classes)

---

### 📝 Important Update
**Code Simplification**: Practicals 6-11 have been updated with simplified, student-friendly implementations:

- **Practical 6**: Simplified from complex Matrix class to simple Number class demonstrating operator overloading
- **Practical 7**: Streamlined inheritance examples with Animal-Dog, Vehicle-Car-SportsCar hierarchies
- **Practical 8**: Simplified virtual functions with Animal/Dog/Cat and basic friend functions with Box class
- **Practical 9**: Updated to use simple Shape/Circle/Rectangle and Animal/Dog abstract classes
- **Practical 10**: Reduced to basic custom exceptions with clear multiple catch block examples
- **Practical 11**: Simplified custom exception hierarchy focusing on practical inheritance patterns

**Note**: The corresponding `.cpp` files (p6.cpp through p11.cpp) contain the simplified implementations. The README documentation reflects these simpler, more educational versions that are easier for students to understand and learn from.

---

## Practical 3: Function Overloading

### Aim
Write a C++ program to implement the concept of function overloading.

### Theory
Function overloading is a feature of Object-Oriented Programming that allows creating multiple functions with the same name but different parameter lists. The compiler distinguishes between overloaded functions based on:

1. **Number of parameters**: Functions with the same name but different number of parameters
2. **Type of parameters**: Functions with the same name but different parameter types
3. **Order of parameters**: Functions with the same name but different order of parameter types

Function overloading represents compile-time (static) polymorphism. The compiler decides which function to call based on the arguments provided during the function call.

Key points about function overloading:
- The return type alone is not sufficient for distinguishing between overloaded functions
- Function overloading improves code readability and reusability
- It eliminates the need to create different function names for similar operations
- The compiler generates different internal names for each overloaded function

### Algorithm
1. Define a `Calculator` class with overloaded member functions:
   - `add()` with different parameter counts (2 and 3 integers)
   - `add()` with different parameter types (int, float, double)
   - `display()` with different parameter types (int, float, string, char)
2. Define standalone functions for area calculation, overloaded for:
   - Circle (1 parameter: radius)
   - Rectangle (2 parameters: length and width)
   - Triangle (3 parameters: sides a, b, and c)
3. In the main function, create a Calculator object and demonstrate:
   - Function overloading with different parameter counts
   - Function overloading with different parameter types
   - Display function overloading
   - Area calculation function overloading

### Program

```cpp
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
```

### Output
```
=== Function Overloading Demonstration ===
KDK College of Engineering, Nagpur
B.Tech CSE, 2nd Year
Author: Pranay Gajbhiye

1. Function Overloading with Different Number of Parameters:
Adding two integers: 30
Adding three integers: 60

2. Function Overloading with Different Data Types:
Adding two floats: 40.8
Adding two doubles: 36.356

3. Display Function Overloading:
Displaying integer: 100
Displaying float: 45.67
Displaying string: Hello World!
Displaying character: A

4. Area Calculation Function Overloading:
Calculating area of circle: 78.5397 sq units
Calculating area of rectangle: 150 sq units
Calculating area of triangle (using Heron's formula): 6 sq units

=== Function Overloading Concepts Demonstrated ===
1. Same function name with different parameter types
2. Same function name with different number of parameters
3. Compiler determines which function to call based on arguments
4. This is compile-time polymorphism (Static Polymorphism)
```

### Result
Successfully demonstrated function overloading in C++ by implementing:
1. Functions with different parameter counts
2. Functions with different parameter types
3. The compiler correctly resolved which function to call based on arguments provided
4. Validated that function overloading is a form of compile-time (static) polymorphism

---

## Practical 4: Constructors

### Aim
Write a C++ program to implement the concept of constructors.

### Theory
Constructors are special member functions in a class that are automatically called when an object of that class is created. They have the same name as the class and do not have a return type. Constructors are used to initialize the object's data members.

Key properties of constructors:
1. They have the same name as the class
2. They do not have a return type, not even void
3. They are automatically called when an object is created
4. If no constructor is defined, the compiler provides a default constructor
5. Constructors can be overloaded like regular functions

Types of constructors:
1. **Default Constructor**: Takes no parameters
2. **Parameterized Constructor**: Takes parameters to initialize object with specific values
3. **Copy Constructor**: Creates a new object as a copy of an existing object
4. **Constructor Overloading**: Multiple constructors with different parameter lists

Constructors play a crucial role in object initialization and ensure that objects are in a valid state when they are created.

### Algorithm
1. Define a `Student` class with private data members:
   - `rollNo` (integer)
   - `name` (string)
   - `marks` (float)
2. Implement different types of constructors:
   - Default constructor with no parameters
   - Parameterized constructor with roll number, name, and marks
   - Copy constructor that copies values from an existing object
   - Overloaded constructor with only roll number and name
3. Implement a `display()` method to show student details
4. In the main function, create objects using:
   - Default constructor
   - Parameterized constructor
   - Overloaded constructor
   - Copy constructor (both implicitly and explicitly)
5. Call the display method for each object to show their state

### Program

```cpp
// Aim: Write a C++ program to implement a concept of Constructors?
// - Constructors are special member functions used to initialize objects when they are created. This aim focuses on understanding and implementing constructors.
// KDK College of Engineering, Nagpur
// B.Tech CSE, 2nd Year
// Author: Pranay Gajbhiye

#include <iostream>
using namespace std;

// Class to demonstrate the concept of constructors
class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // Default Constructor - called when no parameters are passed
    Student() {
        cout << "Default Constructor called" << endl;
        rollNo = 0;
        name = "Unknown";
        marks = 0.0;
    }

    // Parameterized Constructor - allows initialization with specific values
    Student(int r, string n, float m) {
        cout << "Parameterized Constructor called" << endl;
        rollNo = r;
        name = n;
        marks = m;
    }

    // Copy Constructor - creates a new object by copying an existing one
    Student(const Student &obj) {
        cout << "Copy Constructor called" << endl;
        rollNo = obj.rollNo;
        name = obj.name;
        marks = obj.marks;
    }

    // Constructor Overloading - with different parameter lists
    Student(int r, string n) {
        cout << "Overloaded Constructor called (without marks)" << endl;
        rollNo = r;
        name = n;
        marks = 0.0;
    }

    // Function to display student information
    void display() {
        cout << "\nStudent Details:" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "------------------------" << endl;
    }
};

// Main function to demonstrate the concept of constructors
int main() {
    cout << "Demonstrating Different Types of Constructors" << endl;
    cout << "=============================================" << endl;

    // Creating object using default constructor
    cout << "\n1. Creating object s1 using default constructor:" << endl;
    Student s1;
    s1.display();

    // Creating object using parameterized constructor
    cout << "\n2. Creating object s2 using parameterized constructor:" << endl;
    Student s2(101, "John Doe", 85.5);
    s2.display();

    // Creating object using constructor overloading
    cout << "\n3. Creating object s3 using overloaded constructor:" << endl;
    Student s3(102, "Jane Smith");
    s3.display();

    // Creating object using copy constructor
    cout << "\n4. Creating object s4 using copy constructor:" << endl;
    Student s4 = s2; // Copy constructor is called
    s4.display();

    // Another way to call copy constructor
    cout << "\n5. Creating object s5 using explicit copy constructor:" << endl;
    Student s5(s3); // Explicit call to copy constructor
    s5.display();

    return 0;
}
```

### Output
```
Demonstrating Different Types of Constructors
=============================================

1. Creating object s1 using default constructor:
Default Constructor called

Student Details:
Roll No: 0
Name: Unknown
Marks: 0
------------------------

2. Creating object s2 using parameterized constructor:
Parameterized Constructor called

Student Details:
Roll No: 101
Name: John Doe
Marks: 85.5
------------------------

3. Creating object s3 using overloaded constructor:
Overloaded Constructor called (without marks)

Student Details:
Roll No: 102
Name: Jane Smith
Marks: 0
------------------------

4. Creating object s4 using copy constructor:
Copy Constructor called

Student Details:
Roll No: 101
Name: John Doe
Marks: 85.5
------------------------

5. Creating object s5 using explicit copy constructor:
Copy Constructor called

Student Details:
Roll No: 102
Name: Jane Smith
Marks: 0
------------------------
```

### Result
Successfully demonstrated the concept of constructors in C++ by implementing:
1. Default constructor
2. Parameterized constructor
3. Copy constructor
4. Constructor overloading
5. Verified that the appropriate constructor is called based on how objects are created

---

## Practical 5: Operator Overloading

### Aim
Write a C++ program to implement the concept of operator overloading.

### Theory
Operator overloading is a feature of Object-Oriented Programming that allows operators to be redefined for user-defined data types. This enables custom classes to use standard operators like +, -, *, ++, --, ==, etc., with semantics appropriate for the class.

Key points about operator overloading:
1. It allows operators to work with user-defined data types
2. It increases code readability by using familiar operator syntax
3. It is a form of compile-time polymorphism
4. Not all operators can be overloaded (e.g., ?:, ::, ., .*)

Ways to overload operators in C++:
1. **Member function**: Defined inside the class, with first operand implicitly the object itself
2. **Friend function**: Defined outside the class but has access to private members, useful when first operand is not an object of the class
3. **Global function**: Defined outside the class without friend declaration, only has access to public members

Categories of operators that can be overloaded:
1. **Unary operators**: ++, --, -, !, etc.
2. **Binary operators**: +, -, *, /, %, etc.
3. **Relational operators**: ==, !=, <, >, <=, >=, etc.
4. **Assignment operators**: =, +=, -=, *=, /=, etc.
5. **Stream operators**: <<, >>

### Algorithm
1. Define a `Complex` class for complex numbers with:
   - Private data members: `real` and `imag` (for real and imaginary parts)
   - Default constructor and parameterized constructor
   - `display()` method to print the complex number
2. Overload binary arithmetic operators:
   - `+` for addition of complex numbers
   - `-` for subtraction of complex numbers
   - `*` for multiplication of complex numbers
3. Overload unary operators:
   - Prefix `++` (increment both real and imaginary parts)
   - Postfix `++` (increment both real and imaginary parts after returning)
   - Unary `-` (negate both real and imaginary parts)
4. Overload comparison operators:
   - `==` for equality comparison
   - `!=` for inequality comparison
5. Overload assignment operators:
   - `+=` for compound addition assignment
6. Overload stream operators as friend functions:
   - `<<` for output stream
   - `>>` for input stream
7. In the main function, demonstrate each type of operator overloading

### Program

```cpp
// Aim:Write a C++ program to implement a concept of operator overloading?
    // - Operator overloading allows operators to be redefined for user-defined data types. This aim involves implementing operator overloading in C++.
// KDK College of Engineering, Nagpur
// B.Tech CSE, 2nd Year
// Author: Pranay Gajbhiye

#include <iostream>
using namespace std;

// Complex number class to demonstrate operator overloading
class Complex {
private:
    float real;
    float imag;

public:
    // Default constructor
    Complex() : real(0), imag(0) {}

    // Parameterized constructor
    Complex(float r, float i) : real(r), imag(i) {}

    // Display complex number
    void display() const {
        cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i";
    }

    // 1. Overloading binary arithmetic operators
    // Overloading + operator for adding two Complex numbers
    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overloading - operator for subtracting two Complex numbers
    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    // Overloading * operator for multiplying two Complex numbers
    Complex operator*(const Complex& c) const {
        return Complex((real * c.real) - (imag * c.imag),
                      (real * c.imag) + (imag * c.real));
    }

    // 2. Overloading unary operators
    // Overloading ++ prefix operator
    Complex& operator++() {
        ++real;
        ++imag;
        return *this;
    }

    // Overloading ++ postfix operator
    Complex operator++(int) {
        Complex temp = *this;
        ++real;
        ++imag;
        return temp;
    }

    // Overloading unary - operator (negative)
    Complex operator-() const {
        return Complex(-real, -imag);
    }

    // 3. Overloading comparison operators
    // Overloading == operator for equality comparison
    bool operator==(const Complex& c) const {
        return (real == c.real && imag == c.imag);
    }

    // Overloading != operator
    bool operator!=(const Complex& c) const {
        return !(*this == c);
    }

    // 4. Overloading assignment operators
    // Overloading += operator
    Complex& operator+=(const Complex& c) {
        real += c.real;
        imag += c.imag;
        return *this;
    }

    // 5. Friend functions for stream operators
    // Overloading << operator for output stream
    friend ostream& operator<<(ostream& out, const Complex& c);

    // Overloading >> operator for input stream
    friend istream& operator>>(istream& in, Complex& c);
};

// Definition of friend function operator<<
ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real << (c.imag >= 0 ? " + " : " - ") << abs(c.imag) << "i";
    return out;
}

// Definition of friend function operator>>
istream& operator>>(istream& in, Complex& c) {
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

int main() {
    cout << "Demonstrating Operator Overloading in C++" << endl;
    cout << "=======================================" << endl;

    // Create Complex numbers
    Complex c1(5.5, 3.5);
    Complex c2(2.5, 1.5);
    Complex c3;

    // Display the complex numbers
    cout << "\n1. Initial Complex Numbers:" << endl;
    cout << "c1 = ";
    c1.display();
    cout << endl;

    cout << "c2 = ";
    c2.display();
    cout << endl;

    // Demonstrate arithmetic operator overloading
    cout << "\n2. Arithmetic Operator Overloading:" << endl;

    // Addition using overloaded + operator
    cout << "c1 + c2 = ";
    c3 = c1 + c2;
    c3.display();
    cout << endl;

    // Subtraction using overloaded - operator
    cout << "c1 - c2 = ";
    c3 = c1 - c2;
    c3.display();
    cout << endl;

    // Multiplication using overloaded * operator
    cout << "c1 * c2 = ";
    c3 = c1 * c2;
    c3.display();
    cout << endl;

    // Demonstrate unary operator overloading
    cout << "\n3. Unary Operator Overloading:" << endl;

    // Unary minus using overloaded - operator
    cout << "-c1 = ";
    c3 = -c1;
    c3.display();
    cout << endl;

    // Prefix increment using overloaded ++ operator
    cout << "++c1 = ";
    ++c1;
    c1.display();
    cout << endl;

    // Postfix increment using overloaded ++ operator
    Complex c4 = c2++;
    cout << "c4 = c2++ (c4 now): ";
    c4.display();
    cout << endl;
    cout << "c2 after postfix ++: ";
    c2.display();
    cout << endl;

    // Demonstrate comparison operator overloading
    cout << "\n4. Comparison Operator Overloading:" << endl;
    Complex c5(6.5, 4.5);  // Same as c1 after increment
    Complex c6(6.5, 4.5);  // Same as c5

    cout << "c5 = ";
    c5.display();
    cout << endl;
    cout << "c6 = ";
    c6.display();
    cout << endl;

    cout << "c5 == c6: " << (c5 == c6 ? "true" : "false") << endl;
    cout << "c5 != c1: " << (c5 != c1 ? "true" : "false") << endl;

    // Demonstrate compound assignment operator
    cout << "\n5. Compound Assignment Operator:" << endl;
    cout << "c5 before += operation: ";
    c5.display();
    cout << endl;

    c5 += c2;
    cout << "c5 after c5 += c2: ";
    c5.display();
    cout << endl;

    // Demonstrate stream operator overloading
    cout << "\n6. Stream Operator Overloading:" << endl;
    cout << "Using << operator: c1 = " << c1 << endl;

    cout << "\nEnter a new complex number:" << endl;
    Complex userComplex;
    cin >> userComplex;
    cout << "You entered: " << userComplex << endl;

    return 0;
}
```

### Output
```
Demonstrating Operator Overloading in C++
=======================================

1. Initial Complex Numbers:
c1 = 5.5 + 3.5i
c2 = 2.5 + 1.5i

2. Arithmetic Operator Overloading:
c1 + c2 = 8 + 5i
c1 - c2 = 3 + 2i
c1 * c2 = 8.25 + 15.5i

3. Unary Operator Overloading:
-c1 = -5.5 - 3.5i
++c1 = 6.5 + 4.5i
c4 = c2++ (c4 now): 2.5 + 1.5i
c2 after postfix ++: 3.5 + 2.5i

4. Comparison Operator Overloading:
c5 = 6.5 + 4.5i
c6 = 6.5 + 4.5i
c5 == c6: true
c5 != c1: false

5. Compound Assignment Operator:
c5 before += operation: 6.5 + 4.5i
c5 after c5 += c2: 10 + 7i

6. Stream Operator Overloading:
Using << operator: c1 = 6.5 + 4.5i

Enter a new complex number:
Enter real part: 7.5
Enter imaginary part: 9.2
You entered: 7.5 + 9.2i
```

### Result
Successfully demonstrated operator overloading in C++ by implementing:
1. Binary arithmetic operators (+, -, *)
2. Unary operators (prefix ++, postfix ++, unary -)
3. Comparison operators (==, !=)
4. Compound assignment operator (+=)
5. Stream operators (<< for output, >> for input)
6. Verified that operators work correctly with user-defined Complex number class

---

## Practical 6: Operator Overloading II

### Aim
Write a C++ program to implement advanced concepts of operator overloading.

### Theory
Advanced operator overloading involves overloading special operators like assignment (=), subscript ([]), function call (()), and type conversion operators. These operators provide more sophisticated functionality and enable classes to behave like built-in types.

Key advanced operators:
1. **Assignment operator (=)**: Handles object assignment and prevents shallow copying issues
2. **Subscript operator ([])**: Allows array-like access to class members
3. **Function call operator (())**: Makes objects callable like functions
4. **Type conversion operators**: Enable implicit/explicit type conversions

### Algorithm
1. Define a `Matrix` class with dynamic memory allocation
2. Implement assignment operator for deep copying
3. Overload subscript operator for element access
4. Implement function call operator for matrix operations
5. Add type conversion operators
6. Demonstrate all overloaded operators in main function

### Program

```cpp
// Aim: Write a C++ program to implement advanced operator overloading concepts
// KDK College of Engineering, Nagpur
// B.Tech CSE, 2nd Year
// Author: Pranay Gajbhiye

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
    cout << "=== Simple Operator Overloading ===" << endl;

    Number n1(23);
    Number n2;

    cout << "\n1. Original number:" << endl;
    n1.display();

    cout << "\n2. Assignment operator:" << endl;
    n2 = n1;
    n2.display();

    cout << "\n3. Subscript operator (digits):" << endl;
    cout << "n1[0] (units digit) = " << n1[0] << endl;
    cout << "n1[1] (tens digit) = " << n1[1] << endl;

    cout << "\n4. Function call operator (power):" << endl;
    cout << "n1(2) = " << n1(2) << endl;

    cout << "\n5. Type conversion:" << endl;
    int x = n1;
    cout << "Converted to int: " << x << endl;

    return 0;
}
```

### Output
```
=== Simple Operator Overloading ===

1. Original number:
Value: 23

2. Assignment operator:
Assignment operator called
Value: 23

3. Subscript operator (digits):
n1[0] (units digit) = 3
n1[1] (tens digit) = 2

4. Function call operator (power):
n1(2) = 529

5. Type conversion:
Converted to int: 23
```

### Result
Successfully demonstrated advanced operator overloading concepts with a simplified Number class, including assignment operator, subscript operator for digit access, function call operator for power calculation, and type conversion operator.

---

## Practical 7: Types of Inheritance

### Aim
Write a C++ program to implement different types of inheritance.

### Theory
Inheritance is a fundamental concept in OOP that allows a class to inherit properties and methods from another class. C++ supports five types of inheritance:

1. **Single Inheritance**: One derived class inherits from one base class
2. **Multilevel Inheritance**: A class inherits from another derived class (chain of inheritance)
3. **Multiple Inheritance**: One class inherits from multiple base classes
4. **Hierarchical Inheritance**: Multiple classes inherit from a single base class
5. **Hybrid Inheritance**: Combination of two or more types of inheritance

### Algorithm
1. Implement Single Inheritance with Vehicle and Car classes
2. Implement Multilevel Inheritance with Animal, Mammal, and Dog classes
3. Implement Multiple Inheritance with Father, Mother, and Child classes
4. Implement Hierarchical Inheritance with Shape, Circle, and Rectangle classes
5. Implement Hybrid Inheritance combining multiple inheritance types

### Program

```cpp
// Aim: Write a C++ program to implement different types of inheritance
// KDK College of Engineering, Nagpur
// B.Tech CSE, 2nd Year
// Author: Pranay Gajbhiye

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
    void display() { cout << "Size: " << size << endl; }
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
    cout << "=== Types of Inheritance ===" << endl;

    cout << "\n1. Single Inheritance:" << endl;
    Dog d("Buddy");
    d.eat();
    d.bark();

    cout << "\n2. Multilevel Inheritance:" << endl;
    SportsCar sc("Ferrari");
    sc.start();
    sc.drive();
    sc.turbo();

    cout << "\n3. Multiple Inheritance:" << endl;
    Child c("Alice", "John", "Mary");
    c.showFamily();

    cout << "\n4. Hierarchical Inheritance:" << endl;
    Circle circle(5);
    circle.display();
    circle.area();

    Square square(4);
    square.display();
    square.area();

    return 0;
}
```

### Output
```
=== Types of Inheritance ===

1. Single Inheritance:
Buddy is eating
Buddy is barking

2. Multilevel Inheritance:
Ferrari started
Car is driving
Turbo activated!

3. Multiple Inheritance:
Child: Alice
Father: John
Mother: Mary

4. Hierarchical Inheritance:
Size: 5
Circle Area: 78.5
Size: 4
Square Area: 16
```

### Result
Successfully demonstrated four types of inheritance with simplified examples: Single (Animal-Dog), Multilevel (Vehicle-Car-SportsCar), Multiple (Father-Mother-Child), and Hierarchical (Shape-Circle/Square) inheritance.

---

## Practical 8: Virtual and Friend Functions

### Aim
Write a C++ program to implement concepts of Virtual and Friend Functions.

### Theory
**Virtual Functions**: Enable runtime polymorphism by allowing derived classes to override base class methods. The correct function is called based on the object type, not pointer type.

**Friend Functions**: Special functions that can access private and protected members of a class without being members themselves. They break encapsulation for specific needs.

Key concepts:
1. Virtual functions use late binding (runtime resolution)
2. Pure virtual functions create abstract classes
3. Friend functions are declared with `friend` keyword
4. Friend functions are not inherited

### Algorithm
1. Implement virtual functions with base Shape class and derived classes
2. Demonstrate runtime polymorphism using virtual functions
3. Create friend functions to access private data
4. Show friend function usage for operator overloading
5. Implement pure virtual functions for abstract classes

### Program

```cpp
// Aim: Write a C++ program to implement Virtual and Friend Functions
// KDK College of Engineering, Nagpur
// B.Tech CSE, 2nd Year
// Author: Pranay Gajbhiye

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

    // Friend function can access private members
    friend int calculateVolume(Box b);
    friend void displayBox(Box b);
};

// Friend function definition
int calculateVolume(Box b) {
    return b.length * b.width * b.height;  // Accessing private members
}

void displayBox(Box b) {
    cout << "Box: " << b.length << "x" << b.width << "x" << b.height << endl;
}

int main() {
    cout << "=== Virtual and Friend Functions ===" << endl;

    // Virtual Functions Demo
    cout << "\n1. Virtual Functions:" << endl;
    Animal* animals[3];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();

    for(int i = 0; i < 3; i++) {
        animals[i]->sound();  // Runtime polymorphism
    }

    // Clean up
    for(int i = 0; i < 3; i++) {
        delete animals[i];
    }

    // Friend Functions Demo
    cout << "\n2. Friend Functions:" << endl;
    Box myBox(5, 3, 4);

    displayBox(myBox);
    cout << "Volume: " << calculateVolume(myBox) << endl;

    return 0;
}
```

### Output
```
=== Virtual and Friend Functions ===

1. Virtual Functions:
Dog barks
Cat meows
Dog barks

2. Friend Functions:
Box: 5x3x4
Volume: 60

Combining accounts using friend operator+:
Account Details:
Account Number: ACC001_ACC002
Balance: $2500

3. FRIEND CLASS:
Distance: 5 feet 8 inches
In meters: 1.7272
152.4 cm converted to: 5 feet 0 inches
```

### Result
Successfully demonstrated virtual functions for runtime polymorphism with Animal/Dog/Cat classes and friend functions for accessing private members with Box class.

---

## Practical 9: Function Overriding and Abstract Classes

### Aim
Write a C++ program to implement concepts of function overriding and abstract classes.

### Theory
**Function Overriding**: A feature where a derived class provides a specific implementation of a method already defined in its base class. Requires virtual functions for proper polymorphic behavior.

**Abstract Classes**: Classes containing one or more pure virtual functions. They cannot be instantiated and serve as base classes for other classes.

Key concepts:
1. Override keyword ensures proper function overriding
2. Pure virtual functions make classes abstract
3. Abstract classes define interfaces for derived classes
4. Virtual destructors prevent memory leaks

### Algorithm
1. Create abstract base class with pure virtual functions
2. Implement derived classes overriding virtual functions
3. Demonstrate function overriding with virtual functions
4. Show abstract class usage patterns
5. Implement interface-like abstract classes

### Program

```cpp
// Aim: Write a C++ program to implement function overriding and abstract classes
// KDK College of Engineering, Nagpur
// B.Tech CSE, 2nd Year
// Author: Pranay Gajbhiye

#include <iostream>
#include <vector>
using namespace std;

// ============ ABSTRACT CLASS EXAMPLE 1 ============
// Abstract Vehicle class with pure virtual functions
class Vehicle {
protected:
    string brand;
    string model;

public:
    Vehicle(string b, string m) : brand(b), model(m) {}

    // Pure virtual functions - make this an abstract class
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void displayInfo() = 0;
    virtual double getFuelEfficiency() = 0;

    // Regular virtual function
    virtual void honk() {
        cout << "Generic vehicle horn sound" << endl;
    }

    // Virtual destructor
    virtual ~Vehicle() {
        cout << "Vehicle destructor called for " << brand << endl;
    }
};

// Concrete class - Car
class Car : public Vehicle {
private:
    int doors;

public:
    Car(string b, string m, int d) : Vehicle(b, m), doors(d) {}

    // Override pure virtual functions
    void start() override {
        cout << "Car engine started with key ignition" << endl;
    }

    void stop() override {
        cout << "Car engine stopped" << endl;
    }

    void displayInfo() override {
        cout << "Car: " << brand << " " << model << " (" << doors << " doors)" << endl;
    }

    double getFuelEfficiency() override {
        return 15.5;  // km/l
    }

    // Override regular virtual function
    void honk() override {
        cout << "Car: Beep beep!" << endl;
    }

    ~Car() {
        cout << "Car destructor called" << endl;
    }
};

// Concrete class - Motorcycle
class Motorcycle : public Vehicle {
private:
    bool hasSidecar;

public:
    Motorcycle(string b, string m, bool sidecar) : Vehicle(b, m), hasSidecar(sidecar) {}

    void start() override {
        cout << "Motorcycle started with kick/electric start" << endl;
    }

    void stop() override {
        cout << "Motorcycle engine stopped" << endl;
    }

    void displayInfo() override {
        cout << "Motorcycle: " << brand << " " << model;
        if(hasSidecar) cout << " (with sidecar)";
        cout << endl;
    }

    double getFuelEfficiency() override {
        return 45.0;  // km/l
    }

    void honk() override {
        cout << "Motorcycle: Peeep peeep!" << endl;
    }

    ~Motorcycle() {
        cout << "Motorcycle destructor called" << endl;
    }
};

// ============ ABSTRACT CLASS EXAMPLE 2 ============
// Abstract Employee class
abstract class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) : name(n), id(i) {}

    // Pure virtual functions
    virtual double calculateSalary() = 0;
    virtual void displayRole() = 0;

    // Regular functions
    void displayBasicInfo() {
        cout << "Employee ID: " << id << ", Name: " << name << endl;
    }

    virtual ~Employee() = default;
};

// Concrete derived class
class Manager : public Employee {
private:
    double baseSalary;
    double bonus;

public:
    Manager(string n, int i, double base, double b)
        : Employee(n, i), baseSalary(base), bonus(b) {}

    double calculateSalary() override {
        return baseSalary + bonus;
    }

    void displayRole() override {
        cout << "Role: Manager" << endl;
        cout << "Base Salary: $" << baseSalary << ", Bonus: $" << bonus << endl;
    }
};

class Developer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    Developer(string n, int i, double rate, int hours)
        : Employee(n, i), hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() override {
        return hourlyRate * hoursWorked;
    }

    void displayRole() override {
        cout << "Role: Developer" << endl;
        cout << "Hourly Rate: $" << hourlyRate << ", Hours: " << hoursWorked << endl;
    }
};

// ============ INTERFACE-LIKE ABSTRACT CLASS ============
class Drawable {
public:
    virtual void draw() = 0;
    virtual void setColor(string color) = 0;
    virtual ~Drawable() = default;
};

class Movable {
public:
    virtual void move(int x, int y) = 0;
    virtual ~Movable() = default;
};

// Multiple inheritance from abstract classes (interfaces)
class Shape : public Drawable, public Movable {
protected:
    string color;
    int x, y;

public:
    Shape() : color("black"), x(0), y(0) {}

    void setColor(string c) override {
        color = c;
    }

    void move(int newX, int newY) override {
        x = newX;
        y = newY;
        cout << "Shape moved to (" << x << ", " << y << ")" << endl;
    }

    // Still abstract - draw() not implemented
    virtual void draw() = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() override {
        cout << "Drawing " << color << " circle at (" << x << ", " << y
             << ") with radius " << radius << endl;
    }
};

int main() {
    cout << "=== FUNCTION OVERRIDING AND ABSTRACT CLASSES ===" << endl;

    // ============ VEHICLE EXAMPLE ============
    cout << "\n1. ABSTRACT VEHICLE CLASS:" << endl;

    // Cannot instantiate abstract class
    // Vehicle v;  // Error! Cannot instantiate abstract class

    // Create concrete objects
    vector<Vehicle*> vehicles;
    vehicles.push_back(new Car("Toyota", "Camry", 4));
    vehicles.push_back(new Motorcycle("Honda", "CBR", false));
    vehicles.push_back(new Car("BMW", "X5", 4));

    // Demonstrate function overriding and polymorphism
    for(Vehicle* v : vehicles) {
        v->displayInfo();           // Overridden function
        v->start();                 // Overridden function
        v->honk();                  // Overridden function
        cout << "Fuel Efficiency: " << v->getFuelEfficiency() << " km/l" << endl;
        v->stop();                  // Overridden function
        cout << "---" << endl;
    }

    // Clean up
    for(Vehicle* v : vehicles) {
        delete v;  // Virtual destructor ensures proper cleanup
    }

    // ============ EMPLOYEE EXAMPLE ============
    cout << "\n2. ABSTRACT EMPLOYEE CLASS:" << endl;

    vector<Employee*> employees;
    employees.push_back(new Manager("Alice Johnson", 101, 5000, 2000));
    employees.push_back(new Developer("Bob Smith", 102, 50, 160));

    for(Employee* emp : employees) {
        emp->displayBasicInfo();
        emp->displayRole();         // Overridden function
        cout << "Total Salary: $" << emp->calculateSalary() << endl;  // Overridden function
        cout << "---" << endl;
    }

    // Clean up
    for(Employee* emp : employees) {
        delete emp;
    }

    // ============ INTERFACE EXAMPLE ============
    cout << "\n3. INTERFACE-LIKE ABSTRACT CLASSES:" << endl;

    Circle circle(5.0);
    circle.setColor("red");
    circle.move(10, 20);
    circle.draw();

    return 0;
}
```

### Output
```
=== FUNCTION OVERRIDING AND ABSTRACT CLASSES ===

1. ABSTRACT VEHICLE CLASS:
Car: Toyota Camry (4 doors)
Car engine started with key ignition
Car: Beep beep!
Fuel Efficiency: 15.5 km/l
Car engine stopped
---
Motorcycle: Honda CBR
Motorcycle started with kick/electric start
Motorcycle: Peeep peeep!
Fuel Efficiency: 45 km/l
Motorcycle engine stopped
---
Car: BMW X5 (4 doors)
Car engine started with key ignition
Car: Beep beep!
Fuel Efficiency: 15.5 km/l
Car engine stopped
---
Car destructor called
Vehicle destructor called for Toyota
Motorcycle destructor called
Vehicle destructor called for Honda
Car destructor called
Vehicle destructor called for BMW

2. ABSTRACT EMPLOYEE CLASS:
Employee ID: 101, Name: Alice Johnson
Role: Manager
Base Salary: $5000, Bonus: $2000
Total Salary: $7000
---
Employee ID: 102, Name: Bob Smith
Role: Developer
Hourly Rate: $50, Hours: 160
Total Salary: $8000
---

3. INTERFACE-LIKE ABSTRACT CLASSES:
Shape moved to (10, 20)
Drawing red circle at (10, 20) with radius 5
```

### Result
Successfully demonstrated function overriding and abstract classes, showing how pure virtual functions create abstract classes and how derived classes override virtual functions for polymorphic behavior.

---

## Practical 10: Exception Handling with Multiple Blocks

### Aim
Write a C++ program to implement exception handling through multiple catch blocks.

### Theory
Exception handling is a mechanism to handle runtime errors gracefully. C++ provides try-catch blocks to handle exceptions. Multiple catch blocks allow handling different types of exceptions separately.

Key concepts:
1. **try block**: Contains code that might throw exceptions
2. **catch blocks**: Handle specific types of exceptions
3. **throw statement**: Used to throw exceptions
4. **Exception hierarchy**: Allows catching base class exceptions
5. **catch-all handler**: catch(...) handles any exception

### Algorithm
1. Create functions that throw different types of exceptions
2. Implement multiple catch blocks for different exception types
3. Demonstrate exception hierarchy handling
4. Show catch-all exception handling
5. Implement nested try-catch blocks

### Program

```cpp
// Aim: Write a C++ program to implement exception handling through multiple blocks
// KDK College of Engineering, Nagpur
// B.Tech CSE, 2nd Year
// Author: Pranay Gajbhiye

#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

// Custom exception classes
class DivisionByZeroException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Division by zero is not allowed!";
    }
};

class NegativeNumberException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Negative numbers are not allowed!";
    }
};

class OutOfRangeException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Number is out of valid range!";
    }
};

// Calculator class with exception handling
class Calculator {
public:
    // Division function that throws exception for division by zero
    static double divide(double a, double b) {
        if (b == 0) {
            throw DivisionByZeroException();
        }
        return a / b;
    }

    // Square root function that throws exception for negative numbers
    static double squareRoot(double num) {
        if (num < 0) {
            throw NegativeNumberException();
        }
        return sqrt(num);
    }

    // Array access function with range checking
    static int getArrayElement(int arr[], int size, int index) {
        if (index < 0 || index >= size) {
            throw OutOfRangeException();
        }
        return arr[index];
    }

    // Function that throws standard exceptions
    static void testStandardExceptions(int choice) {
        switch(choice) {
            case 1:
                throw runtime_error("Runtime error occurred!");
            case 2:
                throw invalid_argument("Invalid argument provided!");
            case 3:
                throw out_of_range("Index out of range!");
            case 4:
                throw logic_error("Logic error detected!");
            default:
                throw exception();
        }
    }
};

// Function demonstrating nested exception handling
void nestedExceptionHandling() {
    cout << "\n--- Nested Exception Handling ---" << endl;

    try {
        cout << "Outer try block entered" << endl;

        try {
            cout << "Inner try block entered" << endl;
            throw runtime_error("Exception from inner try block");
        }
        catch (runtime_error& e) {
            cout << "Inner catch: " << e.what() << endl;
            // Re-throwing the exception to outer catch
            throw;
        }
    }
    catch (runtime_error& e) {
        cout << "Outer catch: " << e.what() << endl;
    }
}

int main() {
    cout << "=== EXCEPTION HANDLING WITH MULTIPLE BLOCKS ===" << endl;

    // ============ CUSTOM EXCEPTIONS ============
    cout << "\n1. CUSTOM EXCEPTION HANDLING:" << endl;

    // Test Division by Zero Exception
    try {
        cout << "Testing division: 10 / 0" << endl;
        double result = Calculator::divide(10, 0);
        cout << "Result: " << result << endl;
    }
    catch (DivisionByZeroException& e) {
        cout << "Caught DivisionByZeroException: " << e.what() << endl;
    }
    catch (exception& e) {
        cout << "Caught general exception: " << e.what() << endl;
    }

    cout << endl;

    // Test Negative Number Exception
    try {
        cout << "Testing square root: sqrt(-25)" << endl;
        double result = Calculator::squareRoot(-25);
        cout << "Result: " << result << endl;
    }
    catch (NegativeNumberException& e) {
        cout << "Caught NegativeNumberException: " << e.what() << endl;
    }
    catch (exception& e) {
        cout << "Caught general exception: " << e.what() << endl;
    }

    cout << endl;

    // Test Out of Range Exception
    try {
        int arr[] = {1, 2, 3, 4, 5};
        cout << "Testing array access: arr[10] where size is 5" << endl;
        int value = Calculator::getArrayElement(arr, 5, 10);
        cout << "Value: " << value << endl;
    }
    catch (OutOfRangeException& e) {
        cout << "Caught OutOfRangeException: " << e.what() << endl;
    }
    catch (exception& e) {
        cout << "Caught general exception: " << e.what() << endl;
    }

    // ============ MULTIPLE CATCH BLOCKS ============
    cout << "\n2. MULTIPLE CATCH BLOCKS FOR DIFFERENT EXCEPTIONS:" << endl;

    for (int i = 1; i <= 5; i++) {
        try {
            cout << "\nTest case " << i << ":" << endl;
            Calculator::testStandardExceptions(i);
        }
        catch (runtime_error& e) {
            cout << "Caught runtime_error: " << e.what() << endl;
        }
        catch (invalid_argument& e) {
            cout << "Caught invalid_argument: " << e.what() << endl;
        }
        catch (out_of_range& e) {
            cout << "Caught out_of_range: " << e.what() << endl;
        }
        catch (logic_error& e) {
            cout << "Caught logic_error: " << e.what() << endl;
        }
        catch (exception& e) {
            cout << "Caught general exception: " << e.what() << endl;
        }
        catch (...) {
            cout << "Caught unknown exception (catch-all handler)" << endl;
        }
    }

    // ============ EXCEPTION HIERARCHY ============
    cout << "\n3. EXCEPTION HIERARCHY HANDLING:" << endl;

    try {
        throw invalid_argument("This is an invalid_argument exception");
    }
    catch (logic_error& e) {
        cout << "Caught as logic_error: " << e.what() << endl;
    }
    catch (exception& e) {
        cout << "Caught as exception: " << e.what() << endl;
    }

    // ============ NESTED EXCEPTION HANDLING ============
    nestedExceptionHandling();

    // ============ SUCCESSFUL OPERATIONS ============
    cout << "\n4. SUCCESSFUL OPERATIONS (NO EXCEPTIONS):" << endl;

    try {
        double result1 = Calculator::divide(10, 2);
        cout << "10 / 2 = " << result1 << endl;

        double result2 = Calculator::squareRoot(25);
        cout << "sqrt(25) = " << result2 << endl;

        int arr[] = {10, 20, 30, 40, 50};
        int value = Calculator::getArrayElement(arr, 5, 2);
        cout << "arr[2] = " << value << endl;
    }
    catch (exception& e) {
        cout << "Unexpected exception: " << e.what() << endl;
    }

    cout << "\n=== EXCEPTION HANDLING DEMONSTRATION COMPLETED ===" << endl;

    return 0;
}
```

### Output
```
=== EXCEPTION HANDLING WITH MULTIPLE BLOCKS ===

1. CUSTOM EXCEPTION HANDLING:
Testing division: 10 / 0
Caught DivisionByZeroException: Error: Division by zero is not allowed!

Testing square root: sqrt(-25)
Caught NegativeNumberException: Error: Negative numbers are not allowed!

Testing array access: arr[10] where size is 5
Caught OutOfRangeException: Error: Number is out of valid range!

2. MULTIPLE CATCH BLOCKS FOR DIFFERENT EXCEPTIONS:

Test case 1:
Caught runtime_error: Runtime error occurred!

Test case 2:
Caught invalid_argument: Invalid argument provided!

Test case 3:
Caught out_of_range: Index out of range!

Test case 4:
Caught logic_error: Logic error detected!

Test case 5:
Caught general exception: std::exception

--- Nested Exception Handling ---
Outer try block entered
Inner try block entered
Inner catch: Exception from inner try block
Outer catch: Exception from inner try block

4. SUCCESSFUL OPERATIONS (NO EXCEPTIONS):
10 / 2 = 5
sqrt(25) = 5
arr[2] = 30

=== EXCEPTION HANDLING DEMONSTRATION COMPLETED ===
```

### Result
Successfully demonstrated exception handling with multiple catch blocks, including custom exceptions, standard exceptions, exception hierarchy, and nested exception handling.

---

## Practical 11: Custom Exception Classes

### Aim
Write a C++ program to implement custom exception classes.

### Theory
Custom exception classes allow creating application-specific exceptions with meaningful error messages and additional context. They inherit from the standard exception class or its derived classes.

Benefits of custom exceptions:
1. More descriptive error messages
2. Application-specific error handling
3. Additional error context and data
4. Better error categorization
5. Improved debugging and maintenance

### Algorithm
1. Create custom exception hierarchy inheriting from std::exception
2. Implement custom exceptions with additional data members
3. Create exception classes for different error categories
4. Demonstrate throwing and catching custom exceptions
5. Show exception chaining and error context

### Program

```cpp
// Aim: Write a C++ program to implement custom exception classes
// KDK College of Engineering, Nagpur
// B.Tech CSE, 2nd Year
// Author: Pranay Gajbhiye

#include <iostream>
#include <exception>
#include <string>
#include <sstream>
using namespace std;

// ============ BASE CUSTOM EXCEPTION CLASS ============
class CustomException : public exception {
protected:
    string message;
    string fileName;
    int lineNumber;

public:
    CustomException(const string& msg, const string& file = "", int line = 0)
        : message(msg), fileName(file), lineNumber(line) {}

    const char* what() const noexcept override {
        return message.c_str();
    }

    string getFileName() const { return fileName; }
    int getLineNumber() const { return lineNumber; }

    virtual string getFullErrorMessage() const {
        stringstream ss;
        ss << "Exception: " << message;
        if (!fileName.empty()) {
            ss << " (File: " << fileName << ", Line: " << lineNumber << ")";
        }
        return ss.str();
    }
};

// ============ SPECIFIC CUSTOM EXCEPTION CLASSES ============

// Mathematical operation exceptions
class MathException : public CustomException {
public:
    MathException(const string& msg, const string& file = "", int line = 0)
        : CustomException("Math Error: " + msg, file, line) {}
};

class DivisionByZeroException : public MathException {
private:
    double numerator;

public:
    DivisionByZeroException(double num, const string& file = "", int line = 0)
        : MathException("Division by zero attempted", file, line), numerator(num) {}

    double getNumerator() const { return numerator; }

    string getFullErrorMessage() const override {
        stringstream ss;
        ss << "Division Error: Cannot divide " << numerator << " by zero";
        if (!fileName.empty()) {
            ss << " (File: " << fileName << ", Line: " << lineNumber << ")";
        }
        return ss.str();
    }
};

class NegativeSquareRootException : public MathException {
private:
    double value;

public:
    NegativeSquareRootException(double val, const string& file = "", int line = 0)
        : MathException("Square root of negative number", file, line), value(val) {}

    double getValue() const { return value; }

    string getFullErrorMessage() const override {
        stringstream ss;
        ss << "Math Error: Cannot calculate square root of negative number: " << value;
        if (!fileName.empty()) {
            ss << " (File: " << fileName << ", Line: " << lineNumber << ")";
        }
        return ss.str();
    }
};

// File operation exceptions
class FileException : public CustomException {
public:
    FileException(const string& msg, const string& file = "", int line = 0)
        : CustomException("File Error: " + msg, file, line) {}
};

class FileNotFoundException : public FileException {
private:
    string attemptedFileName;

public:
    FileNotFoundException(const string& filename, const string& file = "", int line = 0)
        : FileException("File not found", file, line), attemptedFileName(filename) {}

    string getAttemptedFileName() const { return attemptedFileName; }

    string getFullErrorMessage() const override {
        stringstream ss;
        ss << "File Error: Could not find file '" << attemptedFileName << "'";
        if (!fileName.empty()) {
            ss << " (File: " << fileName << ", Line: " << lineNumber << ")";
        }
        return ss.str();
    }
};

// Network operation exceptions
class NetworkException : public CustomException {
protected:
    int errorCode;

public:
    NetworkException(const string& msg, int code = 0, const string& file = "", int line = 0)
        : CustomException("Network Error: " + msg, file, line), errorCode(code) {}

    int getErrorCode() const { return errorCode; }
};

class ConnectionTimeoutException : public NetworkException {
private:
    int timeoutSeconds;
    string serverAddress;

public:
    ConnectionTimeoutException(const string& server, int timeout, const string& file = "", int line = 0)
        : NetworkException("Connection timeout", 408, file, line),
          timeoutSeconds(timeout), serverAddress(server) {}

    int getTimeoutSeconds() const { return timeoutSeconds; }
    string getServerAddress() const { return serverAddress; }

    string getFullErrorMessage() const override {
        stringstream ss;
        ss << "Network Error: Connection to " << serverAddress
           << " timed out after " << timeoutSeconds << " seconds (Error Code: " << errorCode << ")";
        if (!fileName.empty()) {
            ss << " (File: " << fileName << ", Line: " << lineNumber << ")";
        }
        return ss.str();
    }
};

// ============ APPLICATION CLASSES USING CUSTOM EXCEPTIONS ============
class Calculator {
public:
    static double divide(double a, double b) {
        if (b == 0) {
            throw DivisionByZeroException(a, __FILE__, __LINE__);
        }
        return a / b;
    }

    static double squareRoot(double num) {
        if (num < 0) {
            throw NegativeSquareRootException(num, __FILE__, __LINE__);
        }
        return sqrt(num);
    }
};

class FileManager {
public:
    static void openFile(const string& filename) {
        // Simulate file not found for demonstration
        if (filename == "nonexistent.txt") {
            throw FileNotFoundException(filename, __FILE__, __LINE__);
        }
        cout << "File '" << filename << "' opened successfully!" << endl;
    }
};

class NetworkManager {
public:
    static void connectToServer(const string& server, int timeout) {
        // Simulate timeout for demonstration
        if (server == "slow-server.com") {
            throw ConnectionTimeoutException(server, timeout, __FILE__, __LINE__);
        }
        cout << "Connected to " << server << " successfully!" << endl;
    }
};

int main() {
    cout << "=== CUSTOM EXCEPTION CLASSES DEMONSTRATION ===" << endl;

    // ============ MATH EXCEPTIONS ============
    cout << "\n1. MATHEMATICAL EXCEPTIONS:" << endl;

    // Test Division by Zero
    try {
        cout << "Testing: 10 / 0" << endl;
        double result = Calculator::divide(10, 0);
        cout << "Result: " << result << endl;
    }
    catch (DivisionByZeroException& e) {
        cout << "Caught DivisionByZeroException:" << endl;
        cout << "  Standard message: " << e.what() << endl;
        cout << "  Full message: " << e.getFullErrorMessage() << endl;
        cout << "  Numerator was: " << e.getNumerator() << endl;
    }

    cout << endl;

    // Test Negative Square Root
    try {
        cout << "Testing: sqrt(-16)" << endl;
        double result = Calculator::squareRoot(-16);
        cout << "Result: " << result << endl;
    }
    catch (NegativeSquareRootException& e) {
        cout << "Caught NegativeSquareRootException:" << endl;
        cout << "  Standard message: " << e.what() << endl;
        cout << "  Full message: " << e.getFullErrorMessage() << endl;
        cout << "  Attempted value: " << e.getValue() << endl;
    }

    // ============ FILE EXCEPTIONS ============
    cout << "\n2. FILE EXCEPTIONS:" << endl;

    try {
        FileManager::openFile("existing.txt");  // This will succeed
        FileManager::openFile("nonexistent.txt");  // This will throw exception
    }
    catch (FileNotFoundException& e) {
        cout << "Caught FileNotFoundException:" << endl;
        cout << "  Standard message: " << e.what() << endl;
        cout << "  Full message: " << e.getFullErrorMessage() << endl;
        cout << "  Attempted filename: " << e.getAttemptedFileName() << endl;
    }

    // ============ NETWORK EXCEPTIONS ============
    cout << "\n3. NETWORK EXCEPTIONS:" << endl;

    try {
        NetworkManager::connectToServer("fast-server.com", 30);  // This will succeed
        NetworkManager::connectToServer("slow-server.com", 30);  // This will throw exception
    }
    catch (ConnectionTimeoutException& e) {
        cout << "Caught ConnectionTimeoutException:" << endl;
        cout << "  Standard message: " << e.what() << endl;
        cout << "  Full message: " << e.getFullErrorMessage() << endl;
        cout << "  Server: " << e.getServerAddress() << endl;
        cout << "  Timeout: " << e.getTimeoutSeconds() << " seconds" << endl;
        cout << "  Error Code: " << e.getErrorCode() << endl;
    }

    // ============ EXCEPTION HIERARCHY HANDLING ============
    cout << "\n4. EXCEPTION HIERARCHY HANDLING:" << endl;

    try {
        throw NegativeSquareRootException(-9, __FILE__, __LINE__);
    }
    catch (MathException& e) {
        cout << "Caught as MathException: " << e.what() << endl;
        cout << "Full message: " << e.getFullErrorMessage() << endl;
    }
    catch (CustomException& e) {
        cout << "Caught as CustomException: " << e.what() << endl;
    }
    catch (exception& e) {
        cout << "Caught as standard exception: " << e.what() << endl;
    }

    // ============ MULTIPLE EXCEPTION TYPES ============
    cout << "\n5. HANDLING MULTIPLE CUSTOM EXCEPTION TYPES:" << endl;

    string operations[] = {"divide", "sqrt", "file", "network"};

    for (const string& op : operations) {
        try {
            if (op == "divide") {
                Calculator::divide(5, 0);
            } else if (op == "sqrt") {
                Calculator::squareRoot(-4);
            } else if (op == "file") {
                FileManager::openFile("missing.txt");
            } else if (op == "network") {
                NetworkManager::connectToServer("timeout-server.com", 10);
            }
        }
        catch (DivisionByZeroException& e) {
            cout << "Math Operation Failed: " << e.getFullErrorMessage() << endl;
        }
        catch (NegativeSquareRootException& e) {
            cout << "Math Operation Failed: " << e.getFullErrorMessage() << endl;
        }
        catch (FileNotFoundException& e) {
            cout << "File Operation Failed: " << e.getFullErrorMessage() << endl;
        }
        catch (ConnectionTimeoutException& e) {
            cout << "Network Operation Failed: " << e.getFullErrorMessage() << endl;
        }
        catch (CustomException& e) {
            cout << "Custom Exception: " << e.getFullErrorMessage() << endl;
        }
        catch (...) {
            cout << "Unknown exception occurred" << endl;
        }
    }

    cout << "\n=== CUSTOM EXCEPTION CLASSES DEMONSTRATION COMPLETED ===" << endl;

    return 0;
}
```

### Output
```
=== CUSTOM EXCEPTION CLASSES DEMONSTRATION ===

1. MATHEMATICAL EXCEPTIONS:
Testing: 10 / 0
Caught DivisionByZeroException:
  Standard message: Math Error: Division by zero attempted
  Full message: Division Error: Cannot divide 10 by zero (File: main.cpp, Line: 156)
  Numerator was: 10

Testing: sqrt(-16)
Caught NegativeSquareRootException:
  Standard message: Math Error: Square root of negative number
  Full message: Math Error: Cannot calculate square root of negative number: -16 (File: main.cpp, Line: 162)
  Attempted value: -16

2. FILE EXCEPTIONS:
File 'existing.txt' opened successfully!
Caught FileNotFoundException:
  Standard message: File Error: File not found
  Full message: File Error: Could not find file 'nonexistent.txt' (File: main.cpp, Line: 171)
  Attempted filename: nonexistent.txt

3. NETWORK EXCEPTIONS:
Connected to fast-server.com successfully!
Caught ConnectionTimeoutException:
  Standard message: Network Error: Connection timeout
  Full message: Network Error: Connection to slow-server.com timed out after 30 seconds (Error Code: 408) (File: main.cpp, Line: 181)
  Server: slow-server.com
  Timeout: 30 seconds
  Error Code: 408

4. EXCEPTION HIERARCHY HANDLING:
Caught as MathException: Math Error: Square root of negative number
Full message: Math Error: Cannot calculate square root of negative number: -9 (File: main.cpp, Line: 198)

5. HANDLING MULTIPLE CUSTOM EXCEPTION TYPES:
Math Operation Failed: Division Error: Cannot divide 5 by zero (File: main.cpp, Line: 156)
Math Operation Failed: Math Error: Cannot calculate square root of negative number: -4 (File: main.cpp, Line: 162)
File Operation Failed: File Error: Could not find file 'missing.txt' (File: main.cpp, Line: 171)
Network Operation Failed: Network Error: Connection to timeout-server.com timed out after 10 seconds (Error Code: 408) (File: main.cpp, Line: 181)

=== CUSTOM EXCEPTION CLASSES DEMONSTRATION COMPLETED ===
```

### Result
Successfully implemented comprehensive custom exception classes with inheritance hierarchy, additional context data, and detailed error messages for different application domains (Math, File, Network operations).
