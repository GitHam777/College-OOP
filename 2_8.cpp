#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    char accountType;
    double balance;

public:
    void initializeAccount(string name, int accNumber, char accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful. New balance: $" << balance << endl;
    }
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds. Withdrawal not allowed." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << endl;
        }
    }
    void displayInfo() {
        cout << "Account Information" << endl;
        cout << "Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.initializeAccount("John Doe", 123456, 'S', 1000.0);
    myAccount.displayInfo();
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.displayInfo();
    return 0;
}