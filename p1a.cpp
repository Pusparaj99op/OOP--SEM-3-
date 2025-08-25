// Aim: To demonstrate the use of classes and objects in C++

#include <iostream>
#include <conio.h>
#include <string>  
using namespace std;


class student {
private: 
    string name;
    int roll_no;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_no;
    }
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};

int main() {
    student s1;  
    
    cout << "=== Student Information System ===" << endl;
    s1.input();   
    
    cout << "\n--- Student Details ---" << endl;
    s1.display(); 
    
    cout << "\nPress any key to exit..." << endl;
    
    cin.ignore(); 
    cin.get();    
    return 0;
}