#ifndef CALENDAR_H
#define CALENDAR_H
#define MAX_EVENT 60

#include <iostream>
#include <string>
#include "Event.h"

using namespace std;

class Calendar
{
    public:
        Calendar(string);
        int getEventNum() const;
        string getCalendarName() const;
        void changeCalendarName(string);
        Event addEvent(Event*);
        void print() const;

    private:
        Event* events[MAX_EVENT];
        int numEvents = 0;
        string calendarName = "\0";
};

#endif

