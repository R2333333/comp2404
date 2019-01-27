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
    delete currNode->data;     *Note: the data need to be used for server to print
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
    if (event < (currNode->data))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == NULL) {
    head = tmpNode;
  }
  else {
    prevNode->next = tmpNode;
  cout << (event<head);
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

void List::copy(Array& array)
{
    Node* currNode = head;
    while (currNode != NULL)
    {
        array.add(currNode->data);
        currNode = currNode->next;
    }
}

