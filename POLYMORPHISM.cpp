/*
Author: Okello Elly
Reg No: BSE-05-0003/2024
Description: A C++ program demonstrating polymorphism
Date: 10/07/2025
Version 13
*/
#include <iostream>
#include <cmath> //for maths functions
#define pie 3.142 // Constant

using namespace std;
// (i) Base class Shape
class Shape{
 private:
    void virtual area(){
    cout<<"Area calculation not defined for generic shape"<<endl;}
};
// (ii) Derived class Rectangle
class Rectangle: public Shape{
private:
    int length;
    int width;
public:
    //constructor
    Rectangle(int L, int W){
    length= L;
    width=W;
    }
 void area() {  // Display function
 cout<<length * width;}
    };
    // (ii) Derived class Circle
class Circle: public Shape{
private:
    int radius;
public:
    Circle(int r){ //constructor
    radius= r;
    }
     // Display function
void area(){
cout<< pie * radius* radius;
}
};

int main()
{
    // Creating and calling objects with random details
Rectangle M1(12,20);
Circle M2(11);
M1.area();
    return 0;
}
