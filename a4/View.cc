#include "View.h"
#include <iostream>
using namespace std;

int View::dispMenu()
{
    int numOptions = 1;                                                                               
    int selection  = -1;                                                                              
                                                                                                    
    cout << endl;                                                                                     
    cout << "(1) Add Event" << endl;                                                                  
    cout << "(0) Exit" << endl;                                                                       
                                                                                                    
    while (selection < 0 || selection > numOptions) {                                                 
        cout << "Enter your selection: ";                                                               
        cin  >> selection;                                                                              
    }                                                                                                 
                                                                                                    
    return selection;
}

void View::eventType(int &type)
{
    cout << "Prease 1 for School Event, 2 for Work Event: ";
    cin  >> type;
    if(type != 1 && type != 2)
    {
        cout << "Invalid Number! Tay again!";
        eventType(type);
    }
}

void View::readUser(string &eventName, int &hour, int &min, int &day, int &month, int &year, int &priority)
{
    cout << "name of event: ";                                                                  
    cin  >> eventName;                                                                          
    cout << "hour:    ";                                                                        
    cin  >> hour;                                                                               
    cout << "minutes:  ";                                                                        
    cin  >> min;                                                                                
    cout << "day:      ";                                                                        
    cin  >> day;                                                                                
    cout << "month:    ";                                                                        
    cin  >> month;                                                                              
    cout << "year:     ";                                                                        
    cin  >> year;
    cout << "priority: ";
    cin  >> priority;
}

void View::printCalendar(Calendar *calendar)
{
     calendar->print();
}
