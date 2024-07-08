#include <iostream>
using namespace std;
//a C++ program to check if two given non-negative integers have the same last digit. 
int main(){
    int x,y;
    cout<<"enter the value of x,y"<<endl;
    cin>>x>>y;
    if(x%10==y%10)
    cout<<1;
    else
    return 0;
}