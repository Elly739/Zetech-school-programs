/*
Author: Okello Elly
Reg No: BSE-05-0003/2024
Description: Program to show inheritance of classes
Date: 26/06/2025
Version 1
*/
#include <iostream>
#include <string>
using namespace std;

// (i) Base class
class AccountHolder {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
};

// (ii) Derived class BankAccount
class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;
public:
    BankAccount(string n, int accNum, double bal) {
        setName(n);
        accountNumber = accNum;
        balance = bal;
    }
    int getAccountNumber() {
        return accountNumber;
    }
    double getBalance() {
        return balance;
    }
};

// (iii) Derived class SavingsAccount
class SavingsAccount : public BankAccount {
private:
    double interestRate;
public:
    SavingsAccount(string n, int accNum, double bal, double intRate)
        : BankAccount(n, accNum, bal) {
        interestRate = intRate;
    }
    double getInterestRate() {
        return interestRate;
    }
};

// Example usage
int main() {
    // Create a SavingsAccount object
    SavingsAccount acc("Alice", 12345, 1000.0, 2.5);

    cout << "Account Holder Name: " << acc.getName() << endl;
    cout << "Account Number: " << acc.getAccountNumber() << endl;
    cout << "Balance: $" << acc.getBalance() << endl;
    cout << "Interest Rate: " << acc.getInterestRate() << "%" << endl;

    return 0;
}
