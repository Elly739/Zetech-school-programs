/*
Author: Okello Elly
Reg No: BSE-05-0003/2024
Description: Program to calculate Simple interest by using functions
Date: 05/06/2025
Version 2
*/
#include <iostream>
#include <cmath>
using namespace std;
float SimpInt(float a,float b,float c){
  return (a*b*c)/100;
  }
int main()
{
float SIT,num1,num2,num3;
    cout << "ENTER THE PRINCIPAL AMOUNT:" << endl;
    cin>>num1;
    cout<<"ENTER TIME:"<<endl;
    cin>>num2;
    cout<<"ENTER RATE VALUE:"<<endl;
    cin>>num3;
    SIT= SimpInt(num1,num2,num3);
    cout<<"THE SIMPLE INTEREST IS:"<<SIT<<endl;
    return 0;
}
