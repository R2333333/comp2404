#ifndef VIEW_H
#define VIEW_H

#include <string>
#include "Calendar.h"

class View
{
    public:
        int  dispMenu();
        void readUser(string&, int&, int&, int&, int&, int&, int&);
        void printCalendar(Calendar*);
        void eventType(int&);
};

#endif
