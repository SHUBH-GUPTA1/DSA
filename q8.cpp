#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"enter the value of x,y"<<endl;
    cin>>x>>y;
    if(x>=20 && x<=30 && y>=20 && y<=30)
    {
      if(x>=y){
      return x;
      }
    else if(y>=x){
      return y; 
    }
    else if{
    cout<<0;
    }
    }
    return 0;
}