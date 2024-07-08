#include<iostream>

using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    if(n>51)
    {
    cout<<(n-51)*3;
    }
    else if(n<=51)
    {
    cout<<(51-n);
    }
return 0;
}