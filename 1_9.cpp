#include <iostream>

int main() {
    int year;

    // Input a year
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Check and print whether the year is a leap year or not
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
