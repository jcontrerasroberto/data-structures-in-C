#include "Elem.h"
#include <stdbool.h>
#include <stdlib.h>
//Functions for Linked list
//We create a new struct that will be any node and a pointer to the node
//We got to remember that a list is a LIFO data (Last in, first out)
typedef struct NodeList{
  Elem data;
  struct NodeList *next;
}*List;

//Function to create a new empty List
List empty(){
  return NULL;
}

//Function to add a new node on a List
List add(Elem e, List l){
  List temp= (List)malloc(sizeof(struct NodeList)); //Make space on disk for the new node
  temp->data = e; //Set the value of the node
  temp->next = l; //Set the pointer with what list pointed before
  return temp; //Return the new list with the node added
}

//Function to check if a list is empty
bool isEmpty(List l){
  return l==NULL;
}

//Function to get the firts element of a list
Elem getHeadData(List l){
  return l->data;
}

//Function to delete the head of a List
List removeHead(List l){
  return l->next;
}

void printList(List l){
  if(!isEmpty(l)){
    printElem(getHeadData(l));
    printList(removeHead(l));
  }
}

int sizeofList(List l){
  if(isEmpty(l)) return 0;
    else return 1 + sizeofList(removeHead(l));
}
