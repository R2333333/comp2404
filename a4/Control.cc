#include "Control.h"

using namespace std;

//empty constractor to downloading data from servers
Control::Control()
{

    Array schoolArray, workArray;
    eventServer.retrieve(schoolArray, workArray);
    
    for (int i = 0; i < schoolArray.getSize(); ++i)
    {
       schoolCalendar.addEvent(schoolArray.get(i));
    } 

    for (int i = 0; i < workArray.getSize(); ++i)
    {
       workCalendar.addEvent(workArray.get(i));
    }

}

//constractor for uploading data to server
Control::~Control()
{
    Array schoolArray, workArray;
    
    schoolCalendar.copyEvents(schoolArray);
    workCalendar.copyEvents(workArray);

    eventServer.update(schoolArray, workArray);

}

void Control::launch()
{
    schoolCalendar.changeCalendarName("SchoolCalendar");
    workCalendar.changeCalendarName("WorkCalendar");

    while (1) {                                                                                       
        menuSelection = view.dispMenu();                                                                     

        if (menuSelection == 0)                                                                         
        {
            break;                                                                                      
        } 
        else if (menuSelection==1)
        {   
            view.eventType(type);
            view.readUser(eventName, hour, min, day, month, year, priority);
        }
        //Event* newEvent = NULL;

        if (type == 1){
            SchoolEvent* newEvent = new SchoolEvent(eventName, priority);//Allocate the Event in heap
            newEvent->setDate(day, month, year, hour, min);//set the day of the event
            schoolCalendar.addEvent(newEvent);//add the event into the calendar
        }
        else
        {
            WorkEvent* newEvent = new WorkEvent(eventName, priority);
            newEvent->setDate(day, month, year, hour, min);//set the day of the event
            workCalendar.addEvent(newEvent);//add the event into the calendar

        }
    }

    //if the calendar is not empty then print it out
    if (schoolCalendar.getEventNum() > 0)
        view.printCalendar(&schoolCalendar);

    if (workCalendar.getEventNum() > 0)
        view.printCalendar(&workCalendar);

}
