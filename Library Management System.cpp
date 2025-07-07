/*
Author: Okello Elly
Reg No: BSE-05-0003/2024
Description: A C++ program demonstrating object-oriented programming concepts by implementing a simple Library Management System with class inheritance.
Date: 03/07/2025
Version 1
*/
#include <iostream>
#include <string>
using namespace std;

// (i) Base class Person
class Person {
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

// (ii) Derived class LibraryMember
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;
public:
    LibraryMember(string n, int id, int books) {
        setName(n);
        memberID = id;
        booksBorrowed = books;
    }
    int getMemberID() {
        return memberID;
    }
    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

// (iii) Derived class PremiumMember
class PremiumMember : public LibraryMember {
private:
    double membershipFee;
public:
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books), membershipFee(fee) {}

    double getMembershipFee() {
        return membershipFee;
    }
};

// Example usage
int main() {
    LibraryMember lm("Alice", 101, 3);
    cout << "Library Member: " << lm.getName() << endl;
    cout << "Member ID: " << lm.getMemberID() << endl;
    cout << "Books Borrowed: " << lm.getBooksBorrowed() << endl;

    PremiumMember pm("Bob", 102, 5, 49.99);
    cout << "\nPremium Member: " << pm.getName() << endl;
    cout << "Member ID: " << pm.getMemberID() << endl;
    cout << "Books Borrowed: " << pm.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << pm.getMembershipFee() << endl;

    return 0;
}
