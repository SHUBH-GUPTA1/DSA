#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int i,j;
    char str1[10],str2[10];
    cout<<"enter 2 strings"<<endl;
    gets(str1);
    gets(str2);
    for(i=0;str1[i]!=0;i++){
        for(j=0;str2[j]!=0;j++){
            if(str1[i]==str2[j]){
                cout<<"strings are equal"<<endl;
            }
            else{
                cout<<"strings are not equal"<<endl;
            }
        }
    }
}