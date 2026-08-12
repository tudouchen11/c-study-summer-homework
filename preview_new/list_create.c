#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node* createNode(int num){
    Node *new = (Node*)malloc(sizeof(Node));
    new->data = num;
    new->next = NULL;
    return new;
}

int main(void){
    Node *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    Node *p = head;
    while(p != NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    return 0;
}
