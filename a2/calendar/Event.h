#ifndef EVENT_H
#define EVENT_H

#include <string>
#include "Date.h"

using namespace std;
class Event
{
    public:
        Event(string = " ");
        void print() const;
        Date* getDate() const;
        void setDate(int=0, int=0, int=2000, int=0, int=0);

    private:
        string eventName;
        Date dateOfEvent;
        

};


#endif
