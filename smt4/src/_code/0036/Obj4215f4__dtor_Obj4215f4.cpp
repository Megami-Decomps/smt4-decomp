#include "classes/Obj4215f4.h"

/* Gives the resource back to the owner when one was taken. */
Obj4215f4::~Obj4215f4()
{
    if (ownsResource != 0 && resource != NULL) {
        owner->release(resource);
    }
}
