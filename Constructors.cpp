/*
Author: Okello Elly
Reg No: BSE-05-0003/2024
Description: C++ program demonstrates the use of classes, constructors, and destructors.
Date: 19/06/2025
Version 1
*/
#include <iostream>
#include <string>
using namespace std;
class Car{ //the class;
  public://class specifier
      //attributes
      string brand;
      string model;
      int series;
      int year;
      Car(string A, string B, int C, int X){
      brand = A;
      model = B;
      series = C;
      year = X;
      cout<<"memory construct"<<endl;
      }
      ~Car(){
      cout<<"memory destruct"<<endl;
      }
};

int main()
{
    //create an object and call the constructor with different values
    Car carObj1("BMW", "CX5", 7, 2019);
    Car carObj2("Ford","Mustang",8,1999);
    Car carObj3("Toyota","Land Cruiser", 300,2022);
    //print values
    cout <<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.series<<" "<<carObj1.year<< endl;
    cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.series<<" "<<carObj2.year<< endl;
    cout<<carObj3.brand<<" "<<carObj3.model<<" "<<carObj3.series<<" "<<carObj3.year<< endl;
    return 0;
}
