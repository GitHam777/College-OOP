#include <iostream>

int main() {
    int n, first = 0, second = 1, next;

    // Input the number of terms in the series
    std::cout << "Enter the number of terms in the Fibonacci series: ";
    std::cin >> n;

    std::cout << "Fibonacci Series:" << std::endl;

    // Display the Fibonacci Series
    for (int i = 0; i < n; ++i) {
        std::cout << first << ", ";

        next = first + second;
        first = second;
        second = next;
    }

    std::cout << std::endl;

    return 0;
}
