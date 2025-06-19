/*
Author: Okello Elly
Reg No: BSE-05-0003/2024
Description: Car Class in C++: Encapsulation, Initialization, and Mileage Simulation
Date: 19/06/2025
Version 2
*/
#include <iostream>
#include <string>
using namespace std;

class Car{
  private:
      string brand;
      string model;
      float price;
      int mileage;
  public:
    //constructor
      Car(string B, string M, float P, int G){
      brand= B;
      model= M;
      price= P;
      mileage= G;
      }
       // Display function
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }
    //drive function
    void drive(int distance){
     mileage+=distance;
      cout << "Updated mileage after driving " << distance << " miles: " << mileage << " miles" << endl;
    }
};
int main()
{
     // Creating Car object with given details
    Car myCar("Toyota", "Corolla", 20000.0, 5000);
     // Display car details
    myCar.display();
    // Drive for 150 miles
    myCar.drive(150);
    // Drive for another 300 miles
    myCar.drive(300);

    return 0;
}
