#ifndef CALENDAR_H
#define CALENDAR_H
#define MAX_EVENT 60

#include <iostream>
#include <string>
//#include "WorkEvent.h"
//#include "SchoolEvent.h"
#include "List.h"


using namespace std;

class Calendar
{
    public:
        Calendar(string ="default" );
        int getEventNum() const;
        string getCalendarName() const;
        void changeCalendarName(string);
        void addEvent(Event*);
        void print();
        void copyEvents(Array&);

    private:
        List<Event*> events;
        int numEvents = 0;
        string calendarName = "default";
};

#endif

