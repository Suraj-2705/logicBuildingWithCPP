#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize accountNumber and balance
    BankAccount(int accNo, double bal) : accountNumber(accNo), balance(bal) {}

    // Friend function declaration, allowing Manager to access private members
    friend class Manager;
};

class Manager {
public:
    // Function to view account details by accessing private members of BankAccount
    void viewAccountDetails(BankAccount &acc) {
        cout << "Account Number: " << acc.accountNumber << endl;
        cout << "Balance: $" << acc.balance << endl;
    }
};

int main() {
    // Creating a BankAccount object with account number and balance
    BankAccount acc(12345, 10000.75);

    // Creating a Manager object
    Manager mgr;

    // Manager accessing and displaying account details
    mgr.viewAccountDetails(acc);

    return 0;
}
