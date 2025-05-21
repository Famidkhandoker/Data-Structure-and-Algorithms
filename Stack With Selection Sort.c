#include<stdio.h>
#define max 5
int stack_arr[max], top = -1;
void push(int data) {
    if (top == max - 1) {
        printf("Overflow\n");
        return;
    }
   top=top+1;
   stack_arr[top]=data;
    printf("pushed: %d\n", data);
}
int pop() {
    if (top == -1) {
        printf("Underflow\n");
        return -1;
    }
    int value = stack_arr[top];
    top=top-1;
    printf("popped: %d\n", value);
    return value;
}
int isFull() {
    return top == max - 1;
}
int isEmpty() {
    return top == -1;
}
void selectionSort() {
    for (int i = 0; i < top; i++) {
        int C_M = i;  // C_M = Current Minimum index

        // Find the minimum element in the unsorted part of the stack
        for (int j = i + 1; j <= top; j++) {
            if (stack_arr[j] < stack_arr[C_M]) {
                C_M = j;
            }
        }

        // Swap the found minimum element with the first element
        if (C_M != i) {
            int temp = stack_arr[i];
            stack_arr[i] = stack_arr[C_M];
            stack_arr[C_M] = temp;
        }
    }
}

int main() {
    // Push some elements onto the stack
    push(29);
    push(2);
    push(45);
    push(34);
    push(9);
    push(10);  // This will trigger an overflow message due to max size limit

    // Print the stack before sorting
    printf("Before Sorting: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");

    // Sort the stack using selection sort
    selectionSort();

    // Print the stack after sorting
    printf("After Sorting: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");

    return 0;
}
/*
pushed: 29
pushed: 2
pushed: 45
pushed: 34
pushed: 9
Overflow
Before Sorting: 29 2 45 34 9
After Sorting: 2 9 29 34 45
*/
