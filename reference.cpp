#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int a=10;
    int &r=a;

    r++;
    cout<<a<<endl;
    cout<<r<<endl;
    
    return 0;
}