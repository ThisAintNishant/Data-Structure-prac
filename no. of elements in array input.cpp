#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size: ";
    cin>>n;
    
    int A[n];
    A[0]=2;

    for(int x:A)       //for each does not work on pointers
    {
        cout<<x<<endl;    //assigned values will show them and unassigned will give out garbage values 
    }


    return 0;  //variable size arrays cant be initialized and will recieve garbage values if we tried to print
}