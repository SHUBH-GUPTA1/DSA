#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"enter the value of x,y"<<endl;
    cin>>x>>y;
    
   int val1=100-x;
   int val2=100-y;
   if(val1>val2){
   cout<<y;
   }
    else if(val2>val1){
   cout<<x;
   } 
    else if(val1=val2){
        cout<<0;
    }
    return 0;
}