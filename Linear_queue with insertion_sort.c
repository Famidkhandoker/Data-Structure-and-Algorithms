#include <stdio.h>
#define N 5
int front = -1, rear = -1, queue[N], i;
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

void insertionSort() {
    int i, j, key;

    // Perform insertion sort on the queue array
    for (i = front + 1; i <= rear; i++) {
        key = queue[i];
        j = i - 1;

        // Move elements that are greater than key to one position ahead
        while (j >= front && queue[j] > key) {
            queue[j + 1] = queue[j];
            j = j - 1;
        }
        queue[j + 1] = key;
    }
}
int main() {
    enqueue(35);
    enqueue(89);
    enqueue(70);
    enqueue(23);
    dequeue();
    enqueue(19);
    enqueue(3);
    printf("Before Sorting: ");
    display();

    insertionSort();
    printf("After Sorting: ");
    display();

    return 0;
}
/*
Dequeued: 35
Overflow
Before Sorting: 89 70 23 19
After Sorting: 19 23 70 89
*/
