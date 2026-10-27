/* NON_MATCHING: retail inlines the clear body with its own copy of `this` (mov r1, r0) and a zero register set up before the vtable store, loading the vtable before the prologue; armcc keeps r0 and schedules the vtable store first. */
#include "classes/Obj421a78.h"

/* Clears the active slots and releases the resource word. */
Obj421a78::~Obj421a78()
{
    clearSlots();
    if (resource != 0) {
        resource = 0;
    }
}
