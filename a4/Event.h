#ifndef EVENT_H
#define EVENT_H

#include <string>
#include "Date.h"

using namespace std;
class Event
{
    public:
        Event(string = " ", int = 0);
        virtual ~Event();

        void         print();
        Date*        getDate();
        int          getPriority();
        void         setDate(int=0, int=0, int=2000, int=0, int=0);
//        virtual bool lessThan(Event*) = 0;
        virtual bool operator<(Event*) = 0;

    protected:
        string eventName;
        Date   dateOfEvent;
        int    priority;

};


#endif
