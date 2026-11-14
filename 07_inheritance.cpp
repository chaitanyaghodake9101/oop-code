#include <iostream>
using namespace std;

// Single inheritance
class Animal {
public:
    void eat() {
        cout << "Animal eats food.\n";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks.\n";
    }
};

// Multiple inheritance
class Father {
public:
    void fatherWork() {
        cout << "Father class function.\n";
    }
};

class Mother {
public:
    void motherWork() {
        cout << "Mother class function.\n";
    }
};

class Child : public Father, public Mother {};

// Multilevel inheritance
class Grandparent {
public:
    void showGrandparent() {
        cout << "Grandparent class.\n";
    }
};

class Parent : public Grandparent {};

class Son : public Parent {};

// Hierarchical inheritance
class Shape {
public:
    void showShape() {
        cout << "This is a shape.\n";
    }
};

class Circle : public Shape {};
class Square : public Shape {};

int main() {
    cout << "Single inheritance:\n";
    Dog d;
    d.eat();
    d.bark();

    cout << "\nMultiple inheritance:\n";
    Child c;
    c.fatherWork();
    c.motherWork();

    cout << "\nMultilevel inheritance:\n";
    Son s;
    s.showGrandparent();

    cout << "\nHierarchical inheritance:\n";
    Circle circle;
    Square square;
    circle.showShape();
    square.showShape();

    return 0;
}
