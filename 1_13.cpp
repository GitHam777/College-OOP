#include <iostream>

int main() {
    int num, originalNum, reversed = 0, remainder;

    // Input a number
    std::cout << "Enter a number: ";
    std::cin >> num;

    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNum == reversed) {
        std::cout << originalNum << " is a palindrome." << std::endl;
    } else {
        std::cout << originalNum << " is not a palindrome." << std::endl;
    }

    return 0;
}
