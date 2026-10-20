#include "classes/Obj558c9c.h"

extern "C" Obj558c9cTarget *FUN_0030f044(Obj558c9c *owner, u32 kind);

/* True when the object is ready and its target of kind 0xB exists and reports itself active. */
s32 Obj558c9c::isTargetActive()
{
    Obj558c9cTarget *target;

    if (ready != 0 && (target = FUN_0030f044(this, 0xB)) != NULL && target->isActive() != 0) {
        return 1;
    }
    return 0;
}
