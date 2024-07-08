#include <iostream>
using namespace std;

int main()
{
for(int i=1;i<=5;i++){
    int k=1;                            // 1
    for(int j=1;j<=5;j++){              // 1  1
                                        // 1  2  1
        if(j<=i){                       // 1  3  3  1
            cout<<k;                    // 1  4  6  4  1
            k=k*(i-j)/j;
        }                               //i=3 j=1 k=1 so [k=1*(3-1)/1=2]
    
    else {
        cout<<" ";
    }
}
cout<<endl;
}
}