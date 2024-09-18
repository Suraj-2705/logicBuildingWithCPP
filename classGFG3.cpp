#include <iostream>
using namespace std;

// BankAccount class definition
class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account number and balance
    BankAccount(int accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    // Declare the viewAccountDetails() function of Manager as a friend
    friend class Manager;
};

// Manager class definition
class Manager {
public:
    // Function to view account details (account number and balance)
    void viewAccountDetails(BankAccount &acc) {
        // Access private members of BankAccount
        cout << "Account Number: " << acc.accountNumber << endl;
        cout << "Balance: " << acc.balance << endl;
    }
};

int main() {
    // Create a BankAccount object with account number and balance
    BankAccount account(123456789, 2500.75);

    // Create a Manager object
    Manager manager;

    // Manager views the account details
    manager.viewAccountDetails(account);

    return 0;
}