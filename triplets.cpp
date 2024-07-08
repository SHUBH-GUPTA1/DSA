#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int d[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &d[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (d[j] > d[i]) {
                for (int k = j+1; k < n; k++) {
                    if (d[k] > d[j]) {
                        count++;
                    }
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}
/*6
1 1 2 2 3 4
count=0
i=0,j=2
(d[j]=2,d[i]=1)
k=4 d[k]=3 count=1(1,2,3) & count=2(1,2,4)

i=0,j=3
(d[j]=2,d[i]=1)
k=4 d[k]=3  count=3(1,2,3) & count=4(1,2,4)

i=0,j=4
(d[j]=3,d[i]=1)
k=5 d[k]=4 count=5(1,3,4)

i=1,j=2
(d[j]=2,d[i]=1)
k=3 d[k]=2 (k++) k=4 d[k]=3 count=6(1,2,3)
*/ 