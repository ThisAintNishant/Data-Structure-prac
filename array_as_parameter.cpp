#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void func(int *A, int n)     //arrays can only be passed with address wheather in c/c++

{
    int i;
    for (i=0; i<n; i++)
    {
        cout<<A[i]<<endl;
    }
}
int main()
{
   int A[5]={5,4,3,2,1};
   func(A,5);
    return 0;
}