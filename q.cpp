#include <iostream>
using namespace std;

int main(){
    int fact,i,j,n,sum=0;
    cout<<"enter the last number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
          fact=1;
        for (j = 1; j <= i; j++)
        {
            fact=fact*j;
            sum=sum+(1/fact);
    }
    cout<<sum;
    }
}
