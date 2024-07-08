#include <iostream>
using namespace std;

int main(){
    int n,r,t,sum=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    t=n;
    while(n!=0)
    {
       r= n%10;
       sum=sum*10+r;
       n=n/10;
    }
    if(sum==t)
    {
        cout<<"its a palindrome"<<endl;
    }
    else
    cout<<"not a palindrome"<<endl;
}