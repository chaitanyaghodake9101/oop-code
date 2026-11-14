#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "A: Default constructor\n";
    }

    A(int x) {
        cout << "A: Parameterized constructor, value = " << x << endl;
    }

    A(const A&) {
        cout << "A: Copy constructor\n";
    }

    ~A() {
        cout << "A: Destructor\n";
    }
};

class B {
public:
    B() {
        cout << "B: Default constructor\n";
    }

    ~B() {
        cout << "B: Destructor\n";
    }
};

class C : public A, public B {
public:
    C() {
        cout << "C: Derived class constructor\n";
    }

    ~C() {
        cout << "C: Derived class destructor\n";
    }
};

int main() {
    cout << "Creating objects:\n";
    A first;
    A second(10);
    A third(first);

    cout << "\nCreating derived object:\n";
    C obj;

    cout << "\nEnd of program:\n";
    return 0;
}
