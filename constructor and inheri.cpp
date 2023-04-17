#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"A is a dick";
    }
    
    ~A(){
        cout<<"hii";
    }
};

class B{
    public:
    B(){
        cout<<"B is a dick";
    }
};

class C:public A,public B
{
    public:
    C(){
        cout<<"C is a dick";
    }
    ~C(){
        cout<<"Distruct";
    }
};

int main()
{
    C obj;


    return 0;
}