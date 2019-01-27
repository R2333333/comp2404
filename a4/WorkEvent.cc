#include "WorkEvent.h"                                                                            
#include <iostream>

WorkEvent::WorkEvent(string name, int p)                                                                          
    :Event(name, p) {}                                                                                     
                                                                                                    
/*bool WorkEvent::lessThan(Event* e)                                                                
{                                                                                                   
    return (priority < e->getPriority()); 
} 
*/

bool WorkEvent::operator<(Event* e)                                                                
{
    return (priority < e->getPriority())? true: false; 
} 

WorkEvent::~WorkEvent() {}
