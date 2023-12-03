#include <iostream>

// Function to check prime number
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;

    // Input a number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check and print whether the number is prime or not
    if (isPrime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}
