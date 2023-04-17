#include<iostream>
#include<stdio.h>
using namespace std;











































































































struct Card
{
    int face;                     //1=A,2=2....
    int shape;                    //1=heart,2=diamond,...
    int colour;                   //0=black,1=red
};

int main()
{
    struct Card deck[52]={{1,0,0},{2,0,0},{3,0,0},{4,0,0}};   //many more fk m not gonna assign em all 

    cout<<(deck[0].shape)<<endl;
    cout<<(deck[1].face);

    return 0;
}