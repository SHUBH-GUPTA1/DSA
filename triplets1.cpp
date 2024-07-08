#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {       //quick sort
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, i, j, k, count = 0;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Sort the array
    qsort(arr, n, sizeof(int), compare);
    for (i = 0; i < n-2; i++) {
        for (j = i+1; j < n-1; j++) {
            for (k = j+1; k < n; k++) {
                if (arr[i] < arr[j] && arr[j] < arr[k]) {
                    printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
                    count++;
                    // Skip elements with the same value
                    while (arr[k] == arr[k+1]) {
                        k++;
                    }
                }
            }
            // Skip elements with the same value
            while (arr[j] == arr[j+1]) {
                j++;
            }
        }
        // Skip elements with the same value
        while (arr[i] == arr[i+1]) {
            i++;
        }
    }
    printf("Count: %d\n", count);
    free(arr);
    return 0;
}
//Time complexity: - O(n^2) since we have two nested loops to check all possible combinations of triples.
//The space complexity is O(n)  since we use a hash table to store the frequencies of each element in the input array.



