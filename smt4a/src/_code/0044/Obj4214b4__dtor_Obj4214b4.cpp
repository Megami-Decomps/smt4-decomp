#include "classes/Obj4214b4.h"

/* Gives the handle back to the owner if the object is attached. */
Obj4214b4::~Obj4214b4()
{
    if (flag && resource != NULL) {
        owner->release(resource);
    }
}
