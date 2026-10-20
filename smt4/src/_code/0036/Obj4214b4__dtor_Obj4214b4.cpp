#include "classes/Obj4214b4.h"

/* Gives the resource back to the owner when one was taken. */
Obj4214b4::~Obj4214b4()
{
    if (flag != 0 && resource != NULL) {
        owner->release(resource);
    }
}
