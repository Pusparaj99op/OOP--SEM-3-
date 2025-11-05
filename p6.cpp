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