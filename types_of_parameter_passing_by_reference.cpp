#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void Swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a,b;
    a=10;
    b=20;

    Swap(a,b);
    cout<<a<<endl<<b<<endl;

    return 0;
}