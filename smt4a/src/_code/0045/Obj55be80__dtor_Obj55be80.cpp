#include "classes/Obj55be80.h"

/* Clears the active slots and releases the resource word. */
Obj55be80::~Obj55be80()
{
    clearSlots();
    if (resource != 0) {
        resource = 0;
    }
}
