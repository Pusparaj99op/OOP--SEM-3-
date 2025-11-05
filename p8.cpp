// Aim: Write a C++ program to implement Virtual and Friend Functions
// KDK College of Engineering, Nagpur
// B.Tech CSE, 2nd Year
// Author: Pranay Gajbhiye

#include <iostream>
using namespace std;

// VIRTUAL FUNCTIONS
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes sound" << endl;
    }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

// FRIEND FUNCTIONS
class Box {
private:
    int length, width, height;

public:
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    // Friend function can access private members
    friend int calculateVolume(Box b);
    friend void displayBox(Box b);
};

// Friend function definition
int calculateVolume(Box b) {
    return b.length * b.width * b.height;  // Accessing private members
}

void displayBox(Box b) {
    cout << "Box: " << b.length << "x" << b.width << "x" << b.height << endl;
}

int main() {
    cout << "=== Virtual and Friend Functions ===" << endl;

    // Virtual Functions Demo
    cout << "\n1. Virtual Functions:" << endl;
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