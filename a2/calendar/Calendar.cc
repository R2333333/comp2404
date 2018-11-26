#include "Calendar.h"
#include "Event.h"
#include <iostream>
#include <string>

using namespace std;

Calendar::Calendar(string name)
        : calendarName(name){};

string Calendar::getCalendarName() const
{
    return calendarName;
}

void Calendar::changeCalendarName(string name)
{
    calendarName = name;
}

int Calendar::getEventNum() const
{
    return numEvents;
}

Event Calendar::addEvent(Event* event)
{
    cout << endl <<  numEvents << endl;
    if(numEvents == 0)
        events[0]=event;
    else 
    {
        int count = numEvents;
        for (int i=numEvents-1; i>=0; --i)
        {
            if(event->getDate().lessThan(events[i]->getDate()))
            {
                events[i+1] = events[i];
                --count;
            }
            else
                break;
        }
        events[count] = event;
    }
    ++numEvents;
    return *events[numEvents-1];
}

void Calendar::print() const
{
    int count = numEvents;
    cout << "Calendar Name: " << calendarName << endl;
    for(Event* e: events)
    {
        e->print();
        --count;
        if(count==0)
            break;
    }
}
