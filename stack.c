#include <stdio.h>
#define Max 4

int top = -1;
int stack_arr[Max];

void push(int data) {
    if (top == Max - 1) {
        printf("Overflow\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
    printf("Pushed %d\n", data);
}

void pop() {
    if (top == -1) {
        printf("Underflow! Stack is empty.\n");
        return;
    }
    printf("Popped: %d\n", stack_arr[top]);
    top = top - 1;
}

int main() {
    push(17);
    push(11);
    push(23);
    push(34);
    push(45); // Overflow
    pop();    // Popping last element
    pop();    // Continue popping
    pop();
    pop();
    pop();    // Underflow here
    return 0;
}

//output
/*
Pushed 17
Pushed 11
Pushed 23
Pushed 34
Overflow
Popped: 34
Popped: 23
Popped: 11
Popped: 17
Underflow! Stack is empty.
*/


