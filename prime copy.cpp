#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not a prime number"<<endl;
            break;
        }
    }
         if(i==n)
         {
            cout<<"its a prime number"<<endl;
         } 
}