#include <iostream>
using namespace std;

int main()
{
    int i,j;
    //there are ways to declare 2d arrays
    //way 0  (normal way in stack mem)

    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    //way 1  (using pointer array and actual data in heap mem)

    int *R[3];

    R[0]=new int[4];
    R[1]=new int[4];
    R[2]=new int[4];
    
    R[1][2]=15;

    //way 2  (double pointer everything in heap mem)

    int **Y;      //inside stack mem

    Y=new int*[3];          //array of pointers is created in heap mem

    Y[0]=new int[4];
    Y[1]=new int[4];
    Y[2]=new int[4];

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            cout<<A[i][j]<<endl;
        }
    }
}