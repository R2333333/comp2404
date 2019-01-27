#ifndef LIST_H
#define LIST_H

#include "Array.h"
#include "WorkEvent.h"
#include "SchoolEvent.h"
#include <iostream>                                                                                 
using namespace std;                                                                                

template <class T>
class List
{
    template <class V>
    class Node
    {
        friend class List;
        private:
        V data;
        Node<T>*    next;
    };


    public:
    List<T>()                                                                                        
    {                                                                                                   
        head = NULL;                                                                                      
    }                                                                                                   

    ~List<T>()                                                                                  
    {                                                                                                   
        Node<T> *currNode, *nextNode;                                                                        

        currNode = head;                                                                                  

        while (currNode != NULL) {                                                                        
            nextNode = currNode->next;                                                                      
                delete currNode->data;     //*Note: the data need to be used for server to print                
            delete currNode;                                                                                
            currNode = nextNode;                                                                            
        }                                                                                                 
    }                                                                                                   

    void add(T event)   //function for adding event                                                                     
    {   
        
        Node<T>* tmpNode;                                                                                    
        Node<T>* currNode;                                                                                   
        Node<T>* prevNode;  
        
        tmpNode = new Node<T>;                                                                               
        tmpNode->data = event;                                                                            
        tmpNode->next = NULL;                                                                             
        currNode = head;                                                                                  
        prevNode = NULL;                                                                                  

        while (currNode != NULL) {                                                                        
            if ((*event) < (currNode->data))                                                            
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

    void print()    //funtion for print out the list                                                                              
    {                                                                                                   
        Node<T>* currNode = head;                                                                            

        while (currNode != NULL) {                                                                        
            currNode->data->print();                                                                        
            currNode = currNode->next;                                                                      
        }                                                                                                 

    }                                                                                                   

    void copy(Array& array)    // function for copy the list to an array parameter                                                                   
    {                                                                                                   
        Node<T>* currNode = head;                                                                          
        while (currNode != NULL)                                                                        
        {                                                                                               
            array.add(currNode->data);                                                                  
            currNode = currNode->next;                                                                  
        }                                                                                               
    }   
    private:
    Node<T>* head;
};
#endif

