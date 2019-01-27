#ifndef LIST_H
#define LIST_H

#include "Event.h"

class List
{
  class Node
  {
    friend class List;
    private:
      Event* data;
      Node*    next;
  };

  public:
    List();
    void clean();
    void add(Event*);
    void print();

  private:
    Node* head;
};

#endif

