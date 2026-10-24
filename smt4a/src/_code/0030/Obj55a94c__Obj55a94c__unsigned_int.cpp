/* NON_MATCHING: register allocation only: retail keeps the id in r5 and this in r4; built swaps them */
#include "classes/Obj55a94c.h"
#include "classes/ObjectRegistry.h"

extern "C" {
Obj55a94c *FUN_0012425a();   /* new Obj55a94c(0) */
}

/* A non-zero id is registered with a fresh instance. */
Obj55a94c::Obj55a94c(u32 newId) : Obj558d20(1)
{
    if (newId != 0) {
        id = newId;
        Obj55a94c *object = FUN_0012425a();
        FUN_002f3b58(FUN_002ecf28()->registry, newId, object);
    }
}
