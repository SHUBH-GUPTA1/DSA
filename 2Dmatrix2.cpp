#include <iostream>
using namespace std;

int main(){
    int i,j,r,c,mat[20][20];
    cout<<"enter the value of rows & columns"<<endl;
    cin>>r>>c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"enter the matrix"<<endl;
            cin>>mat[i][j];
        }
    }
    cout<<"the diagonal elements are"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j )
            cout<<mat[i][j];
        }
    }
}