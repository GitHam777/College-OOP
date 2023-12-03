#include <iostream>
#include <cmath>

int main() {
    double radius, height, volume;

    // Input the radius and height
    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;

    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height;

    // Calculate and print the volume
    volume = M_PI * pow(radius, 2) * height;
    std::cout << "Volume of the cylinder: " << volume << std::endl;

    return 0;
}
