#include "classes/Obj55b8d0.h"

/* Gives the handle back to the owner if the object is attached. */
Obj55b8d0::~Obj55b8d0()
{
    if (attached && handle != 0) {
        owner->release(handle);
    }
}
