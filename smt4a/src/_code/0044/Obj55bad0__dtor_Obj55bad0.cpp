#include "classes/Obj55b8d0.h"

/* Gives the handle back to the owner if the object is attached. */
Obj55bad0::~Obj55bad0()
{
    if (attached && handle != 0) {
        owner->release(handle);
    }
}
