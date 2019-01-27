#ifndef CONTROL_H
#define CONTROL_H

#include "Calendar.h"
#include "View.h"
#include <string>
using namespace std;

class Control
{
    public:
        void launch();

    private:
        View view;
        int     menuSelection;
        int     day, month, year, hour, min, type, priority;
        string  eventName;
};

#endif
