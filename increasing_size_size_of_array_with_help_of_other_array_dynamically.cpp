#include <iostream>
using namespace std;

int main()
{
    int i;
    int *p=new int[5];               // |1|2|3|4|5|
    int *q=new int[10];              // | | | | | | | | | | |
    
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;

    for (i=0; i<5; i++)
    {
        q[i]=p[i];                    // |1|2|3|4|5| | | | | |
    }
    free(p);
    p=q;
    q=NULL;

    for (i=0; i<10; i++)
    {
        cout<<p[i]<<endl;
    }
    delete [] p;
}