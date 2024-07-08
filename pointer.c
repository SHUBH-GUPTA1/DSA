#include <stdio.h>

int main() {
    int a[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;
    p = &a[0];
    q = &a[0] + 3;

    printf("---------------\n");

    printf("1. %d\n", *p); // Answer: 10
    printf("2. %d\n", *q); // Answer: 56
    printf("3. %d %d %d\n", (*p)++, (*p)++, *(++p)); // Answer: 12 11 11
    printf("4. %d\n", *p); // Answer: 13
    printf("5. %d\n", (*p)++); // Answer: 13
    printf("6. %d\n", (*p)++); // Answer: 14
    q--; // q at -1 value
    printf("7. %d\n", (*(q + 2))--); // Answer: 67
    printf("8. %d\n", (*(p + 2)) - 2); // Answer: 54
    printf("9. %d\n", *(p++ - 2) - 1); // Answer: garbage value | out of array

    printf("---------------\n");
    return 0;
}