#include <string>
#include <iostream>
#include "Date.h"
#include "Event.h"

using namespace std;

Event::Event (string name)
    :eventName(name) {}

Date* Event::getDate() const
{
    Date* date = dateOfEvent;
    return date;
}

void Event::print() const
{
    dateOfEvent.printLong();
}
int d,int m,int y, int h, int min
