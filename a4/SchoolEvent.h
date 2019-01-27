#ifndef SCHOOLEVENT_H
#define SCHOOLENENT_H
#include "Event.h"

class SchoolEvent: public Event
{
    public:
        SchoolEvent(string="", int = 0);
        ~SchoolEvent();
//        bool lessThan(Event*);
        bool operator<(Event*);
};

#endif
