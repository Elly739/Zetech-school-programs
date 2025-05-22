/*
Author: Okello Elly
Reg No: BSE-05-0003/2024
Description: Program to calculate BMI
Date: 22/05/2025
Version 1
*/
#include <iostream>
#include <iomanip> // for std::setprecision

using namespace std;

int main()
{
    //Declare variables
    float weight, Height, BMI;
    cout << "ENTER YOUR WEIGHT IN KILOGRAMS:" << endl;//prompt the user to enter weight
    cin>>weight;

    cout<<"ENTER YOUR HEIGHT IN METRES:"<<endl;// allow the user to enter height
    cin>>Height;
    //calculate BMI
    BMI= weight/(Height*Height);
    //output BMI
    cout<<"BMI IS:"<<BMI<<endl;
    //classify individuals into categories
    if (BMI<18.5){
        cout<<"INDIVIDUAL CATEGORY:UNDERWEIGHT"<<endl;
    }
      else if (BMI<=24.9){
        cout<<"INDIVIDUAL CATEGORY:NORMAL WEIGHT"<<endl;
      }
      else if(BMI<29.9){
        cout<<"INDIVIDUAL CATEGORY:OVERWEIGHT"<<endl;
      }
      else{
        cout<<"INDIVIDUAL CATEGORY:OBESITY"<<endl;
      }
    return 0;
}
