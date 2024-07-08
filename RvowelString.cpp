#include <iostream>
using namespace std;

int main(){
    string str;      //char str[100];
    cout<<"enter the string"<<endl;
    getline(cin,str); //it can read both word ex-student coder .if only cin written then it can read only student.
    for(int i=0;i<str.length();i++){
    if(str[i]=='a' || str[i]=='A'){
    continue;
    }
    else if (str[i]=='e' || str[i]=='E'){
    continue;
    }
    else if (str[i]=='i' || str[i]=='I'){
    continue;
    }
    else if (str[i]=='o' || str[i]=='O'){
    continue;
    }
    else if (str[i]=='u' || str[i]=='U'){
    continue;
    }
    else{
        cout<<str[i];
    }
    }
}