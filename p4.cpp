// Aim: Write a C++ program to implement a concept of Constructors?
// - Constructors are special member functions used to initialize objects when they are created. This aim focuses on understanding and implementing constructors.
// KDK College of Engineering, Nagpur
// B.Tech CSE, 2nd Year....
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