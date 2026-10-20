#include "classes/Obj4216b4.h"

/* Gives the resource back to the owner when one was taken. */
Obj4216b4::~Obj4216b4()
{
    if (ownsResource != 0 && resource != NULL) {
        owner->release(resource);
    }
}
