#include <iostream>
using namespace std;

int main()
{
    int x,y,n,r;
    cout<<"enter the values of x and y"<<endl;
    cin>>x>>y;
    while(true)
    {
        n=x;
        r=x%y;
        if(r==0)
        {
        break;
        }
    x=x*2;
    }
    cout<<"lcm is: "<<n;
}