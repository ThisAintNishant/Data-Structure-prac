#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void Swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
};

int main()
{   
    //passing by value
    int a,b;
    a=10;
    b=20;

    Swap(a,b);
    cout<<a<<endl<<b<<endl;

    return 0;
    
    //In this any changes done in formal parameter are not reflected in actual parameters
    //can be used for operations like addition not swap
}