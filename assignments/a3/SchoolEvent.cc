#include "SchoolEvent.h"

SchoolEvent::SchoolEvent(string name)
    :Event(name) {}

bool SchoolEvent::lessThan(Event* e)
{
    return this->getDate()->lessThan(e->getDate());
}
