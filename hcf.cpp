#include <iostream>
using namespace std;

int main()
{
    int n,x,y,r;
    cout<<"enter the value of x and y"<<endl;
    cin>>x>>y;
    while(true)
    {
        n=y;
        r=x%y;
        x=y;
        y=r;
        if(y==0)
        {
            break;
        }
    }
        cout<<"hcf is"<<n; 
}