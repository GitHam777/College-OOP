#include <iostream>
#include <cmath>
using namespace std;

class SphereVolumeCalculator {
public:
    double calculateVolume(double radius) {
        return (4.0 / 3.0) * M_PI * pow(radius, 3);
    }
};

int main() {
    SphereVolumeCalculator sphereCalculator;
    double radius;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    double volume = sphereCalculator.calculateVolume(radius);
    cout << "Volume of the sphere with radius " << radius << " is: " << volume << endl;
    return 0;
}
