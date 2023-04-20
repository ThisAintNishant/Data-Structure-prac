#include <iostream>
using namespace std;

int main()
{
    int A[10]={2,4,6,8,10};

    cout<<sizeof(A)<<endl;
    cout<<A[8]<<endl;
    cout << A[2] << endl;
    cout << A[9];

    
   for(int x:A)  //for each loop using 
   {
    cout<<x<<endl;  
   }


    return 0;     //initialized values will show and rest will be zeros
}