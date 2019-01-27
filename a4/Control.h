#ifndef CONTROL_H
#define CONTROL_H

#include "Calendar.h"
#include "View.h"
#include <string>
#include "EventServer.h"                                                                              
//#include "SchoolEvent.h"                                                                            
//#include "WorkEvent.h"

using namespace std;

class Control
{
    public:
        Control();
        ~Control();
        void launch();

    private:
        View view;
        int     menuSelection;
        int     day, month, year, hour, min, type, priority;
        string  eventName;
        Calendar schoolCalendar;
        Calendar workCalendar;
        EventServer eventServer;
};

#endif
