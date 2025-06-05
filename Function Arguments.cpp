/*
Author: Okello Elly
Reg No: BSE-05-0003/2024
Description: Program of Function Definitions and arguments
Date: 05/06/2025
Version 1
*/
#include <iostream>
#include <cmath>
using namespace std;
//function definition
int addition(int x, int y){
   return x+y;
}
int product(int c, int d){
 return c*d;
 }
float division(float a, float b){
 return a/b;
}
double CalcArea(double r){
 return r*r;
}
int main()
{
    int sum,Prod,Div,area,pie;
     pie=3.142;
    cout << "FUNCTIONS IN C++" << endl;
    //calling function arguments
    sum= addition(10,20);
    cout<<"Calling Addition:"<<sum<<endl;
    Prod= product(40,5);
    cout<<"Calling Product:"<<Prod<<endl;
    Div= division(40,5);
    cout<<"Calling Division:"<<Div<<endl;
    area= CalcArea(8)*pie;
    cout<<"Calling Area:"<<area<<endl;
    return 0;
}
