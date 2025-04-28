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
    if ((rear+1)%N==front ){
        printf("Overflow\n");
    }
    else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    }
    else {
        rear =(rear+1)%N;
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

/*Circular Queue হলো এমন একটি Queue যেখানে rear এবং front পয়েন্টার একই জায়গায় মিলিত হতে পারে।
এতে Queue শেষ হওয়ার পরও ডেটা জায়গা নিয়ে পুনরায় ফিরে আসে। অর্থাৎ, যখন queue এর rear পয়েন্টার শেষে চলে যায়,
 তখন সেটি আবার প্রথম দিকে ফিরে যায় এবং নতুন এলিমেন্ট অ্যাড করতে পারে।*/

 /*
 সার্কুলার কিউ হলো একটি বিশেষ ধরনের কিউ যেখানে শেষ এলিমেন্টের পর আবার প্রথমে ফিরে আসে (সার্কেল বা বৃত্তের মতো কাজ করে)।

এতে জায়গা নষ্ট হয় না; ফ্রন্ট মুভ করলে খালি হওয়া জায়গা আবার ব্যবহার করা যায়।

এনকিউ (enqueue): রিয়ারে ডেটা ঢোকানো হয়।

ডিকিউ (dequeue): ফ্রন্ট থেকে ডেটা সরানো হয়।

rear এবং front মডুলাস অপারেটর % ব্যবহার করে ঘুরে ফিরে যায়:

 */
