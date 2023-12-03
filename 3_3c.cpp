#include <iostream>
using namespace std;

class PrimeChecker {
public:
    bool isPrime(int number) {
        if (number <= 1) {
            return false;
        }
        for (int i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    PrimeChecker primeChecker;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (primeChecker.isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}
