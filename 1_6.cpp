#include <iostream>
#include <cmath>

int main() {
    double radius, area, circumference;

    // Input the radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate and print the area and circumference
    area = M_PI * pow(radius, 2);
    circumference = 2 * M_PI * radius;

    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;

    return 0;
}
