#include <iostream>
using namespace std;

class MyClass {
private:
    int privateData;

public:
    MyClass(int value) {
        privateData = value;
    }
    void displayInside() {
        cout << "Inside displayInside() - Private Data: " << privateData << endl;
    }
    void displayOutside();
    int getPrivateData() {
        return privateData;
    }
};

void MyClass::displayOutside() {
    cout << "Outside displayOutside() - Private Data: " << privateData << endl;
}

int main() {
    MyClass myObject(42);
    myObject.displayInside();
    myObject.displayOutside();
    cout << "Accessing Private Data from Main(): " << myObject.getPrivateData() << endl;
    return 0;
}