#include <iostream>
#include <cmath>
using namespace std;

double PI = 3.1412;

double calculateVolume(double sideLength) {
    return pow(sideLength, 3);
}

double calculateVolume(double radius, double height) {
    return PI * pow(radius, 2) * height;
}

double calculateVolume(double length, double width, double height) {
    return length * width * height;
}

int main() {
    double cubeSide = 5.0;
    cout << "Volume of the cube with side length " << cubeSide << ": " << calculateVolume(cubeSide) << endl;
    double cylinderRadius = 3.0;
    double cylinderHeight = 8.0;
    cout << "Volume of the cylinder with radius " << cylinderRadius << " and height " << cylinderHeight << ": " << calculateVolume(cylinderRadius, cylinderHeight) << endl;
    double boxLength = 4.0;
    double boxWidth = 6.0;
    double boxHeight = 10.0;
    cout << "Volume of the rectangular box with dimensions " << boxLength << " x " << boxWidth << " x " << boxHeight << ": " << calculateVolume(boxLength, boxWidth, boxHeight) << endl;
    return 0;
}