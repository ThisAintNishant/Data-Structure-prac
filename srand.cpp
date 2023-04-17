#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int x;
    //srand(0);
    srand(time(1));
    for(int x=0; x<5; x++)
    {
         
    cout<<(rand()%2)<<endl;    
}
}