#include <iostream>
using namespace std;

int main(){
    int n,r,sum=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    while(n!=0)
    {
       r= n%10;
       sum=sum*10+r;
       n=n/10;
    }
    cout<<"reverse sum is: "<<sum;
}
/*n=123
r=123%10=3   r=12%10=2     r=1%10=1
sum=3     sum=32      sum=321
n=n/10=12    n=n/10=1      n=n/10=0
now while(0!=0)--->false
reverse sum is:321
/*