#include <string>
#include <iostream>
#include "Date.h"
#include "Event.h"

using namespace std;

Event::Event (string name, int p)
    :eventName(name), priority(p) {}

Date* Event::getDate()
{
    //return a Date pointer for the date of the event
    Date* date = &dateOfEvent;
    return date;
}

void Event::print()
{
    cout << "Event: " << eventName << " Priority: " << priority << endl
         << "Date: ";
    dateOfEvent.printLong();
    
}
void Event::setDate(int d,int m,int y, int h, int min)
{   
    //set the date of the event    
    dateOfEvent.set(d, m, y, h, min);                       
    //priority = p;    
}

int Event::getPriority(){return priority;}

Event::~Event(){};
