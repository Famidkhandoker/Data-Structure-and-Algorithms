#include <stdio.h>
int main() {
    int arr[] = {7, 3, 8, 1, 5, 9};
    int i, j, C_M, n = 6; // C_M = Current Minimum index


    for (i = 0; i < n - 1; i++) {
        C_M = i;


        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[C_M]) {
                C_M = j;
            }
        }


        int temp = arr[i];
        arr[i] = arr[C_M];
        arr[C_M] = temp;
    }


    printf("Sorted Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
