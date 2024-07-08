// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int a[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     int left[n], right[n];
//     left[0] = 0;
//     for (int i = 1; i < n; i++) {
//         int cnt = 0;
//         for (int j = 0; j < i; j++) {
//             if (a[j] < a[i]) {
//                 cnt++;
//             }
//         }
//         left[i] = cnt;
//     }

//     right[n-1] = 0;
//     for (int i = n-2; i >= 0; i--) {
//         int cnt = 0;
//         for (int j = i+1; j < n; j++) {
//             if (a[j] > a[i]) {
//                 cnt++;
//             }
//         }
//         right[i] = cnt;
//     }

//     int ans = 0;
//     for (int j = 1; j < n-1; j++) {
//         ans += left[j]*right[j];
//     }

//     printf("%d\n", ans);

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int a[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     int left[n], right[n];
//     left[0] = 0;
//     for (int i = 1; i < n; i++) {
//         int cnt = 0;
//         for (int j = 0; j < i; j++) {
//             if (a[j] < a[i]) {
//                 cnt++;
//             }
//         }
//         left[i] = cnt;
//     }

//     right[n-1] = 0;
//     for (int i = n-2; i >= 0; i--) {
//         int cnt = 0;
//         for (int j = i+1; j < n; j++) {
//             if (a[j] > a[i]) {
//                 cnt++;
//             }
//         }
//         right[i] = cnt;
//     }

//     int indices[n], cnt = 0;
//     for (int j = 1; j < n-1; j++) {
//         int triplets = left[j]*right[j];
//         if (triplets > 0) {
//             for (int i = 0; i < left[j]; i++) {
//                 indices[cnt++] = i;
//             }
//             for (int i = left[j]+1; i < j; i++) {
//                 indices[cnt++] = i;
//             }
//             for (int i = j+1; i < n; i++) {
//                 indices[cnt++] = i;
//             }
//         }
//     }

//     printf("%d\n", cnt/3);
//     for (int i = 0; i < cnt; i += 3) {
//         printf("%d %d %d\n", indices[i], indices[i+1], indices[i+2]);
//     }

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int a[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     int left[n], right[n];
//     left[0] = 0;
//     for (int i = 1; i < n; i++) {
//         int cnt = 0;
//         for (int j = 0; j < i; j++) {
//             if (a[j] < a[i]) {
//                 cnt++;
//             }
//         }
//         left[i] = cnt;
//     }

//     right[n-1] = 0;
//     for (int i = n-2; i >= 0; i--) {
//         int cnt = 0;
//         for (int j = i+1; j < n; j++) {
//             if (a[j] > a[i]) {
//                 cnt++;
//             }
//         }
//         right[i] = cnt;
//     }

//     int ans = 0;
//     for (int j = 1; j < n-1; j++) {
//         int cnt = left[j]*right[j];
//         if (cnt > 0) {
//             for (int i = 0; i < j; i++) {
//                 if (a[i] < a[j]) {
//                     for (int k = j+1; k < n; k++) {
//                         if (a[k] > a[j]) {
//                             printf("(%d, %d, %d)\n", a[i], a[j], a[k]);
//                             ans++;
//                         }
//                     }
//                 }
//             }
//         }
//     }

//     printf("Total: %d\n", ans);

//     return 0;
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int left[n], right[n];
    left[0] = 0;
    for (int i = 1; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                cnt++;
            }
        }
        left[i] = cnt;
    }

    right[n-1] = 0;
    for (int i = n-2; i >= 0; i--) {
        int cnt = 0;
        for (int j = i+1; j < n; j++) {
            if (a[j] > a[i]) {
                cnt++;
            }
        }
        right[i] = cnt;
    }

    int ans = 0;
    for (int j = 1; j < n-1; j++) {
        int cnt = left[j]*right[j];
        if (cnt > 0) {
            for (int i = 0; i < j; i++) {
                if (a[i] < a[j]) {
                    for (int k = j+1; k < n; k++) {
                        if (a[k] > a[j]) {
                            ans++;
                            break;
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}
