#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator*(Complex c) {
        return Complex(real * c.real - imag * c.imag,
                       real * c.imag + imag * c.real);
    }

    friend istream& operator>>(istream& in, Complex& c) {
        cout << "Enter real and imaginary parts: ";
        in >> c.real >> c.imag;
        return in;
    }

    friend ostream& operator<<(ostream& out, Complex c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main() {
    Complex a, b;
    cin >> a;
    cin >> b;

    Complex sum = a + b;
    Complex product = a * b;

    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;
    cout << "Addition: " << sum << endl;
    cout << "Multiplication: " << product << endl;

    return 0;
}
