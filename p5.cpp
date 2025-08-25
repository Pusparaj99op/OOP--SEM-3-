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