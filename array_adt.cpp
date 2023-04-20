#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Array
{
    int *A;
    int size;
};

void display(struct Array arr)
{
    int i;
    cout<<"elements: "<<endl;
    for(i=0; i<arr.size; i++)
    {
        cout<<arr.A[i]<<endl;
    }
}

int main()
{   
    int n,i;
    struct Array arr;
    arr.size=0;
    cout<<"enter size of array: ";
    cin>>arr.size;

    arr.A=new int[arr.size];

    cout<<"enter numbers: ";
    for(i=0; i<arr.size; i++)
    {
        cin>>arr.A[i];
    }
    cout<<"array length is set to: "<<endl;
    cout<<arr.size<<endl;
    display(arr);
    return 0;
}