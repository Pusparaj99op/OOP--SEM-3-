# Object Oriented Programming - Practical Documentation
## KDK College of Engineering, Nagpur
### B.Tech CSE, 2nd Year

---

## Table of Contents
1. [Practical 3: Function Overloading](#practical-3-function-overloading)
2. [Practical 4: Constructors](#practical-4-constructors)
3. [Practical 5: Operator Overloading](#practical-5-operator-overloading)

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
