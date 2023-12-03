#include <iostream>
using namespace std;

class MyNumber {
private:
    int value;

public:
    MyNumber(int val) {
        value = val;
    }
    MyNumber operator-() {
        return MyNumber(-value);
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    MyNumber num1(10);
    cout << "Original value:" << endl;
    num1.display();
    MyNumber num2 = -num1;
    cout << "After unary minus overload:" << endl;
    num2.display();
    return 0;
}