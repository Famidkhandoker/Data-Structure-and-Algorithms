#include <stdio.h>
#define Max 3

int top = -1;
int stack_arr[Max];
void push(int data)
{
    if (top == Max - 1)
    {
        printf("Overflow\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
    printf("Pushed %d\n", data);
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow!\n");
        return;
    }
    printf("Popped: %d\n", stack_arr[top]);
    top = top - 1;
}
int isFull()
{
    if(top==Max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int topElement()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack_arr[top];
}

int main()
{
    push(14);
    push(57);
    push(23);
    push(67);


    if (isFull())
    {
        printf("Stack is Full.\n");
    }
    printf("Top Element: %d\n", topElement());

    pop();
    pop();
    pop();
    pop();


    if (isEmpty())
    {
        printf("Stack is Empty.\n");
    }

    return 0;
}
/*
output
Pushed 14
Pushed 57
Pushed 23
Overflow
Stack is Full.
Top Element: 23
Popped: 23
Popped: 57
Popped: 14
Underflow!
Stack is Empty.
*/
