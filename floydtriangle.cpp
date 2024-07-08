#include <iostream>
using namespace std;

int main(){
    int i,j,n,k=1;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=i)
            {
            cout<<k;
            k++;
        }
    else{
    cout<<" ";
    }
    }
    cout<<endl;
    }

}