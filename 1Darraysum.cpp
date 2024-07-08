#include <iostream>
using namespace std;

int main(){
    int arr[4],sum=0,avg;
    cout<<"enter the value "<<endl;
    for(int i=1;i<=4;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    avg=sum/4;
    cout<<"average is"<<avg;
    
}