#include <iostream>
using namespace std;

int main(){
    int n,i,f;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    f=n;
    for(i=1;i<n;i++)
    {
        f=f*i;
    }
    cout<<f;
    
}
/*enter the value
5
i=1 2 3 4
f=5*1=5 
f=5*2=10
f=10*3=30
f=30*4=120
/*