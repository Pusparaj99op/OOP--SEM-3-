// Aim : write the C++ Program to implement the concept of parameter techniques in function
// <A> Call By Value
// <B> Call By Refernce

#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

class ParameterDemo {
public:
    // Call by Value
    void callByValue(int a) {
        a = a + 10;
        cout << "Inside callByValue, a = " << a << endl;
    }

    // Call by Reference
    void callByReference(int &b) {
        b = b + 10;
        cout << "Inside callByReference, b = " << b << endl;
    }
};

int main() {
    int x = 5, y = 5;
    ParameterDemo obj;

    cout << "Before callByValue, x = " << x << endl;
    obj.callByValue(x);
    cout << "After callByValue, x = " << x << endl << endl;

    cout << "Before callByReference, y = " << y << endl;
    obj.callByReference(y);
    cout << "After callByReference, y = " << y << endl;

    return 0;
}

