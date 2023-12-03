#include <iostream>

int main() {
    int num, reversed = 0, remainder;

    // Input a number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    std::cout << "Reversed Number: " << reversed << std::endl;

    return 0;
}
