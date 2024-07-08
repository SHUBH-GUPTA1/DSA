#include <iostream>
using namespace std;
//C++ program to find the larger value from two positive integer values that is in the range 20..30 inclusive, or return 0 if neither is in that range
int main(){
    int x,y;
    cout<<"enter the value of x,y"<<endl;
    cin>>x>>y;
    if(x>=20 && x<=30 && y>=20 && y<=30)
    {
        if(x<=y)
        return x;
        else 
        return y;
    }
    else
    return 0;
}