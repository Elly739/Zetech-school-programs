/*
Author: Okello Elly
Reg No: BSE-05-0003/2024
Description: Program to compute Bonus
Date: 22/05/2025
Version 1
*/
#include <iostream>

using namespace std;

int main()
{
    int Salary, Years_of_service, bonus, total_salary;
    cout << "ENTER YOUR SALARY:" << endl;
    cin>>Salary;

    cout<<"ENTER YOUR YEARS OF SERVICE:"<< endl;
    cin>>Years_of_service;
    /*cout<<"ENTER SALARY AND YEARS OF SERVICE<< end1;
    cin>>Salary>>Years of service;
    */
    if(Years_of_service<6){
        bonus= 0.06*Salary;
        }
    else if(Years_of_service>=6&&Years_of_service<=10){
        bonus=0.08*Salary;
    }
     else{
        bonus= 0.1*Salary;
     }
     total_salary= bonus + Salary;
    cout<<"THE NET BONUS IS:"<<bonus<<endl;
    cout<<"THE TOTAL SALARY IS:"<<total_salary<<endl;
    return 0;
}
