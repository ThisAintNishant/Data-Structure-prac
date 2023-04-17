#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int a=10;
    int *p;
    p=&a;

    cout<<a<<endl;                                    //value
    cout<<p<<endl;                                    //address (&a is address of a)
    cout<<*p<<endl;                                   //accessing value of a through pointer assigned p

    //return 0;                                       //syntax dekhle 

    //now using pointer to access heap memory

    int *o;
    p=new int[5]  ;                                     //Cpp syntax                    
    //p=(int*)malloc(5*sizeof(int));                  //C syntax dont use this shit if want to then include<stdlib.h>

    int A[5]={1,2,3,4,5};
    o=A;                                              //dont type & because it is not used when initializing pointer with an array
    
    for(int i=0;i<5;i++)
    {
        cout<<o[i]<<endl;




        //free(o);                                      //whenever we are dynamically allocating memory we must release the memory wehn you have finished using it this is CPP syntax
        //delete []o;                                 //this is the same for C 
    }

    return 0;                                         //size of pointer is independent of the datatype it hold
}