#ifndef CALENDAR_H
#define CALENDAR_H
#define MAX_EVENT 60

#include <iostream>
#include <string>
#include "Event.h"
#include "List.h"

using namespace std;

class Calendar
{
    public:
        Calendar(string);
        void clean();
        int getEventNum() const;
        string getCalendarName() const;
        void changeCalendarName(string);
        void addEvent(Event*);
        void print();

    private:
        List events;
        int numEvents = 0;
        string calendarName = "default";
};

#endif

