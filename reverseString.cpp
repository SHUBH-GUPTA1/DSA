#include <iostream>
#include<string.h>

using namespace std;
int main(){
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    int length=strlen(str);
    for(int i=length-1;i>=0;i--){
        cout<<str[i];
    }
}