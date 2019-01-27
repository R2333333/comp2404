#ifndef EVENT_H
#define EVENT_H

#include <string>
#include "Date.h"

using namespace std;
class Event
{
    public:
        Event(string = " ");
        virtual ~Event();

        void         print() const;
        Date*        getDate();
        int          getPriority();
        void         setDate(int=0, int=0, int=2000, int=0, int=0, int=0);
        virtual bool lessThan(Event*) = 0;

    protected:
        string eventName;
        Date   dateOfEvent;
        int    priority;

};


#endif
