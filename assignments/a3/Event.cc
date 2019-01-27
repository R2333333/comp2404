#include <string>
#include <iostream>
#include "Date.h"
#include "Event.h"

using namespace std;

Event::Event (string name)
    :eventName(name) {}

Date* Event::getDate()
{
    //return a Date pointer for the date of the event
    Date* date = &dateOfEvent;
    return date;
}

void Event::print() const
{
    cout << "Event: "    << eventName << endl
         << "Date: ";
    dateOfEvent.printLong();
    cout << "Priority: " << priority  << endl;
}
void Event::setDate(int d,int m,int y, int h, int min, int p)
{   
    //set the date of the event    
    dateOfEvent.set(d, m, y, h, min);                                                               
    priority = p;    
}

int Event::getPriority(){return priority;}
