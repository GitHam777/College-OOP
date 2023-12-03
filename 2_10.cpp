#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str1 = "Hello, ";
    string str2 = " world!";
    string result = str1 + str2;
    cout << "Concatenated string: " << result << endl;
    return 0;
}