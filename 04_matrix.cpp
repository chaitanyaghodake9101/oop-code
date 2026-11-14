#include <iostream>
using namespace std;

class Matrix {
    int a[10][10];
    int rows, cols;

public:
    void read() {
        cout << "Enter rows and columns: ";
        cin >> rows >> cols;

        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> a[i][j];
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    Matrix add(Matrix m) {
        Matrix result;
        result.rows = rows;
        result.cols = cols;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.a[i][j] = a[i][j] + m.a[i][j];
        return result;
    }

    Matrix subtract(Matrix m) {
        Matrix result;
        result.rows = rows;
        result.cols = cols;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.a[i][j] = a[i][j] - m.a[i][j];
        return result;
    }

    Matrix multiply(Matrix m) {
        Matrix result;
        result.rows = rows;
        result.cols = m.cols;

        for (int i = 0; i < result.rows; i++) {
            for (int j = 0; j < result.cols; j++) {
                result.a[i][j] = 0;
                for (int k = 0; k < cols; k++)
                    result.a[i][j] += a[i][k] * m.a[k][j];
            }
        }
        return result;
    }

    int getRows() { return rows; }
    int getCols() { return cols; }
};

int main() {
    Matrix a, b, result;

    cout << "First matrix:\n";
    a.read();

    cout << "Second matrix:\n";
    b.read();

    if (a.getRows() != b.getRows() || a.getCols() != b.getCols()) {
        cout << "Addition and subtraction not possible: dimensions differ.\n";
    } else {
        result = a.add(b);
        cout << "\nAddition:\n";
        result.display();

        result = a.subtract(b);
        cout << "\nSubtraction:\n";
        result.display();
    }

    if (a.getCols() != b.getRows()) {
        cout << "\nMultiplication not possible: dimensions differ.\n";
    } else {
        result = a.multiply(b);
        cout << "\nMultiplication:\n";
        result.display();
    }

    return 0;
}
