#include <iostream>
using namespace std;

int main(){
    int n,i,j,p,s=0;
    cout<<"enter the last exponent"<<endl;
    cin>>n;
    for ( i = 1; i < n; i++)
    {
        p=1;
        for( j = 1;j<=i+1; j++)
        p=p*j;
        cout<<p;
        s=s+p;
        cout<<s;
    }       
    return 0;
}