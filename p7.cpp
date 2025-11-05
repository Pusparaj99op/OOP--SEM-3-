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