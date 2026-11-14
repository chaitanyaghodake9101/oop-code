#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("data.txt");

    if (!outFile) {
        cout << "File cannot be created.\n";
        return 1;
    }

    outFile << "Hello! This is file handling in C++.\n";
    outFile << "This information is saved in a file.\n";
    outFile.close();

    ifstream inFile("data.txt");

    if (!inFile) {
        cout << "File cannot be opened.\n";
        return 1;
    }

    string line;
    cout << "File contents:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
