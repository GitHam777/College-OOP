#include <iostream>
#include <cmath>

int main() {
    double radius, volume;

    // Input the radius
    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    // Calculate and print the volume
    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
    std::cout << "Volume of the sphere: " << volume << std::endl;

    return 0;
}
