//#include "list.h"
//#include <stdio.h>
//
//int main(){
//   List l;
//    Create(&l);
//    printf("Size: %d\n", ListSize(&l));
//    Insert(&l, 'A', 0);
//    Insert(&l, 'B', 1);
//    Insert(&l, 'C', 2);
//    Insert(&l, 'D', 3);
//    printf("Size: %d\n", ListSize(&l));
//    printf("%c\n", Retrieve(&l, 2));
//    printf("%c\n", Retrieve(&l, 0));
//    printf("%c\n", Retrieve(&l, 1));
//    printf("%c\n", Retrieve(&l, 0));
//    printf("Size: %d\n", ListSize(&l));
//
//
//
//    return 0;
//}

#include <stdio.h>
#include "list.h"
List myList;
void size();

int main(){
    Create(&myList); size();
     Insert(&myList, 'A', 0); size(); // A
     Insert(&myList, 'B', 1); size(); // A, B
     Insert(&myList, 'C', 2); size(); // A, B, C
     Insert(&myList, 'D', 3); size(); // A, B, C, D
     Insert(&myList, 'E', 4); size(); // A, B, C, D, E
     Insert(&myList, 'F', 5); size(); // A, B, C, D, E, F
     Insert(&myList, 'G', 6); size(); // A, B, C, D, E, F, G
    printf("%c\n", Retrieve(&myList, 0)); // B, C
    printf("%c\n", Retrieve(&myList, 1)); // C
    Clear(&myList); size();
   return 0;
}
void size(){
    printf("Size of list: %d\n", ListSize(&myList));
}