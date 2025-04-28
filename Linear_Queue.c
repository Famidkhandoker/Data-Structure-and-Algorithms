#include <stdio.h>
#define N 5

// Global variables
int front = -1, rear = -1, queue[N], i;

// Function declarations
/*void enqueue(int x);
void dequeue();
void display();
void peek();*/

int main() {
    enqueue(17);
    enqueue(7);
    dequeue();
    enqueue(19);
    display();

    return 0;
}

void enqueue(int x) {
    if (rear == N - 1) {
        printf("Overflow\n");
    }
    else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    }
    else {
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Underflow\n");
    }
    else if (front == rear) {
        printf("Dequeued: %d\n", queue[front]);
        front = rear = -1;
    }
    else {
        printf("Dequeued: %d\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    }
    else {
        printf("Queue elements: ");
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void peek() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    }
    else {
        printf("Front element: %d\n", queue[front]);
    }
}

/*
output
Dequeued: 17
Queue elements: 7 19
*/

/*
লিনিয়ার কিউ হলো একটি সাধারণ কিউ যেখানে সামনের দিক (front) থেকে ডেটা সরানো হয় (dequeue) এবং পেছনের দিক (rear) থেকে ডেটা ঢোকানো হয় (enqueue)।

এটি সরাসরি সরলরেখায় (line) কাজ করে।

একবার যদি জায়গা খালি হয়ে যায় (dequeue করার পরেও), তখনও পুরনো খালি জায়গা ব্যবহার করা যায় না।

সমস্যা: কিছু জায়গা খালি থাকা সত্ত্বেও কিউ ফুল দেখায়।
*/
