#include <iostream>
#include <cmath>
using namespace std;

double PI = 3.1415;

void calculateAreaPerimeter(double length, double width) {
    double area = length * width;
    double perimeter = 2 * (length + width);
    cout << "Rectangle - Area: " << area << ", Perimeter: " << perimeter << endl;
}

void calculateAreaPerimeter(double side) {
    double area = pow(side, 2);
    double perimeter = 4 * side;
    cout << "Square - Area: " << area << ", Perimeter: " << perimeter << endl;
}

void calculateAreaPerimeter(double radius) {
    double area = PI * pow(radius, 2);
    double perimeter = 2 * PI * radius;
    cout << "Circle - Area: " << area << ", Circumference: " << perimeter << endl;
}

int main() {
    double rectangleLength = 6.0;
    double rectangleWidth = 4.0;
    calculateAreaPerimeter(rectangleLength, rectangleWidth);
    double squareSide = 5.0;
    calculateAreaPerimeter(squareSide);
    double circleRadius = 3.0;
    calculateAreaPerimeter(circleRadius);
    return 0;
}