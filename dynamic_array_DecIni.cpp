#include<iostream>
using namespace std;

int main()
{
    int i;
    int A[5]={1,2,3,4,5};         //normal array inside stack 
    int *p;
    p=new int[5];                 //array inside heap memory
    p[0]=6;
    p[1]=7;
    p[2]=8;
    p[3]=9;
    p[4]=10;


    for(i=0; i<5 ;i++)
    {
        cout<< A[i] << endl;
    }

    for(i=0; i<5 ;i++)
    {
        cout<< p[i] << endl;
    }

    delete [] p;
}
