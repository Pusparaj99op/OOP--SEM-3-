// Aim: Write a C++ Program To Implement Concept Of Arithmetic Operation (Basically Calculator)
#include<iostream>
#include<conio.h>
#include<string>
using namespace std; //

class Calculator {
    private:
    double num1, num2;
    public:
    void getInput() {
        system("cls");
        cout << "\n=== Enter First numbers ==== " << endl;
        cin >> num1;
        cout << "\n=== Enter Second numbers ===" << endl;
        cin >> num2;
    }
    void add() {
        cout << "\n Sum Of " << num1 << " + " << num2 << " : " << num1 + num2 << endl;
    }
    void subtract() {
        cout << "\n Difference Of " << num1 << " + " << num2 << " : "  << num1 - num2 << endl;
    }
    void multiply() {
        cout << "\n Product Of " << num1 << " + " << num2 << " : "  << num1 * num2 << endl;
    }
    void divide() {
        if (num2 != 0)
            cout << "\n Quotient Of " << num1 << " + " << num2 << " : " << num1 / num2 << endl;
        else
            cout << "\n Division by zero error!" << endl;
    }
};
int main() {
    Calculator calc;
    
    int digit;
    system("cls");
    cout << "\n=== Arithmatic Calculator Gold Pro Max  ===" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "\n=== Select Operation === \n" << endl;
    cin >> digit;
    calc.getInput();
    if (digit == 1){
        calc.add();
    } else if (digit == 2) {
        calc.subtract();
    } else if (digit == 3) {
        calc.multiply();
    } else if (digit == 4) {
        calc.divide();
    } else {
        cout << "\n Invalid choice!" << endl;  
    }

    return 0;
}

// g++ -o Practical_1_B Practical_1_B.cpp
// .\Practicat_1_B.exe