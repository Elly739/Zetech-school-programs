/*
Author: Okello Elly
Reg No: BSE-05-0003/2024
Description: Zetech Grading System Program
Date; 22/05/2025
Version 1
*/
#include <iostream>

using namespace std;

int main()
{
    //Declare variables
    int mark1,mark2,mark3,average;
    //prompting user to enter marks
    cout << "ENTER MARKS FOR FIRST UNIT:"<<endl;
    cin>>mark1;

    cout<<"ENTER MARKS FOR SECOND UNIT:"<<endl;
    cin>>mark2;

    cout<<"ENTER MARKS FOR THIRD UNIT:"<<endl;
    cin>>mark3;
//calculating average
average= (mark1+mark2+mark3)/3;
//display average
cout<<"THE AVERAGE SCORE IS:"<<average<<endl;

//Determining Grade
if(average>=70&&average<100)
    cout<<"YOUR OVERALL GRADE:A"<<endl;//output grade from if function
else if(average>=60)
    cout<<"YOUR OVERALL GRADE:B"<<endl;
else if(average>=50)
    cout<<"YOUR OVERALL GRADE:C"<<endl;
else if(average>=40)
    cout<<"YOUR OVERALL GRADE:D"<<endl;
else
    cout<<"YOUR OVERALL GRADE:E(FAIL)"<<endl;

    return 0;
}
