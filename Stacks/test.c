#include <stdio.h>
#include "Stack.h"

int main(){
  Stack myStack = empty();
  printf("%d\n", isEmpty(myStack) );
  myStack = push(5,push(2,push(3,myStack)));
  printf("%d\n", sizeofStack(myStack));
  printStack(myStack);
  printf("-------\n");
  myStack = pop(myStack);
  printStack(myStack);
  return 0;
}
