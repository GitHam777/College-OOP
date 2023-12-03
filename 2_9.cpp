#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) {
        real = r;
        imag = i;
    }
    Complex operator+(Complex other) {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator-(Complex other) {
        return Complex(real - other.real, imag - other.imag);
    }
    void display() {
        cout << "Complex Number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex complex1(3.0, 4.0);
    Complex complex2(1.5, 2.5);
    Complex sum = complex1 + complex2;
    cout << "Result of addition:" << endl;
    sum.display();
    Complex diff = complex1 - complex2;
    cout << "Result of subtraction:" << endl;
    diff.display();
    return 0;
}