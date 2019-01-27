#include "SchoolEvent.h"

SchoolEvent::SchoolEvent(string name, int p)
    :Event(name, p) {}

/*bool SchoolEvent::lessThan(Event* e)
{
    return this->getDate()->lessThan(e->getDate());
}
*/

bool SchoolEvent::operator<(Event* e)
{
    return *(this->getDate()) < (e->getDate());
}

SchoolEvent::~SchoolEvent(){}
