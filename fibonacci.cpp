#include <iostream>
using namespace std;

int main(){
    int x=0,y=1,z,i,n;
    cout<<"enter the values"<<endl;
    cin>>n;
    cout<<x<<y;
    for(i=1;i<=n;i++)
    {
        z=x+y;
        x=y;
        y=z;
        cout<<z;

    }
    
}