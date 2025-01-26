#include <stdio.h>
int main() {
    int arr[10] = {7, 3, 8, 1, 5, 4};
    int i;
    printf("Element of Array\n");
    for (i = 0; i < 6; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for (i = 6; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = 10;
    printf("Insertion of an element at the beginning\n");
    for (i = 0; i < 7; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    arr[7] = 11;
    printf("Insertion of an element at the end\n");
    for (i = 0; i < 8; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for (i = 8; i > 2; i--) {
        arr[i] = arr[i - 1];
    }
    arr[2] = 4; //
    printf("Insertion of an element at position 3\n");
    for (i = 0; i < 9; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    for (i = 2; i < 8; i++) {
        arr[i] = arr[i + 1];
    }
    printf(" Deletion of the element at position 3\n");
    for (i = 0; i < 8; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for (i = 0; i < 8; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Deleting the first element\n");
    for (i = 0; i < 7; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    arr[6] = 0;
    printf("Deleting the last element\n");
    for (i = 0; i < 7; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}
