#ifndef WORKEVENT_H                                                                               
#define WORKEVENT_H
#include "Event.h"                                                                                  
                                                                                                    
class WorkEvent: public Event                                                                     
{                                                                                                   
    public:                                                                                         
        WorkEvent(string=" ", int=0);                                                                              
        ~WorkEvent();
//        bool lessThan(Event*);                                                                      
        bool operator<(Event*);
};                                                                                                  
                                                                                                    
#endif               
