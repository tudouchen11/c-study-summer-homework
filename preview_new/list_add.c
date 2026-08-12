#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

// 创建新结点
Node* createNode(int num){
    Node *new = (Node*)malloc(sizeof(Node));
    new->data = num;
    new->next = NULL;
    return new;
}

// 尾部追加结点
void addTail(Node *head,int val){
    Node *p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = createNode(val);
}

// 遍历打印链表
void printList(Node *head){
    Node *p = head;
    while(p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
}

int main(void){
    Node *head = createNode(10);
    addTail(head,20);
    addTail(head,30);
    printList(head);
    return 0;
}
