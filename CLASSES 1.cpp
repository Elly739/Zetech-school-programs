/*
Author: Okello Elly
Reg No: BSE-05-0003/2024
Description: USE OF CLASSES TO CALCULATE VOLUME AND SURFACEAREA OF A CYLINDER
Date; 12/06/2025
Version 1
*/


#include <iostream>
#include<cmath>
using namespace std;
class Cylinder{
public:
    double radius,height,pie;
    double volume(){
      return (pie * radius* height);
    }
    double surface_area(){
      return (2* pie* pow(radius,2) + 2* pie * radius* height);
    }
};

int main()
{
    Cylinder c1;
    cout << "ENTER PIE:" << endl;
    cin>>c1.pie;
    cout<<"ENTER RADIUS:"<<endl;
    cin>>c1.radius;
    cout<<"ENTER HEIGHT:"<<endl;
    cin>>c1.height;

    cout<<" THE VOLUME OF THE CYLINDER IS:"<<c1.volume()<<endl;
    cout<<"THE SURFACEAREA OF THE CYLINDER IS:"<<c1.surface_area()<<endl;
    return 0;
}
