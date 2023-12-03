#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int age;
    double salary;
};

void modifyEmployeeDetails(Employee &employee) {
    cout << "Enter new details for employee " << employee.name << endl;
    cout << "Enter new name: ";
    getline(cin, employee.name);
    cout << "Enter new age: ";
    cin >> employee.age;
    cout << "Enter new salary: ";
    cin >> employee.salary;
}

int main(void) {
    Employee emp1;
    emp1.name = "John Doe";
    emp1.age = 30;
    emp1.salary = 50000.0;
    cout << "Initial employee details" << endl;
    cout << "Employee Name: " << emp1.name << endl;
    cout << "Employee Age: " << emp1.age << endl;
    cout << "Employee Salary: " << emp1.salary << endl;
    modifyEmployeeDetails(emp1);
    cout << "Modified employee details" << endl;
    cout << "Employee Name: " << emp1.name << endl;
    cout << "Employee Age: " << emp1.age << endl;
    cout << "Employee Salary: " << emp1.salary << endl;
    return 0;
}