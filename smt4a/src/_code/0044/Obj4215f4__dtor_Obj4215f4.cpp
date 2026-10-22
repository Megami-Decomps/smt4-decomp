#include "classes/Obj4215f4.h"

/* Gives the handle back to the owner if the object is attached. */
Obj4215f4::~Obj4215f4()
{
    if (ownsResource && resource != NULL) {
        owner->release(resource);
    }
}
