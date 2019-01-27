#include <iostream>
using namespace std;

#include "Event.h"
#include "Date.h"
#include "List.h"

List::List()
{             
  head = NULL;
}

void List::clean()
{                           
  Node *currNode, *nextNode;
                  
  currNode = head;
                            
  while (currNode != NULL) {  
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;    
    currNode = nextNode;
  }
}

void List::add(Event* event)
{
  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node;
  tmpNode->data = event;
  tmpNode->next = NULL;
  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    if (event->lessThan(currNode->data))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == NULL) {
    head = tmpNode;
  }
  else {
    prevNode->next = tmpNode;
  }

  tmpNode->next = currNode;
}

void List::print()
{
  Node* currNode = head;

  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }

}
