#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c,r1,r2,d;
    cout<<"enter the values of a b c"<<endl;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d>0){
    cout<<"roots are real & unequal"<<endl;
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    cout<<r1<<" "<<r2;
    }
    else if(d==0){
        cout<<"roots are real & equal"<<endl;
        r1=-b/2*a;
        r2=-b/2*a;
        cout<<r1<<" "<<r2;
    }
    else{
        cout<<"roots are imaginary"<<endl;
    }
}