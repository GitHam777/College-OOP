#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i = 2; i <= sqrt(num); ++i) {
        if(num % i == 0) {
            return false;
        } 
    }
    return true;
}

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int n = 0;
    while(originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while(originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, n);
        originalNum /= 10;
    }
    return (sum == num);
}

int main(void) {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if(isPrime(number)) {
        cout << number << " is a Prime number" << endl;
    } else {
        cout << number << " is not a Prime number" << endl;
    }
    if(isArmstrong(number)) {
        cout << number << " is an Armstrong number" << endl;
    } else {
        cout << number << " is not an Armstrong number" << endl;
    }
    return 0;
}