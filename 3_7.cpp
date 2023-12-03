#include <iostream>
using namespace std;

class NumberComparison {
private:
    int num1;
    int num2;
public:
    NumberComparison(int a, int b) {
        num1 = a;
        num2 = b;
    }
    friend int findLarger(NumberComparison &obj);
};

int findLarger(NumberComparison &obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    NumberComparison numbers(23, 42);
    int largerNumber = findLarger(numbers);
    cout << "The larger number is: " << largerNumber << endl;
    return 0;
}
