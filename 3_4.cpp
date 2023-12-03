#include <iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass() {
        data = 0;
        cout << "Default Constructor called" << endl;
    }
    MyClass(int value) {
        data = value;
        cout << "Parameterized Constructor called with value: " << value << endl;
    }
    MyClass(MyClass &other) {
        data = other.data;
        cout << "Copy Constructor called with value: " << data << endl;
    }
    ~MyClass() {
        cout << "Destructor called for value: " << data << endl;
    }
    void displayData() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    MyClass obj1;
    MyClass obj2(42);
    MyClass obj3 = obj2;
    obj1.displayData();
    obj2.displayData();
    obj3.displayData();
    return 0;
}
