#include <iostream>
using namespace std;

int main(){
    int r,c,mat[20][20],i,j;
    cout<<"enter the number of rows & columns"<<endl;
    cin>>r>>c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"Enter the matrix"<<endl;
            cin>>mat[i][j];
        }
    }
    cout<<"elements which are present in first & last row"<<endl;
    for(i=1;i<r;i++){
        for(j=0;j<c;j++){
            if(i==0 || i==r-1){
                cout<<mat[i][j];
            }
        }
    }
    
}