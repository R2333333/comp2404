#include "WorkEvent.h"                                                                            
                                                                                                    
WorkEvent::WorkEvent(string name)                                                                          
    :Event(name) {}                                                                                     
                                                                                                    
bool WorkEvent::lessThan(Event* e)                                                                
{                                                                                                   
    return (priority < e->getPriority()); 
}  
