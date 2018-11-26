/* * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                 */
/*  Program:  Simple Event Management System       */
/*  Author:   Christine Laurendeau                 */
/*  Date:     07-JUN-2018                          */
/*                                                 */
/*  (c) 2018 Christine Laurendeau                  */
/*  All rights reserved.  Distribution and         */
/*  reposting, in part or in whole, without the    */
/*  written consent of the author, is illegal.     */
/*                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
using namespace std;
#include <string>
#include "Calendar.h"
#include "Date.h"
#include "Event.h"

#define MAX_ARR_SIZE  128

int  mainMenu();
void printCalendar(Date arr[MAX_ARR_SIZE], int);


int main()
{
  Calendar calendar("Defult");
//:x
//  int    numDates = 0;
  int    day, month, year, hour, min;
  int    menuSelection;
  string eventName;

  while (1) {
    menuSelection = mainMenu();

    if (menuSelection == 0) 
    {
        cout << endl;
        break;
    }
    else if (menuSelection == 1) {

        cout << "name of event: ";
        cin  >> eventName;
        cout << "hour:    ";
        cin  >> hour;
        cout << "minutes: ";
        cin  >> min;
        cout << "day:     ";
        cin  >> day;
        cout << "month:   ";
        cin  >> month;
        cout << "year:    ";
        cin  >> year;
        
        Event* newEvent = new Event(eventName);
        newEvent->setDate(day, month, year, hour, min);
//        newEvent->print();
    calendar.addEvent(newEvent);
        //++numDates;
    }
  }

    if (calendar.getEventNum() > 0)
        calendar.print();

  return 0;
}

int mainMenu()
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


