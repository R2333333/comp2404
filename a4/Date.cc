#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Date.h"
#include "Time.h"

Date::Date(int d, int m, int y, int h, int min)
{
  set(d, m, y, h, min);
}

Date::~Date(){}

void Date::set(int d,int m,int y, int h, int min)
{
    year  = ( ( y > 0) ? y : 0 );
    month = ( ( m > 0 && m <= 12) ? m : 0 );
    day   = ( ( d > 0 && d <= lastDayInMonth() ) ? d : 0 );
    time.set(h, min, 0); //set the time by calling the set fucntion in time class
}

void Date::printShort() const
{
    time.print();//call the funtion to print time
    cout<<setfill('0')<<setw(2)<<day<<"/"
        <<setfill('0')<<setw(2)<<month<<"/"
        <<setfill('0')<<setw(4)<<year<<endl;
}

void Date::printLong() const
{
    cout << getMonthStr()<<" "<<day<<", "<<year <<
            endl <<"Time: ";
    time.print();
    cout << endl;
}

int Date::lastDayInMonth()
{
  switch(month)
  {
    case 2:
      if (leapYear())
        return 29;
      else
        return 28;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      return 31;
    default:
      return 30;
  }
}

bool Date::leapYear()
{
  if ( year%400 == 0 ||
       (year%4 == 0 && year%100 != 0) )
    return true;
  else
    return false;
}

string Date::getMonthStr() const
{
  string monthStrings[] = { 
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December" };

  if ( month >= 1 && month <= 12 )
    return monthStrings[month-1];
  else
    return "Unknown";
}

int Date::convertToDays()
{
    return (year*10000+month*100+day); //convert the date into yyyymmdd as one number
}

bool Date::operator<(Date* date) 
{
    if(convertToDays()==date->convertToDays())//compare the date firstly, if the dates are same 
        return time < (date->time);    // then compare the time by calling function in time class
    else
        return (convertToDays()<date->convertToDays());
}
