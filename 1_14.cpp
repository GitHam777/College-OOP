#include <iostream>
#include <cmath>

int main() {
    int num, originalNum, sum = 0, digit;

    // Input a number
    std::cout << "Enter a number: ";
    std::cin >> num;

    originalNum = num;

    // Calculate the sum of cubes of digits
    while (num != 0) {
        digit = num % 10;
        sum += std::pow(digit, 3);
        num /= 10;
    }

    // Check if the original number is an Armstrong number
    if (originalNum == sum) {
        std::cout << originalNum << " is an Armstrong number." << std::endl;
    } else {
        std::cout << originalNum << " is not an Armstrong number." << std::endl;
    }

    return 0;
}
