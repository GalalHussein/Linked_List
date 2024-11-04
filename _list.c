#include "list.h"
#include <stdio.h>

void Create(List *list){
    list->head = NULL;
    list->size = 0;
}
void Insert(List *list, type value, int pos){
    if(pos < 0 || pos > list->size) {
        printf("Invalid position!");
        exit(0);
    }
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
     if(pos == 0){
        newNode->nextNode = list->head;
        list->head = newNode;
     } else {
        Node *q; int i;
        for(q = list->head, i=0; i<pos-1; i++){
            q = q->nextNode;
        }
        newNode->nextNode = q->nextNode;
        q->nextNode = newNode;
     } list->size++;
}

type Retrieve(List* list, int pos){
    if (pos < 0 || pos >= list->size) {
        printf("Invalid position\n");
        exit(0);
    }
    type saveInfo; Node *temp, *q;
    if(pos == 0){
        saveInfo = list->head->data;
        temp = list->head;
        list->head = list->head->nextNode;
    } else { int i=0;
        for(q=list->head, i=0; i<pos-1;  i++){
            q = q->nextNode;
        }
        saveInfo = q->nextNode->data;
        temp = q->nextNode;
        q->nextNode = temp->nextNode;
    }
        free(temp); list->size--;
    return saveInfo;
}
void Clear(List *list){
    Node *temp;
    while(list->head){
       temp = list->head;
       list->head = list->head->nextNode;
       free(temp);
    } list->size = 0;
}

bool ListIsFull(List *list){
    return false;
}
bool ListIsEmpty(List *list){
    if(list->size == 0) {
        return true;
    } return false;
}
int ListSize(List *list){
    return list->size;
} 







