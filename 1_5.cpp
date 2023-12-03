#include <iostream>

int main() {
    double length, width, area, perimeter;

    // Input the length and width
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Calculate and print the area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    std::cout << "Area of the rectangle: " << area << std::endl;
    std::cout << "Perimeter of the rectangle: " << perimeter << std::endl;

    return 0;
}
