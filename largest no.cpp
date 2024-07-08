#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter 3 numbers"<<endl;
    cin>>x>>y>>z;
    if(x>=y && x>=z){
    cout<<"largest number"<<x;
    }
    else if(y>=x && y>=z){
        cout<<"largest number"<<y;
    }
    else if(z>=x && z>=y){
        cout<<"largest number"<<z;
    }
    return 0;
}