#include <iostream>

int main() {
    int num1, num2, sum;

    // Input two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate and print the sum
    sum = num1 + num2;
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
