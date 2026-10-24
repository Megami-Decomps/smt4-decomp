/* NON_MATCHING: register allocation only: retail keeps the id in r5 and this in r4; built swaps them */
#include "classes/Obj55abd4.h"
#include "classes/ObjectRegistry.h"

extern "C" {
Obj55abd4 *FUN_0012426e();   /* new Obj55abd4(0) */
}

/* A non-zero id is registered with a fresh instance. */
Obj55abd4::Obj55abd4(u32 newId) : Obj558d20(1)
{
    if (newId != 0) {
        id = newId;
        Obj55abd4 *object = FUN_0012426e();
        FUN_002f3b58(FUN_002ecf28()->registry, newId, object);
    }
}
