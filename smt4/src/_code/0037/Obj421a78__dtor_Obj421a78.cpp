#include "classes/Obj421a78.h"

/* Clears the active slots and releases the resource word. */
Obj421a78::~Obj421a78()
{
    clearSlots();
    if (resource != 0) {
        resource = 0;
    }
}
