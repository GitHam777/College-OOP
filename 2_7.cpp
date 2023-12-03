#include <iostream>
using namespace std;

#define SQUARE_MACRO(x) ((x) * (x))

inline double squareFunction(double x) {
    return x * x;
}

int main() {
    double number;
    cout << "Enter a floating-point number: ";
    cin >> number;
    double squareMacroResult = SQUARE_MACRO(number);
    cout << "Square using macro: " << squareMacroResult << endl;
    double squareFunctionResult = squareFunction(number);
    cout << "Square using inline function: " << squareFunctionResult << endl;
    return 0;
}