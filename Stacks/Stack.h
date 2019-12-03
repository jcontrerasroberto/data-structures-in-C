#include <stdbool.h>
#include <stdlib.h>
#include "Elem.h"

typedef struct Node{
  Elem data;
  struct Node *next;
}*Stack;

Stack empty(){
  return NULL;
}

Stack push(Elem e, Stack s){
  Stack temp = (Stack)malloc(sizeof(struct Node));
  temp->data = e;
  temp->next = s;
  return temp;
}

bool isEmpty(Stack s){
  return s==NULL;
}

Elem top(Stack s){
  return s->data;
}

Stack pop(Stack s){
  return s->next;
}

int sizeofStack(Stack s){
  if(isEmpty(s)) return 0;
    else return 1 + sizeofStack(pop(s));
}

void printStack(Stack s){
  if(!isEmpty(s)){
    printElem(top(s));
    printStack(pop(s));
  }
}
