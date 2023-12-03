#include <iostream>
#include <cmath>
using namespace std;

double calculateAmount(double principal, int timeInYears, double rateOfInterest = 0.12) {
    double amount = principal * pow(1 + rateOfInterest, timeInYears);
    return amount;
}

int main() {
    double principal;
    int timeInYears;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the time period in years: ";
    cin >> timeInYears;
    double overallAmount = calculateAmount(principal, timeInYears);
    cout << "Overall amount after " << timeInYears << " years with default interest rate: " << overallAmount << endl;
    return 0;
}
