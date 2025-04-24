#include <stdio.h>
#define Max 100

char stack_arr[Max];
int top = -1;

// Push character to stack
void push(char data)
{
    if (top == Max - 1)
    {
        printf("Overflow\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}

// Pop character from stack
char pop()
{
    if (top == -1)
    {
        printf("Underflow! Stack is empty.\n");
        return '\0';
    }
    return stack_arr[top--];
}

// Peek top of the stack
char peek()
{
    if (top == -1)
        return '\0';
    return stack_arr[top];
}

// Check precedence
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

// Check if character is an alphabet (manual version of isalpha)
int isAlphabet(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

// Infix to Postfix conversion
void infixToPostfix(char *exp)
{
    char result[Max];
    int k = 0;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        char ch = exp[i];

        if (isAlphabet(ch))
        {
            result[k++] = ch;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (top != -1 && peek() != '(')
            {
                result[k++] = pop();
            }
            if (peek() == '(')
            {
                pop(); // Remove '('
            }
        }
        else   // Operator
        {
            while (top != -1 && prec(peek()) >= prec(ch))
            {
                result[k++] = pop();
            }
            push(ch);
        }
    }

    // Pop remaining operators
    while (top != -1)
    {
        result[k++] = pop();
    }

    result[k] = '\0'; // null-terminate string
    printf("Postfix: %s\n", result);
}

int main()
{
    char expression[] = "A+B*(M+N-G)-p/Q^R+T-";
    printf("Infix: %s\n", expression);
    infixToPostfix(expression);
    return 0;
}
