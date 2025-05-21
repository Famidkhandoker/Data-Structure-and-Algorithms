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
    printf("pushed:%d\n",data);
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
void sortStack() {
    for (int i = 1; i <= top; i++) {
        int key = stack_arr[i];
        int j = i - 1;
        while (j >= 0 && stack_arr[j] > key) {
            stack_arr[j + 1] = stack_arr[j];
            j = j - 1;
        }
        stack_arr[j + 1] = key;
    }
}
int main() {
    push(29);
    push(2);
    push(45);
    push(34);
    push(9);
    push(10);

    // Print the stack before sorting
    printf("Before Sorting: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
    sortStack();


    printf("After Sorting: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
    // Pop all elements from the stack
   /* while (!isEmpty()) {
        pop();
    }*/
    return 0;
}
/*
pushed:29
pushed:2
pushed:45
pushed:34
pushed:9
Overflow
Before Sorting: 29 2 45 34 9
After Sorting: 2 9 29 34 45
*/
