#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};

int main (){
struct node *head;
head = malloc( sizeof(struct node));
head->data=7;
head->link = NULL;
}
