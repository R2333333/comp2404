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

void Calendar::addEvent(Event* event)//add event to calendar
{
    events.add(event);
    ++numEvents;
}

void Calendar::print()//print calendar out
{
    cout << calendarName<< endl;
    events.print();
}

void Calendar::copyEvents(Array& array) //copy the list to array
{
    events.copy(array);
}
