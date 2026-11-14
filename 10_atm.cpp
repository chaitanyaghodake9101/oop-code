#include <iostream>
using namespace std;

int main() {
    double balance = 5000;
    int choice;
    double amount;

    do {
        cout << "\n--- ATM MENU ---\n";
        cout << "1. Check balance\n";
        cout << "2. Deposit money\n";
        cout << "3. Withdraw money\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";

        try {
            if (!(cin >> choice))
                throw "Invalid input";

            switch (choice) {
                case 1:
                    cout << "Current balance: Rs. " << balance << endl;
                    break;

                case 2:
                    cout << "Enter deposit amount: ";
                    if (!(cin >> amount) || amount <= 0)
                        throw "Invalid amount";
                    balance += amount;
                    cout << "Money deposited successfully.\n";
                    break;

                case 3:
                    cout << "Enter withdrawal amount: ";
                    if (!(cin >> amount) || amount <= 0)
                        throw "Invalid amount";
                    if (amount > balance)
                        throw "Insufficient funds";
                    balance -= amount;
                    cout << "Please collect your money.\n";
                    break;

                case 4:
                    cout << "Thank you for using ATM.\n";
                    break;

                default:
                    throw "Invalid choice";
            }
        } catch (const char* message) {
            cout << "Error: " << message << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }

    } while (choice != 4);

    return 0;
}
