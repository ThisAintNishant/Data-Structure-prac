#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle                 //in C struct is mandatory in Cpp its not
{
    int length;
    int breadth;
};

/* normal
int main()
{
    Rectangle r={10,5};
    Rectangle *p=&r;

    (*p).length=20;              //CPP syntax
    p->length=20;                //C syntax easyyy


    return 0;
} 
*/

// in heap memory now
int main ()
{
    Rectangle *p;
    p=new Rectangle;

    p->length=10;
    p->breadth=5;

    cout<<p->length<<endl<<p->breadth<<endl;

    return 0;
}
