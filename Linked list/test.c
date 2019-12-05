#include <stdio.h>
#include "List.h"

int main(){
  List myList = empty();
  printf("---------\n");
  printf("Is empty?: %d\n", isEmpty(myList));
  myList = add(5,myList);
  myList = add(3,myList);
  printf("After adding---------\n");
  printf("Is empty?: %d\n", isEmpty(myList));
  printf("Printing list---------\n");
  printList(myList);
  myList = removeHead(myList);
  printf("Printing list without the head------\n");
  printList(myList);
  return 0;
}
