#include <iostream>
#include <string>
using namespace std;

class Publication {
protected:
    string title;
    float price;

public:
    virtual void accept() {
        cout << "Enter title: ";
        cin >> ws;
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
    }

    virtual void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

    virtual ~Publication() {}
};

class Book : public Publication {
    int pages;

public:
    void accept() override {
        try {
            Publication::accept();
            cout << "Enter number of pages: ";
            cin >> pages;
            if (price < 0 || pages < 0)
                throw 1;
        } catch (...) {
            cout << "Invalid data! Values set to zero.\n";
            title = "";
            price = 0;
            pages = 0;
        }
    }

    void display() override {
        Publication::display();
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Publication {
    float minutes;

public:
    void accept() override {
        try {
            Publication::accept();
            cout << "Enter playing time in minutes: ";
            cin >> minutes;
            if (price < 0 || minutes < 0)
                throw 1;
        } catch (...) {
            cout << "Invalid data! Values set to zero.\n";
            title = "";
            price = 0;
            minutes = 0;
        }
    }

    void display() override {
        Publication::display();
        cout << "Playing time: " << minutes << " minutes\n";
    }
};

int main() {
    Book b;
    Tape t;

    cout << "Enter book details:\n";
    b.accept();

    cout << "\nEnter tape details:\n";
    t.accept();

    cout << "\nBook details:\n";
    b.display();

    cout << "\nTape details:\n";
    t.display();

    return 0;
}
