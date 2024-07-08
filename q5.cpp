#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    if(n%3==0 || n%7==0){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
    
}