#include <iostream>
using namespace std;

int main(){
    int i,j;                                 // ij  123456789
    for(i=1;i<=5;i++){                       //   1     *
        for(j=1;j<=9;j++){                   //   2   ***
            if(j>=6-i && j<=4+i){            //   3  *****
                cout<<"*";                   //   4  *******
            }                                //   5 *********
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
}