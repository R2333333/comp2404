#ifndef DATE_H
#define DATE_H

#include "Time.h"

using namespace std;

class Date
{
  public:
    Date(int=0, int=0, int=2000, int=0, int=0);
    ~Date();
    void set(int, int, int, int, int);
    void printShort() const;
    void printLong() const;
//    bool lessThan(Date*);
    bool operator<(Date*);

  private:
    int day;
    int month;
    int year;
    int  lastDayInMonth();
    bool leapYear();
    string getMonthStr() const;
    Time time;
    int convertToDays();

};

#endif
