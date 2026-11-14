#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Staff {
    int id;
    string name;
    float salary;

public:
    void accept() {
        cout << "Enter staff ID: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> ws;
        getline(cin, name);
        cout << "Enter basic salary: ";
        cin >> salary;
    }

    void display() {
        float da = salary * 0.25;
        float hra = 800;
        float tax = salary * 0.15;
        float net = salary + da + hra - tax;

        cout << "\nStaff ID: " << id;
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << salary;
        cout << "\nDA (25%): " << da;
        cout << "\nHRA: " << hra;
        cout << "\nIncome Tax (15%): " << tax;
        cout << "\nNet Salary: " << net << "\n";
    }

    string getName() {
        return name;
    }
};

int main() {
    Staff s[3];

    cout << "Enter details of 3 staff members:\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nStaff " << i + 1 << endl;
        s[i].accept();
    }

    sort(s, s + 3, [](Staff a, Staff b) {
        return a.getName() < b.getName();
    });

    cout << "\nStaff details sorted by name:\n";
    for (int i = 0; i < 3; i++) {
        s[i].display();
    }

    return 0;
}
