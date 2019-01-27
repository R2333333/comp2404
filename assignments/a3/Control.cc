#include "Control.h"
#include "Event.h"
#include "SchoolEvent.h"
#include "WorkEvent.h"
#include <string>
#include "Calendar.h"

using namespace std;

void Control::launch()
{
    Calendar schoolCalendar("School Calendar");
    Calendar workCalendar("Work Calendar");

    while (1) {                                                                                       
        menuSelection = view.dispMenu();                                                                     
                                                                                                    
        if (menuSelection == 0)                                                                         
        {                                                                                                               break;                                                                                      
        } 
        else if (menuSelection==1)
        {   
            view.eventType(type);
            view.readUser(eventName, hour, min, day, month, year, priority);
        }
        Event* newEvent = NULL;

        if (type == 1){
            newEvent = new SchoolEvent(eventName);//Allocate the Event in heap
            newEvent->setDate(day, month, year, hour, min);//set the day of the event
            schoolCalendar.addEvent(newEvent);//add the event into the calendar
        }
        else
        {
            newEvent = new WorkEvent(eventName);
            newEvent->setDate(day, month, year, hour, min);//set the day of the event
            workCalendar.addEvent(newEvent);//add the event into the calendar

        }
        }

    if (schoolCalendar.getEventNum() > 0)
        view.printCalendar(&schoolCalendar);
    
    if (workCalendar.getEventNum() > 0)
        view.printCalendar(&workCalendar);
    
    schoolCalendar.clean();
    workCalendar.clean();
}
