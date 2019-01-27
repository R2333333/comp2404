#include "Calendar.h"
#include "Event.h"
#include <iostream>
#include <string>

using namespace std;

Calendar::Calendar(string name)
        : calendarName(name){};

string Calendar::getCalendarName() const
{
    return calendarName; //return the name of calendar
}

void Calendar::changeCalendarName(string name)
{
    calendarName = name; //change the name of calendar
}

int Calendar::getEventNum() const
{
    return numEvents; //return the number of events currently in the calendar
}

void Calendar::addEvent(Event* event)
{
    events.add(event);
    ++numEvents;
}

void Calendar::print()
{
    events.print();
}
void Calendar::clean()
{
    //destructor to delate all allocated memory in the heap
    events.clean();
}
