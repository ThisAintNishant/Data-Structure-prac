#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth; 
};

int main()
{
    // Rectangle r;               // this is declaring r object in Rectangle class
    Rectangle r={10,5};           //Declaring+Initialinzing 

    r.length=15;                  /* Reassigning variables
                                     with calling the function(yes can work too)*/
    r.breadth=10;                    

    cout<<"Area of rectangle is: "<<r.length*r.breadth<<endl;
    
    return 0;                     //Declaration and initialization of members/variables is done in th emain stack section of the structure
}