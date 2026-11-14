#include <iostream>
#include <string>
using namespace std;

template <class T>
class Library {
    T bookID;
    string bookName;

public:
    void addBook() {
        cout << "Enter book ID: ";
        cin >> bookID;
        cout << "Enter book name: ";
        cin >> ws;
        getline(cin, bookName);
    }

    void displayBook() {
        cout << "Book ID: " << bookID << endl;
        cout << "Book name: " << bookName << endl;
    }
};

int main() {
    Library<int> book;

    cout << "Add book details:\n";
    book.addBook();

    cout << "\nLibrary book details:\n";
    book.displayBook();

    return 0;
}
