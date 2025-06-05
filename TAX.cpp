/*
Author: Okello Elly
Reg No: BSE-05-0003/2024
Description: Program to calculate Taxes on wage of hours worked a week and displays net pay
Date: 05/06/2025
Version 3
*/
#include <iostream>
#include <cmath>
using namespace std;

// Constants
const float STANDARD_HOURS = 40.0;
const float OVERTIME_RATE = 1.5;
const float TAX_RATE_1 = 0.15;
const float TAX_RATE_2 = 0.20;
const float TAX_BRACKET = 600.0;

// Function to calculate gross pay
float calculateGrossPay(float h, float w) {
    if (h <= STANDARD_HOURS) {
        return h * w;
    } else {
        float overtimeHours = h - STANDARD_HOURS;
        return (STANDARD_HOURS * w) + (overtimeHours * w * OVERTIME_RATE);
    }
}

// Function to calculate taxes
float calculateTax(float gross) {
    if (gross <= TAX_BRACKET) {
        return gross * TAX_RATE_1;
    } else {
        return (TAX_BRACKET * TAX_RATE_1) + ((gross - TAX_BRACKET) * TAX_RATE_2);
    }
}

// Function to calculate net pay
float calculateNetPay(float gross, float tax) {
    return gross - tax;
}

int main() {
    float hoursWorked, hourlyWage;
    cout << "Enter hours worked this week: ";
    cin >> hoursWorked;
    cout << "Enter hourly wage: ";
    cin >> hourlyWage;

    float grossPay = calculateGrossPay(hoursWorked, hourlyWage);
    float tax = calculateTax(grossPay);
    float netPay = calculateNetPay(grossPay, tax);

    cout << " Payment Summary" << endl;
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Taxes:     $" << tax << endl;
    cout << "Net Pay:   $" << netPay << endl;

    return 0;
}
