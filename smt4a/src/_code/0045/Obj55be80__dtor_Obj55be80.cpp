/* NON_MATCHING: retail inlines the slot-clear with `this` copied to a second register and the zero hoisted above the vptr store (one extra push); register layout only. */
#include "classes/Obj55be80.h"

/* Clears the active slots and releases the resource word. */
Obj55be80::~Obj55be80()
{
    clearSlots();
    if (resource != 0) {
        resource = 0;
    }
}
