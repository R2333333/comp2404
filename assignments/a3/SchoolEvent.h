#ifndef SCHOOLEVENT_H
#define SCHOOLENENT_H
#include "Event.h"

class SchoolEvent: public Event
{
    public:
        SchoolEvent(string="");
        bool lessThan(Event*);
};

#endif
