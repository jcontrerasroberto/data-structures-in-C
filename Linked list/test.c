#include <stdio.h>
#include "List.h"

int main(){
  List myList = empty();
  printf("%d\n", isEmpty(myList));
  myList = add(5,myList);
  myList = add(3,myList);
  printf("%d\n", isEmpty(myList));
  printList(myList);
  myList = removeHead(myList);
  printList(myList);
}
