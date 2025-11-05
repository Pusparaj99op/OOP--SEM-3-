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