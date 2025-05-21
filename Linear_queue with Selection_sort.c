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

void selectionSort() {
    int minIndex, temp;
    for (i = front; i < rear; i++) {
        minIndex = i;


        for (int j = i + 1; j <= rear; j++) {
            if (queue[j] < queue[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the first unsorted element
        if (minIndex != i) {
            temp = queue[i];
            queue[i] = queue[minIndex];
            queue[minIndex] = temp;
        }
    }
}
int main() {
    enqueue(17);
    enqueue(7);
    dequeue(); // Dequeue one element
    enqueue(19);
    enqueue(3);
    printf("Before Sorting: ");
    display();
    selectionSort();
    printf("After Sorting: ");
    display();
    return 0;
}
