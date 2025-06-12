/*
Author: Okello Elly
Reg No: BSE-05-0003/2024
Description: USE OF CLASSES TO CALCULATE VOLUME AND SURFACEAREA OF A CYLINDER
Date; 12/06/2025
Version 1
*/

#include <iostream>
#include <string>
using namespace std;

class employee {
private:
    int idno;
    string name;
    string occupation;

public:
    // Method to input employee details
    void input() {
        cout << "Enter employee ID number: ";
        cin >> idno;
        cin.ignore(); // Clear newline character from the input buffer

        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter employee occupation: ";
        getline(cin, occupation);
    }

    // Method to display employee details
    void display() {
        cout << "\nEmployee Details:" << endl;
        cout << "ID Number: " << idno << endl;
        cout << "Name: " << name << endl;
        cout << "Occupation: " << occupation << endl;
    }
};

int main() {
    employee zu_emp;
    zu_emp.input();     // Prompt user for details
    zu_emp.display();   // Display entered details
    return 0;
}
