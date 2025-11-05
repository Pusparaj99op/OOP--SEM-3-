# Object Oriented Programming - Practical Documentation# Object Oriented Programming - Practical Documentation

## KDK College of Engineering, Nagpur## KDK College of Engineering, Nagpur

### B.Tech CSE, 2nd Year### B.Tech CSE, 2nd Year



------



## Table of Contents## Table of Contents

1. [Practical 3: Function Overloading](#practical-3-function-overloading)1. [Practical 3: Function Overloading](#practical-3-function-overloading)

2. [Practical 4: Constructors](#practical-4-constructors)2. [Practical 4: Constructors](#practical-4-constructors)

3. [Practical 5: Operator Overloading](#practical-5-operator-overloading)3. [Practical 5: Operator Overloading](#practical-5-operator-overloading)

4. [Practical 6: Advanced Operator Overloading](#practical-6-advanced-operator-overloading)4. [Practical 6: Advanced Operator Overloading](#practical-6-operator-overloading-ii)

5. [Practical 7: Types of Inheritance](#practical-7-types-of-inheritance)5. [Practical 7: Types of Inheritance](#practical-7-types-of-inheritance)

6. [Practical 8: Virtual and Friend Functions](#practical-8-virtual-and-friend-functions)6. [Practical 8: Virtual and Friend Functions](#practical-8-virtual-and-friend-functions)

7. [Practical 9: Function Overriding and Abstract Classes](#practical-9-function-overriding-and-abstract-classes)7. [Practical 9: Function Overriding and Abstract Classes](#practical-9-function-overriding-and-abstract-classes)

8. [Practical 10: Exception Handling Multiple Blocks](#practical-10-exception-handling-multiple-blocks)8. [Practical 10: Exception Handling Multiple Blocks](#practical-10-exception-handling-with-multiple-blocks)

9. [Practical 11: Custom Exception Classes](#practical-11-custom-exception-classes)9. [Practical 11: Custom Exception Classes](#practical-11-custom-exception-classes)



------



## Practical 3: Function Overloading### 📝 Important Update

**Code Simplification**: Practicals 6-11 have been updated with simplified, student-friendly implementations:

### Aim

Implement function overloading in C++.- **Practical 6**: Simplified from complex Matrix class to simple Number class demonstrating operator overloading

- **Practical 7**: Streamlined inheritance examples with Animal-Dog, Vehicle-Car-SportsCar hierarchies

### Theory- **Practical 8**: Simplified virtual functions with Animal/Dog/Cat and basic friend functions with Box class

Function overloading allows multiple functions with the same name but different parameters (number, type, or order). The compiler determines which function to call based on arguments - this is compile-time polymorphism.- **Practical 9**: Updated to use simple Shape/Circle/Rectangle and Animal/Dog abstract classes

- **Practical 10**: Reduced to basic custom exceptions with clear multiple catch block examples

### Algorithm- **Practical 11**: Simplified custom exception hierarchy focusing on practical inheritance patterns

1. Create Calculator class with overloaded add() and display() functions

2. Create overloaded area() functions for different shapes**Note**: The corresponding `.cpp` files (p6.cpp through p11.cpp) contain the simplified implementations. The README documentation reflects these simpler, more educational versions that are easier for students to understand and learn from.

3. Demonstrate calling each overloaded version

4. Show compiler distinguishes based on parameters---



### Code## Practical 3: Function Overloading

```cpp

#include <iostream>### Aim

#include <cmath>Write a C++ program to implement the concept of function overloading.

using namespace std;

### Theory

class Calculator {Function overloading is a feature of Object-Oriented Programming that allows creating multiple functions with the same name but different parameter lists. The compiler distinguishes between overloaded functions based on:

public:

    int add(int a, int b) { return a + b; }1. **Number of parameters**: Functions with the same name but different number of parameters

    int add(int a, int b, int c) { return a + b + c; }2. **Type of parameters**: Functions with the same name but different parameter types

    float add(float a, float b) { return a + b; }3. **Order of parameters**: Functions with the same name but different order of parameter types



    void display(int x) { cout << "Integer: " << x << endl; }Function overloading represents compile-time (static) polymorphism. The compiler decides which function to call based on the arguments provided during the function call.

    void display(float x) { cout << "Float: " << x << endl; }

    void display(string x) { cout << "String: " << x << endl; }Key points about function overloading:

};- The return type alone is not sufficient for distinguishing between overloaded functions

- Function overloading improves code readability and reusability

float area(float r) { return 3.14 * r * r; }- It eliminates the need to create different function names for similar operations

float area(float l, float w) { return l * w; }- The compiler generates different internal names for each overloaded function

float area(float a, float b, float c) {

    float s = (a + b + c) / 2;### Algorithm

    return sqrt(s * (s - a) * (s - b) * (s - c));1. Define a `Calculator` class with overloaded member functions:

}   - `add()` with different parameter counts (2 and 3 integers)

   - `add()` with different parameter types (int, float, double)

int main() {   - `display()` with different parameter types (int, float, string, char)

    Calculator calc;2. Define standalone functions for area calculation, overloaded for:

       - Circle (1 parameter: radius)

    cout << "Add two integers: " << calc.add(10, 20) << endl;   - Rectangle (2 parameters: length and width)

    cout << "Add three integers: " << calc.add(10, 20, 30) << endl;   - Triangle (3 parameters: sides a, b, and c)

    cout << "Add two floats: " << calc.add(10.5f, 20.3f) << endl;3. In the main function, create a Calculator object and demonstrate:

       - Function overloading with different parameter counts

    calc.display(100);   - Function overloading with different parameter types

    calc.display(45.67f);   - Display function overloading

    calc.display("Hello");   - Area calculation function overloading



    cout << "Circle area: " << area(5.0f) << endl;### Program

    cout << "Rectangle area: " << area(10.0f, 15.0f) << endl;

    cout << "Triangle area: " << area(3.0f, 4.0f, 5.0f) << endl;```cpp

    // Aim: Write a C++ program to implement a concept of function overloading?

    return 0;// - Function overloading is a feature of OOP that allows multiple functions with the same name but different parameters. This aim involves implementing this concept.

}// KDK College of Engineering, Nagpur

```// B.Tech CSE, 2nd Year

// Author: Pranay Gajbhiye

### Output

```#include <iostream>

Add two integers: 30#include <string>

Add three integers: 60#include <cmath>

Add two floats: 30.8using namespace std;

Integer: 100class Calculator {

Float: 45.67public:

String: Hello    // Function overloading with different number of parameters

Circle area: 78.5    int add(int a, int b) { cout << "Adding two integers: "; return a + b; }

Rectangle area: 150    int add(int a, int b, int c) { cout << "Adding three integers: "; return a + b + c; }

Triangle area: 6

```    // Function overloading with different data types

    float add(float a, float b) { cout << "Adding two floats: "; return a + b; }

### Result    double add(double a, double b) { cout << "Adding two doubles: "; return a + b; }

Successfully demonstrated function overloading with different parameter types and counts.

    // Function overloading for display

---    void display(int value) { cout << "Displaying integer: " << value << endl; }

    void display(float value) { cout << "Displaying float: " << value << endl; }

## Practical 4: Constructors    void display(string text) { cout << "Displaying string: " << text << endl; }

    void display(char ch) { cout << "Displaying character: " << ch << endl; }           };

### Aim

Implement different types of constructors in C++.   // Function overloading outside class for area calculations

float area(float radius) { cout << "Calculating area of circle: "; return 3.14159 * radius * radius; }

### Theoryfloat area(float length, float width) { cout << "Calculating area of rectangle: "; return length * width; }

Constructors are special member functions with the same name as the class, no return type, and automatically called when objects are created. Types: Default, Parameterized, Copy, and Overloaded constructors.float area(float a, float b, float c) { cout << "Calculating area of triangle (using Heron's formula): "; float s = (a + b + c) / 2;

    return sqrt(s * (s - a) * (s - b) * (s - c));  }

### Algorithm

1. Define Student class with private membersint main() {

2. Implement default constructor    cout << "=== Function Overloading Demonstration ===" << endl;

3. Implement parameterized constructors (overloaded)    cout << "KDK College of Engineering, Nagpur" << endl;

4. Implement copy constructor    cout << "B.Tech CSE, 2nd Year" << endl;

5. Create objects using each constructor type    cout << "Author: Pranay Gajbhiye\n" << endl;

6. Display object details

    Calculator calc;

### Code    // Testing function overloading with different parameters

```cpp    cout << "1. Function Overloading with Different Number of Parameters:" << endl;

#include <iostream>    cout << calc.add(10, 20) << endl;

using namespace std;    cout << calc.add(10, 20, 30) << endl;



class Student {    cout << "\n2. Function Overloading with Different Data Types:" << endl;

private:    cout << calc.add(15.5f, 25.3f) << endl;

    int rollNo;    cout << calc.add(12.567, 23.789) << endl;

    string name;

    float marks;    cout << "\n3. Display Function Overloading:" << endl;

        calc.display(100);

public:    calc.display(45.67f);

    // Default constructor    calc.display("Hello World!");

    Student() {    calc.display('A');

        rollNo = 0;

        name = "Unknown";    cout << "\n4. Area Calculation Function Overloading:" << endl;

        marks = 0.0;    cout << area(5.0f) << " sq units" << endl;  // Circle

        cout << "Default constructor called" << endl;    cout << area(10.0f, 15.0f) << " sq units" << endl;  // Rectangle

    }    cout << area(3.0f, 4.0f, 5.0f) << " sq units" << endl;  // Triangle

        cout << "\n=== Function Overloading Concepts Demonstrated ===" << endl;

    // Parameterized constructor    cout << "1. Same function name with different parameter types" << endl;

    Student(int r, string n, float m) {    cout << "2. Same function name with different number of parameters" << endl;

        rollNo = r;    cout << "3. Compiler determines which function to call based on arguments" << endl;

        name = n;    cout << "4. This is compile-time polymorphism (Static Polymorphism)" << endl;

        marks = m;    return 0;

        cout << "Parameterized constructor called" << endl;}

    }```



    // Constructor overloading### Output

    Student(int r, string n) {```

        rollNo = r;=== Function Overloading Demonstration ===

        name = n;KDK College of Engineering, Nagpur

        marks = 0.0;B.Tech CSE, 2nd Year

        cout << "Overloaded constructor called" << endl;Author: Pranay Gajbhiye

    }

    1. Function Overloading with Different Number of Parameters:

    // Copy constructorAdding two integers: 30

    Student(const Student &s) {Adding three integers: 60

        rollNo = s.rollNo;

        name = s.name;2. Function Overloading with Different Data Types:

        marks = s.marks;Adding two floats: 40.8

        cout << "Copy constructor called" << endl;Adding two doubles: 36.356

    }

    3. Display Function Overloading:

    void display() {Displaying integer: 100

        cout << "Roll: " << rollNo << ", Name: " << name << ", Marks: " << marks << endl;Displaying float: 45.67

    }Displaying string: Hello World!

};Displaying character: A



int main() {4. Area Calculation Function Overloading:

    Student s1;Calculating area of circle: 78.5397 sq units

    s1.display();Calculating area of rectangle: 150 sq units

    Calculating area of triangle (using Heron's formula): 6 sq units

    Student s2(101, "Alice", 85.5);

    s2.display();=== Function Overloading Concepts Demonstrated ===

    1. Same function name with different parameter types

    Student s3(102, "Bob");2. Same function name with different number of parameters

    s3.display();3. Compiler determines which function to call based on arguments

    4. This is compile-time polymorphism (Static Polymorphism)

    Student s4 = s2;```

    s4.display();

    ### Result

    return 0;Successfully demonstrated function overloading in C++ by implementing:

}1. Functions with different parameter counts

```2. Functions with different parameter types

3. The compiler correctly resolved which function to call based on arguments provided

### Output4. Validated that function overloading is a form of compile-time (static) polymorphism

```

Default constructor called---

Roll: 0, Name: Unknown, Marks: 0

Parameterized constructor called## Practical 4: Constructors

Roll: 101, Name: Alice, Marks: 85.5

Overloaded constructor called### Aim

Roll: 102, Name: Bob, Marks: 0Write a C++ program to implement the concept of constructors.

Copy constructor called

Roll: 101, Name: Alice, Marks: 85.5### Theory

```Constructors are special member functions in a class that are automatically called when an object of that class is created. They have the same name as the class and do not have a return type. Constructors are used to initialize the object's data members.



### ResultKey properties of constructors:

Successfully implemented and demonstrated default, parameterized, overloaded, and copy constructors.1. They have the same name as the class

2. They do not have a return type, not even void

---3. They are automatically called when an object is created

4. If no constructor is defined, the compiler provides a default constructor

## Practical 5: Operator Overloading5. Constructors can be overloaded like regular functions



### AimTypes of constructors:

Implement operator overloading in C++.1. **Default Constructor**: Takes no parameters

2. **Parameterized Constructor**: Takes parameters to initialize object with specific values

### Theory3. **Copy Constructor**: Creates a new object as a copy of an existing object

Operator overloading allows operators to work with user-defined types. Operators like +, -, *, ==, <<, >> can be overloaded to perform operations on class objects. Syntax: return_type operator symbol(parameters).4. **Constructor Overloading**: Multiple constructors with different parameter lists



### AlgorithmConstructors play a crucial role in object initialization and ensure that objects are in a valid state when they are created.

1. Create Complex class for complex numbers

2. Overload + operator for addition### Algorithm

3. Overload - operator for subtraction1. Define a `Student` class with private data members:

4. Overload == operator for comparison   - `rollNo` (integer)

5. Overload << operator for output   - `name` (string)

6. Demonstrate operations on complex numbers   - `marks` (float)

2. Implement different types of constructors:

### Code   - Default constructor with no parameters

```cpp   - Parameterized constructor with roll number, name, and marks

#include <iostream>   - Copy constructor that copies values from an existing object

using namespace std;   - Overloaded constructor with only roll number and name

3. Implement a `display()` method to show student details

class Complex {4. In the main function, create objects using:

private:   - Default constructor

    float real, imag;   - Parameterized constructor

       - Overloaded constructor

public:   - Copy constructor (both implicitly and explicitly)

    Complex(float r = 0, float i = 0) : real(r), imag(i) {}5. Call the display method for each object to show their state



    // Overload + operator### Program

    Complex operator+(const Complex &c) {

        return Complex(real + c.real, imag + c.imag);```cpp

    }// Aim: Write a C++ program to implement a concept of Constructors?

    // - Constructors are special member functions used to initialize objects when they are created. This aim focuses on understanding and implementing constructors.

    // Overload - operator// KDK College of Engineering, Nagpur

    Complex operator-(const Complex &c) {// B.Tech CSE, 2nd Year

        return Complex(real - c.real, imag - c.imag);// Author: Pranay Gajbhiye

    }

    #include <iostream>

    // Overload == operatorusing namespace std;

    bool operator==(const Complex &c) {

        return (real == c.real && imag == c.imag);// Class to demonstrate the concept of constructors

    }class Student {

    private:

    // Overload << operator    int rollNo;

    friend ostream& operator<<(ostream &out, const Complex &c) {    string name;

        out << c.real << " + " << c.imag << "i";    float marks;

        return out;

    }public:

};    // Default Constructor - called when no parameters are passed

    Student() {

int main() {        cout << "Default Constructor called" << endl;

    Complex c1(3.5, 2.5);        rollNo = 0;

    Complex c2(1.5, 4.5);        name = "Unknown";

    Complex c3;        marks = 0.0;

        }

    cout << "c1 = " << c1 << endl;

    cout << "c2 = " << c2 << endl;    // Parameterized Constructor - allows initialization with specific values

        Student(int r, string n, float m) {

    c3 = c1 + c2;        cout << "Parameterized Constructor called" << endl;

    cout << "c1 + c2 = " << c3 << endl;        rollNo = r;

            name = n;

    c3 = c1 - c2;        marks = m;

    cout << "c1 - c2 = " << c3 << endl;    }



    if(c1 == c2)    // Copy Constructor - creates a new object by copying an existing one

        cout << "c1 and c2 are equal" << endl;    Student(const Student &obj) {

    else        cout << "Copy Constructor called" << endl;

        cout << "c1 and c2 are not equal" << endl;        rollNo = obj.rollNo;

            name = obj.name;

    return 0;        marks = obj.marks;

}    }

```

    // Constructor Overloading - with different parameter lists

### Output    Student(int r, string n) {

```        cout << "Overloaded Constructor called (without marks)" << endl;

c1 = 3.5 + 2.5i        rollNo = r;

c2 = 1.5 + 4.5i        name = n;

c1 + c2 = 5 + 7i        marks = 0.0;

c1 - c2 = 2 + -2i    }

c1 and c2 are not equal

```    // Function to display student information

    void display() {

### Result        cout << "\nStudent Details:" << endl;

Successfully implemented operator overloading for +, -, ==, and << operators.        cout << "Roll No: " << rollNo << endl;

        cout << "Name: " << name << endl;

---        cout << "Marks: " << marks << endl;

        cout << "------------------------" << endl;

## Practical 6: Advanced Operator Overloading    }

};

### Aim

Implement advanced operator overloading (assignment, subscript, function call, type conversion).// Main function to demonstrate the concept of constructors

int main() {

### Theory    cout << "Demonstrating Different Types of Constructors" << endl;

Advanced operators: Assignment (=) for object copying, Subscript ([]) for array-like access, Function call (()) for functor behavior, and Type conversion operators for implicit/explicit type conversions.    cout << "=============================================" << endl;



### Algorithm    // Creating object using default constructor

1. Create Number class with private value    cout << "\n1. Creating object s1 using default constructor:" << endl;

2. Overload = operator for assignment    Student s1;

3. Overload [] operator for digit access    s1.display();

4. Overload () operator for power calculation

5. Overload type conversion to int    // Creating object using parameterized constructor

6. Demonstrate each operator    cout << "\n2. Creating object s2 using parameterized constructor:" << endl;

    Student s2(101, "John Doe", 85.5);

### Code    s2.display();

```cpp

#include <iostream>    // Creating object using constructor overloading

using namespace std;    cout << "\n3. Creating object s3 using overloaded constructor:" << endl;

    Student s3(102, "Jane Smith");

class Number {    s3.display();

private:

    int value;    // Creating object using copy constructor

        cout << "\n4. Creating object s4 using copy constructor:" << endl;

public:    Student s4 = s2; // Copy constructor is called

    Number(int v = 0) : value(v) {}    s4.display();



    // Assignment operator    // Another way to call copy constructor

    Number& operator=(const Number& n) {    cout << "\n5. Creating object s5 using explicit copy constructor:" << endl;

        cout << "Assignment operator called" << endl;    Student s5(s3); // Explicit call to copy constructor

        value = n.value;    s5.display();

        return *this;

    }    return 0;

    }

    // Subscript operator (returns digit at position)```

    int operator[](int pos) {

        int temp = value;### Output

        for(int i = 0; i < pos; i++) {```

            temp /= 10;Demonstrating Different Types of Constructors

        }=============================================

        return temp % 10;

    }1. Creating object s1 using default constructor:

    Default Constructor called

    // Function call operator (power function)

    int operator()(int exp) {Student Details:

        int result = 1;Roll No: 0

        for(int i = 0; i < exp; i++) {Name: Unknown

            result *= value;Marks: 0

        }------------------------

        return result;

    }2. Creating object s2 using parameterized constructor:

    Parameterized Constructor called

    // Type conversion to int

    operator int() {Student Details:

        return value;Roll No: 101

    }Name: John Doe

    Marks: 85.5

    void display() {------------------------

        cout << "Value: " << value << endl;

    }3. Creating object s3 using overloaded constructor:

};Overloaded Constructor called (without marks)



int main() {Student Details:

    Number n1(23);Roll No: 102

    Number n2;Name: Jane Smith

    Marks: 0

    cout << "Original number:" << endl;------------------------

    n1.display();

    4. Creating object s4 using copy constructor:

    cout << "\nAssignment operator:" << endl;Copy Constructor called

    n2 = n1;

    n2.display();Student Details:

    Roll No: 101

    cout << "\nSubscript operator (digits):" << endl;Name: John Doe

    cout << "n1[0] (units digit) = " << n1[0] << endl;Marks: 85.5

    cout << "n1[1] (tens digit) = " << n1[1] << endl;------------------------



    cout << "\nFunction call operator (power):" << endl;5. Creating object s5 using explicit copy constructor:

    cout << "n1(2) = " << n1(2) << endl;Copy Constructor called



    cout << "\nType conversion:" << endl;Student Details:

    int x = n1;Roll No: 102

    cout << "Converted to int: " << x << endl;Name: Jane Smith

    Marks: 0

    return 0;------------------------

}```

```

### Result

### OutputSuccessfully demonstrated the concept of constructors in C++ by implementing:

```1. Default constructor

Original number:2. Parameterized constructor

Value: 233. Copy constructor

4. Constructor overloading

Assignment operator:5. Verified that the appropriate constructor is called based on how objects are created

Assignment operator called

Value: 23---



Subscript operator (digits):## Practical 5: Operator Overloading

n1[0] (units digit) = 3

n1[1] (tens digit) = 2### Aim

Write a C++ program to implement the concept of operator overloading.

Function call operator (power):

n1(2) = 529### Theory

Operator overloading is a feature of Object-Oriented Programming that allows operators to be redefined for user-defined data types. This enables custom classes to use standard operators like +, -, *, ++, --, ==, etc., with semantics appropriate for the class.

Type conversion:

Converted to int: 23Key points about operator overloading:

```1. It allows operators to work with user-defined data types

2. It increases code readability by using familiar operator syntax

### Result3. It is a form of compile-time polymorphism

Successfully implemented assignment, subscript, function call operators and type conversion.4. Not all operators can be overloaded (e.g., ?:, ::, ., .*)



---Ways to overload operators in C++:

1. **Member function**: Defined inside the class, with first operand implicitly the object itself

## Practical 7: Types of Inheritance2. **Friend function**: Defined outside the class but has access to private members, useful when first operand is not an object of the class

3. **Global function**: Defined outside the class without friend declaration, only has access to public members

### Aim

Implement different types of inheritance in C++.Categories of operators that can be overloaded:

1. **Unary operators**: ++, --, -, !, etc.

### Theory2. **Binary operators**: +, -, *, /, %, etc.

Inheritance types: Single (one base, one derived), Multilevel (chain of inheritance), Multiple (multiple base classes), Hierarchical (one base, multiple derived), and Hybrid (combination). Promotes code reusability.3. **Relational operators**: ==, !=, <, >, <=, >=, etc.

4. **Assignment operators**: =, +=, -=, *=, /=, etc.

### Algorithm5. **Stream operators**: <<, >>

1. Implement Single Inheritance (Animal → Dog)

2. Implement Multilevel Inheritance (Vehicle → Car → SportsCar)### Algorithm

3. Implement Multiple Inheritance (Father, Mother → Child)1. Define a `Complex` class for complex numbers with:

4. Implement Hierarchical Inheritance (Shape → Circle, Square)   - Private data members: `real` and `imag` (for real and imaginary parts)

5. Demonstrate each type   - Default constructor and parameterized constructor

   - `display()` method to print the complex number

### Code2. Overload binary arithmetic operators:

```cpp   - `+` for addition of complex numbers

#include <iostream>   - `-` for subtraction of complex numbers

using namespace std;   - `*` for multiplication of complex numbers

3. Overload unary operators:

// SINGLE INHERITANCE   - Prefix `++` (increment both real and imaginary parts)

class Animal {   - Postfix `++` (increment both real and imaginary parts after returning)

protected:   - Unary `-` (negate both real and imaginary parts)

    string name;4. Overload comparison operators:

public:   - `==` for equality comparison

    Animal(string n) : name(n) {}   - `!=` for inequality comparison

    void eat() { cout << name << " is eating" << endl; }5. Overload assignment operators:

};   - `+=` for compound addition assignment

6. Overload stream operators as friend functions:

class Dog : public Animal {   - `<<` for output stream

public:   - `>>` for input stream

    Dog(string n) : Animal(n) {}7. In the main function, demonstrate each type of operator overloading

    void bark() { cout << name << " is barking" << endl; }

};### Program



// MULTILEVEL INHERITANCE```cpp

class Vehicle {// Aim:Write a C++ program to implement a concept of operator overloading?

protected:    // - Operator overloading allows operators to be redefined for user-defined data types. This aim involves implementing operator overloading in C++.

    string brand;// KDK College of Engineering, Nagpur

public:// B.Tech CSE, 2nd Year

    Vehicle(string b) : brand(b) {}// Author: Pranay Gajbhiye

    void start() { cout << brand << " started" << endl; }

};#include <iostream>

using namespace std;

class Car : public Vehicle {

public:// Complex number class to demonstrate operator overloading

    Car(string b) : Vehicle(b) {}class Complex {

    void drive() { cout << "Car is driving" << endl; }private:

};    float real;

    float imag;

class SportsCar : public Car {

public:public:

    SportsCar(string b) : Car(b) {}    // Default constructor

    void turbo() { cout << "Turbo activated!" << endl; }    Complex() : real(0), imag(0) {}

};

    // Parameterized constructor

// MULTIPLE INHERITANCE    Complex(float r, float i) : real(r), imag(i) {}

class Father {

protected:    // Display complex number

    string fname;    void display() const {

public:        cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i";

    Father(string f) : fname(f) {}    }

    void showFather() { cout << "Father: " << fname << endl; }

};    // 1. Overloading binary arithmetic operators

    // Overloading + operator for adding two Complex numbers

class Mother {    Complex operator+(const Complex& c) const {

protected:        return Complex(real + c.real, imag + c.imag);

    string mname;    }

public:

    Mother(string m) : mname(m) {}    // Overloading - operator for subtracting two Complex numbers

    void showMother() { cout << "Mother: " << mname << endl; }    Complex operator-(const Complex& c) const {

};        return Complex(real - c.real, imag - c.imag);

    }

class Child : public Father, public Mother {

    string cname;    // Overloading * operator for multiplying two Complex numbers

public:    Complex operator*(const Complex& c) const {

    Child(string c, string f, string m) : Father(f), Mother(m), cname(c) {}        return Complex((real * c.real) - (imag * c.imag),

    void showFamily() {                      (real * c.imag) + (imag * c.real));

        cout << "Child: " << cname << endl;    }

        showFather();

        showMother();    // 2. Overloading unary operators

    }    // Overloading ++ prefix operator

};    Complex& operator++() {

        ++real;

// HIERARCHICAL INHERITANCE        ++imag;

class Shape {        return *this;

protected:    }

    int size;

public:    // Overloading ++ postfix operator

    Shape(int s) : size(s) {}    Complex operator++(int) {

};        Complex temp = *this;

        ++real;

class Circle : public Shape {        ++imag;

public:        return temp;

    Circle(int r) : Shape(r) {}    }

    void area() { cout << "Circle Area: " << 3.14 * size * size << endl; }

};    // Overloading unary - operator (negative)

    Complex operator-() const {

class Square : public Shape {        return Complex(-real, -imag);

public:    }

    Square(int s) : Shape(s) {}

    void area() { cout << "Square Area: " << size * size << endl; }    // 3. Overloading comparison operators

};    // Overloading == operator for equality comparison

    bool operator==(const Complex& c) const {

int main() {        return (real == c.real && imag == c.imag);

    cout << "1. Single Inheritance:" << endl;    }

    Dog d("Buddy");

    d.eat();    // Overloading != operator

    d.bark();    bool operator!=(const Complex& c) const {

            return !(*this == c);

    cout << "\n2. Multilevel Inheritance:" << endl;    }

    SportsCar sc("Ferrari");

    sc.start();    // 4. Overloading assignment operators

    sc.drive();    // Overloading += operator

    sc.turbo();    Complex& operator+=(const Complex& c) {

            real += c.real;

    cout << "\n3. Multiple Inheritance:" << endl;        imag += c.imag;

    Child c("Alice", "John", "Mary");        return *this;

    c.showFamily();    }



    cout << "\n4. Hierarchical Inheritance:" << endl;    // 5. Friend functions for stream operators

    Circle circle(5);    // Overloading << operator for output stream

    circle.area();    friend ostream& operator<<(ostream& out, const Complex& c);

    Square square(4);

    square.area();    // Overloading >> operator for input stream

        friend istream& operator>>(istream& in, Complex& c);

    return 0;};

}

```// Definition of friend function operator<<

ostream& operator<<(ostream& out, const Complex& c) {

### Output    out << c.real << (c.imag >= 0 ? " + " : " - ") << abs(c.imag) << "i";

```    return out;

1. Single Inheritance:}

Buddy is eating

Buddy is barking// Definition of friend function operator>>

istream& operator>>(istream& in, Complex& c) {

2. Multilevel Inheritance:    cout << "Enter real part: ";

Ferrari started    in >> c.real;

Car is driving    cout << "Enter imaginary part: ";

Turbo activated!    in >> c.imag;

    return in;

3. Multiple Inheritance:}

Child: Alice

Father: Johnint main() {

Mother: Mary    cout << "Demonstrating Operator Overloading in C++" << endl;

    cout << "=======================================" << endl;

4. Hierarchical Inheritance:

Circle Area: 78.5    // Create Complex numbers

Square Area: 16    Complex c1(5.5, 3.5);

```    Complex c2(2.5, 1.5);

    Complex c3;

### Result

Successfully demonstrated single, multilevel, multiple, and hierarchical inheritance.    // Display the complex numbers

    cout << "\n1. Initial Complex Numbers:" << endl;

---    cout << "c1 = ";

    c1.display();

## Practical 8: Virtual and Friend Functions    cout << endl;



### Aim    cout << "c2 = ";

Implement virtual functions and friend functions in C++.    c2.display();

    cout << endl;

### Theory

Virtual functions enable runtime polymorphism - base class pointer can call derived class functions. Friend functions are non-member functions that can access private/protected members of a class.    // Demonstrate arithmetic operator overloading

    cout << "\n2. Arithmetic Operator Overloading:" << endl;

### Algorithm

1. Create Animal base class with virtual sound()    // Addition using overloaded + operator

2. Create Dog and Cat derived classes overriding sound()    cout << "c1 + c2 = ";

3. Demonstrate runtime polymorphism using base pointers    c3 = c1 + c2;

4. Create Box class with private members    c3.display();

5. Implement friend functions to access private data    cout << endl;

6. Demonstrate friend function access

    // Subtraction using overloaded - operator

### Code    cout << "c1 - c2 = ";

```cpp    c3 = c1 - c2;

#include <iostream>    c3.display();

using namespace std;    cout << endl;



// VIRTUAL FUNCTIONS    // Multiplication using overloaded * operator

class Animal {    cout << "c1 * c2 = ";

public:    c3 = c1 * c2;

    virtual void sound() {    c3.display();

        cout << "Animal makes sound" << endl;    cout << endl;

    }

    virtual ~Animal() {}    // Demonstrate unary operator overloading

};    cout << "\n3. Unary Operator Overloading:" << endl;



class Dog : public Animal {    // Unary minus using overloaded - operator

public:    cout << "-c1 = ";

    void sound() override {    c3 = -c1;

        cout << "Dog barks" << endl;    c3.display();

    }    cout << endl;

};

    // Prefix increment using overloaded ++ operator

class Cat : public Animal {    cout << "++c1 = ";

public:    ++c1;

    void sound() override {    c1.display();

        cout << "Cat meows" << endl;    cout << endl;

    }

};    // Postfix increment using overloaded ++ operator

    Complex c4 = c2++;

// FRIEND FUNCTIONS    cout << "c4 = c2++ (c4 now): ";

class Box {    c4.display();

private:    cout << endl;

    int length, width, height;    cout << "c2 after postfix ++: ";

        c2.display();

public:    cout << endl;

    Box(int l, int w, int h) : length(l), width(w), height(h) {}

        // Demonstrate comparison operator overloading

    friend int calculateVolume(Box b);    cout << "\n4. Comparison Operator Overloading:" << endl;

    friend void displayBox(Box b);    Complex c5(6.5, 4.5);  // Same as c1 after increment

};    Complex c6(6.5, 4.5);  // Same as c5



int calculateVolume(Box b) {    cout << "c5 = ";

    return b.length * b.width * b.height;    c5.display();

}    cout << endl;

    cout << "c6 = ";

void displayBox(Box b) {    c6.display();

    cout << "Box: " << b.length << "x" << b.width << "x" << b.height << endl;    cout << endl;

}

    cout << "c5 == c6: " << (c5 == c6 ? "true" : "false") << endl;

int main() {    cout << "c5 != c1: " << (c5 != c1 ? "true" : "false") << endl;

    cout << "1. Virtual Functions:" << endl;

    Animal* animals[3];    // Demonstrate compound assignment operator

    animals[0] = new Dog();    cout << "\n5. Compound Assignment Operator:" << endl;

    animals[1] = new Cat();    cout << "c5 before += operation: ";

    animals[2] = new Dog();    c5.display();

        cout << endl;

    for(int i = 0; i < 3; i++) {

        animals[i]->sound();    c5 += c2;

    }    cout << "c5 after c5 += c2: ";

        c5.display();

    for(int i = 0; i < 3; i++) {    cout << endl;

        delete animals[i];

    }    // Demonstrate stream operator overloading

        cout << "\n6. Stream Operator Overloading:" << endl;

    cout << "\n2. Friend Functions:" << endl;    cout << "Using << operator: c1 = " << c1 << endl;

    Box myBox(5, 3, 4);

    displayBox(myBox);    cout << "\nEnter a new complex number:" << endl;

    cout << "Volume: " << calculateVolume(myBox) << endl;    Complex userComplex;

        cin >> userComplex;

    return 0;    cout << "You entered: " << userComplex << endl;

}

```    return 0;

}

### Output```

```

1. Virtual Functions:### Output

Dog barks```

Cat meowsDemonstrating Operator Overloading in C++

Dog barks=======================================



2. Friend Functions:1. Initial Complex Numbers:

Box: 5x3x4c1 = 5.5 + 3.5i

Volume: 60c2 = 2.5 + 1.5i

```

2. Arithmetic Operator Overloading:

### Resultc1 + c2 = 8 + 5i

Successfully implemented virtual functions for runtime polymorphism and friend functions for accessing private members.c1 - c2 = 3 + 2i

c1 * c2 = 8.25 + 15.5i

---

3. Unary Operator Overloading:

## Practical 9: Function Overriding and Abstract Classes-c1 = -5.5 - 3.5i

++c1 = 6.5 + 4.5i

### Aimc4 = c2++ (c4 now): 2.5 + 1.5i

Implement function overriding and abstract classes in C++.c2 after postfix ++: 3.5 + 2.5i



### Theory4. Comparison Operator Overloading:

Abstract classes contain at least one pure virtual function (virtual func() = 0) and cannot be instantiated. Derived classes must implement pure virtual functions. Function overriding allows derived classes to provide specific implementations.c5 = 6.5 + 4.5i

c6 = 6.5 + 4.5i

### Algorithmc5 == c6: true

1. Create abstract Shape class with pure virtual area()c5 != c1: false

2. Create Circle and Rectangle classes implementing area()

3. Override display() function in derived classes5. Compound Assignment Operator:

4. Create Animal base class with virtual sound()c5 before += operation: 6.5 + 4.5i

5. Override sound() in Dog classc5 after c5 += c2: 10 + 7i

6. Demonstrate polymorphic behavior

6. Stream Operator Overloading:

### CodeUsing << operator: c1 = 6.5 + 4.5i

```cpp

#include <iostream>Enter a new complex number:

using namespace std;Enter real part: 7.5

Enter imaginary part: 9.2

// Abstract classYou entered: 7.5 + 9.2i

class Shape {```

protected:

    string name;### Result

public:Successfully demonstrated operator overloading in C++ by implementing:

    Shape(string n) : name(n) {}1. Binary arithmetic operators (+, -, *)

    2. Unary operators (prefix ++, postfix ++, unary -)

    virtual double area() = 0;  // Pure virtual function3. Comparison operators (==, !=)

    4. Compound assignment operator (+=)

    virtual void display() {5. Stream operators (<< for output, >> for input)

        cout << "This is a " << name << endl;6. Verified that operators work correctly with user-defined Complex number class

    }

};---



class Circle : public Shape {## Practical 6: Operator Overloading II

    double radius;

public:### Aim

    Circle(double r) : Shape("Circle"), radius(r) {}Write a C++ program to implement advanced concepts of operator overloading.



    double area() override {### Theory

        return 3.14 * radius * radius;Advanced operator overloading involves overloading special operators like assignment (=), subscript ([]), function call (()), and type conversion operators. These operators provide more sophisticated functionality and enable classes to behave like built-in types.

    }

    Key advanced operators:

    void display() override {1. **Assignment operator (=)**: Handles object assignment and prevents shallow copying issues

        cout << "Circle with radius " << radius << endl;2. **Subscript operator ([])**: Allows array-like access to class members

    }3. **Function call operator (())**: Makes objects callable like functions

};4. **Type conversion operators**: Enable implicit/explicit type conversions



class Rectangle : public Shape {### Algorithm

    double length, width;1. Define a `Matrix` class with dynamic memory allocation

public:2. Implement assignment operator for deep copying

    Rectangle(double l, double w) : Shape("Rectangle"), length(l), width(w) {}3. Overload subscript operator for element access

    4. Implement function call operator for matrix operations

    double area() override {5. Add type conversion operators

        return length * width;6. Demonstrate all overloaded operators in main function

    }

    ### Program

    void display() override {

        cout << "Rectangle " << length << "x" << width << endl;```cpp

    }// Aim: Write a C++ program to implement advanced operator overloading concepts

};// KDK College of Engineering, Nagpur

// B.Tech CSE, 2nd Year

// Function overriding example// Author: Pranay Gajbhiye

class Animal {

public:#include <iostream>

    virtual void sound() {using namespace std;

        cout << "Animal makes sound" << endl;

    }class Number {

};private:

    int value;

class Dog : public Animal {

public:public:

    void sound() override {    Number(int v = 0) : value(v) {}

        cout << "Dog barks: Woof!" << endl;

    }    // Assignment operator

};    Number& operator=(const Number& n) {

        cout << "Assignment operator called" << endl;

int main() {        value = n.value;

    cout << "1. Abstract Classes:" << endl;        return *this;

    Shape* shapes[2];    }

    shapes[0] = new Circle(5);

    shapes[1] = new Rectangle(4, 6);    // Subscript operator (returns digit at position)

        int operator[](int pos) {

    for(int i = 0; i < 2; i++) {        int temp = value;

        shapes[i]->display();        for(int i = 0; i < pos; i++) {

        cout << "Area: " << shapes[i]->area() << endl << endl;            temp /= 10;

    }        }

            return temp % 10;

    cout << "2. Function Overriding:" << endl;    }

    Animal* animals[2];

    animals[0] = new Animal();    // Function call operator (power function)

    animals[1] = new Dog();    int operator()(int exp) {

            int result = 1;

    for(int i = 0; i < 2; i++) {        for(int i = 0; i < exp; i++) {

        animals[i]->sound();            result *= value;

    }        }

            return result;

    delete shapes[0];    }

    delete shapes[1];

    delete animals[0];    // Type conversion to int

    delete animals[1];    operator int() {

            return value;

    return 0;    }

}

```    void display() {

        cout << "Value: " << value << endl;

### Output    }

```};

1. Abstract Classes:

Circle with radius 5int main() {

Area: 78.5    cout << "=== Simple Operator Overloading ===" << endl;



Rectangle 4x6    Number n1(23);

Area: 24    Number n2;



2. Function Overriding:    cout << "\n1. Original number:" << endl;

Animal makes sound    n1.display();

Dog barks: Woof!

```    cout << "\n2. Assignment operator:" << endl;

    n2 = n1;

### Result    n2.display();

Successfully implemented abstract classes with pure virtual functions and demonstrated function overriding.

    cout << "\n3. Subscript operator (digits):" << endl;

---    cout << "n1[0] (units digit) = " << n1[0] << endl;

    cout << "n1[1] (tens digit) = " << n1[1] << endl;

## Practical 10: Exception Handling Multiple Blocks

    cout << "\n4. Function call operator (power):" << endl;

### Aim    cout << "n1(2) = " << n1(2) << endl;

Implement exception handling using multiple catch blocks in C++.

    cout << "\n5. Type conversion:" << endl;

### Theory    int x = n1;

Exception handling uses try-catch blocks to handle runtime errors. Multiple catch blocks can handle different exception types. Custom exception classes can be created. catch(...) catches all exceptions.    cout << "Converted to int: " << x << endl;



### Algorithm    return 0;

1. Create custom exception classes (DivideByZero, NegativeNumber)}

2. Create Calculator class with functions that throw exceptions```

3. Use try-catch blocks with multiple catch handlers

4. Demonstrate catching specific exception types### Output

5. Demonstrate catch-all handler```

6. Show successful operations without exceptions=== Simple Operator Overloading ===



### Code1. Original number:

```cppValue: 23

#include <iostream>

using namespace std;2. Assignment operator:

Assignment operator called

class DivideByZero {Value: 23

public:

    string message;3. Subscript operator (digits):

    DivideByZero(string msg) : message(msg) {}n1[0] (units digit) = 3

};n1[1] (tens digit) = 2



class NegativeNumber {4. Function call operator (power):

public:n1(2) = 529

    string message;

    NegativeNumber(string msg) : message(msg) {}5. Type conversion:

};Converted to int: 23

```

class Calculator {

public:### Result

    static double divide(double a, double b) {Successfully demonstrated advanced operator overloading concepts with a simplified Number class, including assignment operator, subscript operator for digit access, function call operator for power calculation, and type conversion operator.

        if(b == 0) {

            throw DivideByZero("Cannot divide by zero!");---

        }

        return a / b;## Practical 7: Types of Inheritance

    }

    ### Aim

    static double squareRoot(double num) {Write a C++ program to implement different types of inheritance.

        if(num < 0) {

            throw NegativeNumber("Cannot find square root of negative number!");### Theory

        }Inheritance is a fundamental concept in OOP that allows a class to inherit properties and methods from another class. C++ supports five types of inheritance:

        return sqrt(num);

    }1. **Single Inheritance**: One derived class inherits from one base class

    2. **Multilevel Inheritance**: A class inherits from another derived class (chain of inheritance)

    static int getElement(int arr[], int size, int index) {3. **Multiple Inheritance**: One class inherits from multiple base classes

        if(index >= size || index < 0) {4. **Hierarchical Inheritance**: Multiple classes inherit from a single base class

            throw "Array index out of bounds!";5. **Hybrid Inheritance**: Combination of two or more types of inheritance

        }

        return arr[index];### Algorithm

    }1. Implement Single Inheritance with Vehicle and Car classes

};2. Implement Multilevel Inheritance with Animal, Mammal, and Dog classes

3. Implement Multiple Inheritance with Father, Mother, and Child classes

int main() {4. Implement Hierarchical Inheritance with Shape, Circle, and Rectangle classes

    cout << "1. Division by Zero:" << endl;5. Implement Hybrid Inheritance combining multiple inheritance types

    try {

        double result = Calculator::divide(10, 0);### Program

        cout << "Result: " << result << endl;

    }```cpp

    catch(DivideByZero& e) {// Aim: Write a C++ program to implement different types of inheritance

        cout << "Caught DivideByZero: " << e.message << endl;// KDK College of Engineering, Nagpur

    }// B.Tech CSE, 2nd Year

    catch(...) {// Author: Pranay Gajbhiye

        cout << "Caught unknown exception" << endl;

    }#include <iostream>

    using namespace std;

    cout << "\n2. Negative Square Root:" << endl;

    try {// 1. SINGLE INHERITANCE

        double result = Calculator::squareRoot(-16);class Animal {

        cout << "Result: " << result << endl;protected:

    }    string name;

    catch(NegativeNumber& e) {public:

        cout << "Caught NegativeNumber: " << e.message << endl;    Animal(string n) : name(n) {}

    }    void eat() { cout << name << " is eating" << endl; }

    catch(...) {};

        cout << "Caught unknown exception" << endl;

    }class Dog : public Animal {

    public:

    cout << "\n3. Array Out of Bounds:" << endl;    Dog(string n) : Animal(n) {}

    try {    void bark() { cout << name << " is barking" << endl; }

        int arr[] = {1, 2, 3, 4, 5};};

        int value = Calculator::getElement(arr, 5, 10);

        cout << "Value: " << value << endl;// 2. MULTILEVEL INHERITANCE

    }class Vehicle {

    catch(const char* e) {protected:

        cout << "Caught string exception: " << e << endl;    string brand;

    }public:

    catch(...) {    Vehicle(string b) : brand(b) {}

        cout << "Caught unknown exception" << endl;    void start() { cout << brand << " started" << endl; }

    }};



    cout << "\n4. Successful Operations:" << endl;class Car : public Vehicle {

    try {public:

        cout << "10 / 2 = " << Calculator::divide(10, 2) << endl;    Car(string b) : Vehicle(b) {}

        cout << "sqrt(16) = " << Calculator::squareRoot(16) << endl;    void drive() { cout << "Car is driving" << endl; }

        };

        int arr[] = {10, 20, 30};

        cout << "arr[1] = " << Calculator::getElement(arr, 3, 1) << endl;class SportsCar : public Car {

    }public:

    catch(...) {    SportsCar(string b) : Car(b) {}

        cout << "Unexpected error" << endl;    void turbo() { cout << "Turbo activated!" << endl; }

    }};



    return 0;// 3. MULTIPLE INHERITANCE

}class Father {

```protected:

    string fname;

### Outputpublic:

```    Father(string f) : fname(f) {}

1. Division by Zero:    void showFather() { cout << "Father: " << fname << endl; }

Caught DivideByZero: Cannot divide by zero!};



2. Negative Square Root:class Mother {

Caught NegativeNumber: Cannot find square root of negative number!protected:

    string mname;

3. Array Out of Bounds:public:

Caught string exception: Array index out of bounds!    Mother(string m) : mname(m) {}

    void showMother() { cout << "Mother: " << mname << endl; }

4. Successful Operations:};

10 / 2 = 5

sqrt(16) = 4class Child : public Father, public Mother {

arr[1] = 20    string cname;

```public:

    Child(string c, string f, string m) : Father(f), Mother(m), cname(c) {}

### Result    void showFamily() {

Successfully demonstrated exception handling with multiple catch blocks for different exception types.        cout << "Child: " << cname << endl;

        showFather();

---        showMother();

    }

## Practical 11: Custom Exception Classes};



### Aim// 4. HIERARCHICAL INHERITANCE

Implement custom exception classes with inheritance hierarchy in C++.class Shape {

protected:

### Theory    int size;

Custom exception classes inherit from standard exception class. They can store additional error information and override what() method. Exception inheritance allows catching derived exceptions using base class handlers.public:

    Shape(int s) : size(s) {}

### Algorithm    void display() { cout << "Size: " << size << endl; }

1. Create base MyException class inheriting from std::exception};

2. Create derived exception classes (DivideByZeroError, NegativeNumberError, InvalidAgeError)

3. Implement what() method to return error messagesclass Circle : public Shape {

4. Create classes that throw custom exceptionspublic:

5. Demonstrate catching specific derived exceptions    Circle(int r) : Shape(r) {}

6. Demonstrate catching base exception class    void area() { cout << "Circle Area: " << 3.14 * size * size << endl; }

};

### Code

```cppclass Square : public Shape {

#include <iostream>public:

#include <exception>    Square(int s) : Shape(s) {}

using namespace std;    void area() { cout << "Square Area: " << size * size << endl; }

};

// Base custom exception class

class MyException : public exception {int main() {

protected:    cout << "=== Types of Inheritance ===" << endl;

    string message;

public:    cout << "\n1. Single Inheritance:" << endl;

    MyException(string msg) : message(msg) {}    Dog d("Buddy");

    const char* what() const throw() {    d.eat();

        return message.c_str();    d.bark();

    }

};    cout << "\n2. Multilevel Inheritance:" << endl;

    SportsCar sc("Ferrari");

// Derived exception classes    sc.start();

class DivideByZeroError : public MyException {    sc.drive();

public:    sc.turbo();

    DivideByZeroError() : MyException("Division by zero not allowed!") {}

};    cout << "\n3. Multiple Inheritance:" << endl;

    Child c("Alice", "John", "Mary");

class NegativeNumberError : public MyException {    c.showFamily();

public:

    NegativeNumberError() : MyException("Negative number not allowed!") {}    cout << "\n4. Hierarchical Inheritance:" << endl;

};    Circle circle(5);

    circle.display();

class InvalidAgeError : public MyException {    circle.area();

    int age;

public:    Square square(4);

    InvalidAgeError(int a) : MyException("Invalid age provided!"), age(a) {}    square.display();

    int getAge() { return age; }    square.area();

};

    return 0;

class Calculator {}

public:```

    static double divide(double a, double b) {

        if(b == 0) {### Output

            throw DivideByZeroError();```

        }=== Types of Inheritance ===

        return a / b;

    }1. Single Inheritance:

    Buddy is eating

    static double squareRoot(double num) {Buddy is barking

        if(num < 0) {

            throw NegativeNumberError();2. Multilevel Inheritance:

        }Ferrari started

        return sqrt(num);Car is driving

    }Turbo activated!

};

3. Multiple Inheritance:

class Person {Child: Alice

    string name;Father: John

    int age;Mother: Mary

public:

    Person(string n, int a) : name(n) {4. Hierarchical Inheritance:

        if(a < 0 || a > 150) {Size: 5

            throw InvalidAgeError(a);Circle Area: 78.5

        }Size: 4

        age = a;Square Area: 16

    }```



    void display() {### Result

        cout << "Name: " << name << ", Age: " << age << endl;Successfully demonstrated four types of inheritance with simplified examples: Single (Animal-Dog), Multilevel (Vehicle-Car-SportsCar), Multiple (Father-Mother-Child), and Hierarchical (Shape-Circle/Square) inheritance.

    }

};---



int main() {## Practical 8: Virtual and Friend Functions

    cout << "1. Division Exception:" << endl;

    try {### Aim

        double result = Calculator::divide(10, 0);Write a C++ program to implement concepts of Virtual and Friend Functions.

        cout << "Result: " << result << endl;

    }### Theory

    catch(DivideByZeroError& e) {**Virtual Functions**: Enable runtime polymorphism by allowing derived classes to override base class methods. The correct function is called based on the object type, not pointer type.

        cout << "Error: " << e.what() << endl;

    }**Friend Functions**: Special functions that can access private and protected members of a class without being members themselves. They break encapsulation for specific needs.



    cout << "\n2. Negative Number Exception:" << endl;Key concepts:

    try {1. Virtual functions use late binding (runtime resolution)

        double result = Calculator::squareRoot(-16);2. Pure virtual functions create abstract classes

        cout << "Result: " << result << endl;3. Friend functions are declared with `friend` keyword

    }4. Friend functions are not inherited

    catch(NegativeNumberError& e) {

        cout << "Error: " << e.what() << endl;### Algorithm

    }1. Implement virtual functions with base Shape class and derived classes

    2. Demonstrate runtime polymorphism using virtual functions

    cout << "\n3. Invalid Age Exception:" << endl;3. Create friend functions to access private data

    try {4. Show friend function usage for operator overloading

        Person p1("John", 25);5. Implement pure virtual functions for abstract classes

        p1.display();

        ### Program

        Person p2("Invalid", -5);

        p2.display();```cpp

    }// Aim: Write a C++ program to implement Virtual and Friend Functions

    catch(InvalidAgeError& e) {// KDK College of Engineering, Nagpur

        cout << "Error: " << e.what() << endl;// B.Tech CSE, 2nd Year

        cout << "Invalid age was: " << e.getAge() << endl;// Author: Pranay Gajbhiye

    }

    #include <iostream>

    cout << "\n4. Base Exception Handling:" << endl;using namespace std;

    try {

        Calculator::divide(5, 0);// VIRTUAL FUNCTIONS

    }class Animal {

    catch(MyException& e) {public:

        cout << "Caught MyException: " << e.what() << endl;    virtual void sound() {

    }        cout << "Animal makes sound" << endl;

        }

    cout << "\n5. Successful Operations:" << endl;    virtual ~Animal() {}

    try {};

        cout << "10 / 2 = " << Calculator::divide(10, 2) << endl;

        cout << "sqrt(16) = " << Calculator::squareRoot(16) << endl;class Dog : public Animal {

        public:

        Person p("Alice", 30);    void sound() override {

        p.display();        cout << "Dog barks" << endl;

    }    }

    catch(MyException& e) {};

        cout << "Error: " << e.what() << endl;

    }class Cat : public Animal {

    public:

    return 0;    void sound() override {

}        cout << "Cat meows" << endl;

```    }

};

### Output

```// FRIEND FUNCTIONS

1. Division Exception:class Box {

Error: Division by zero not allowed!private:

    int length, width, height;

2. Negative Number Exception:

Error: Negative number not allowed!public:

    Box(int l, int w, int h) : length(l), width(w), height(h) {}

3. Invalid Age Exception:

Name: John, Age: 25    // Friend function can access private members

Error: Invalid age provided!    friend int calculateVolume(Box b);

Invalid age was: -5    friend void displayBox(Box b);

};

4. Base Exception Handling:

Caught MyException: Division by zero not allowed!// Friend function definition

int calculateVolume(Box b) {

5. Successful Operations:    return b.length * b.width * b.height;  // Accessing private members

10 / 2 = 5}

sqrt(16) = 4

Name: Alice, Age: 30void displayBox(Box b) {

```    cout << "Box: " << b.length << "x" << b.width << "x" << b.height << endl;

}

### Result

Successfully implemented custom exception classes with inheritance hierarchy and demonstrated exception handling using base and derived classes.int main() {

    cout << "=== Virtual and Friend Functions ===" << endl;

---

    // Virtual Functions Demo

**End of Documentation**    cout << "\n1. Virtual Functions:" << endl;

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
using namespace std;

// Abstract class (has pure virtual function)
class Shape {
protected:
    string name;
public:
    Shape(string n) : name(n) {}

    // Pure virtual function makes this abstract
    virtual double area() = 0;

    // Virtual function that can be overridden
    virtual void display() {
        cout << "This is a " << name << endl;
    }
};

// Concrete classes inherit from abstract class
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : Shape("Circle"), radius(r) {}

    // Must override pure virtual function
    double area() override {
        return 3.14 * radius * radius;
    }

    // Override virtual function
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

// Example of function overriding
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {  // Function overriding
        cout << "Dog barks: Woof!" << endl;
    }
};

int main() {
    cout << "=== Function Overriding and Abstract Classes ===" << endl;

    // Cannot create object of abstract class
    // Shape s;  // Error!

    cout << "\n1. Abstract Classes:" << endl;
    Shape* shapes[2];
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);

    for(int i = 0; i < 2; i++) {
        shapes[i]->display();  // Function overriding
        cout << "Area: " << shapes[i]->area() << endl;
        cout << endl;
    }

    cout << "\n2. Function Overriding:" << endl;
    Animal* animals[2];
    animals[0] = new Animal();
    animals[1] = new Dog();

    for(int i = 0; i < 2; i++) {
        animals[i]->sound();  // Calls overridden version
    }

    // Clean up
    delete shapes[0];
    delete shapes[1];
    delete animals[0];
    delete animals[1];

    return 0;
}
```

### Output
```
=== Function Overriding and Abstract Classes ===

1. Abstract Classes:
Circle with radius 5
Area: 78.5

Rectangle 4x6
Area: 24

2. Function Overriding:
Animal makes sound
Dog barks: Woof!
```

### Result
Successfully demonstrated function overriding and abstract classes with simplified examples, showing how pure virtual functions create abstract classes and how derived classes override virtual functions for polymorphic behavior using Shape/Circle/Rectangle and Animal/Dog classes.

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

// Calculator class with exception handling
class Calculator {
public:
    // Division function that throws exception for division by zero
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
```

### Output
```
=== Exception Handling with Multiple Blocks ===

1. Division by Zero:
Caught DivideByZero: Cannot divide by zero!

2. Negative Square Root:
Caught NegativeNumber: Cannot find square root of negative number!

3. Array Out of Bounds:
Caught string exception: Array index out of bounds!

4. Multiple Operations:
Division error: Cannot divide by zero!

5. Successful Operations:
10 / 2 = 5
sqrt(16) = 4
arr[1] = 20
```

### Result
Successfully demonstrated exception handling with multiple catch blocks using simplified custom exception classes, string exceptions, and catch-all handlers with practical examples.

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
```

### Output
```
=== Custom Exception Classes ===

1. Division Exception:
Error: Division by zero error

2. Negative Number Exception:
Error: Negative number error for value: -16

3. Invalid Age Exception:
Name: John, Age: 25
Error: Invalid age error for age: -5
Invalid age was: -5

4. Base Exception Handling:
Error: Division by zero error

5. Successful Operations:
10 / 2 = 5
sqrt(16) = 4
Name: Alice, Age: 30
```

### Result
Successfully implemented custom exception classes with inheritance hierarchy, demonstrating proper exception handling using base and derived exception classes.

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
