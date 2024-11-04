/* Linked list:
      Functions::
       **{Create(), Insert(), Retrieve(), Clear(), Full(), Empty(), Size()}
       *  (10. 13. 2024).
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char type;
typedef struct node{
   type data;
   struct node* nextNode;
} Node;

typedef struct{
    Node *head;
    int size;
} List;

void Create(List *list);
void Insert(List *list, type value, int pos);
type Retrieve(List* list, int pos);
void Clear(List *list);
bool ListIsEmpty(List*list);
bool ListIsFull(List *list);
int ListSize(List *list);






