/* NON_MATCHING: scoped-lock and virtual dispatch register allocation has not been matched. */
#include "classes/Obj558c90.h"
#include "classes/Obj55b28c.h"
extern "C" {
void *onlineContextGetInstance();
void FUN_002ee50c(Obj558c90 *object, s32 flag);
}

s32 Obj558c90::vfunc10(u32, u32, u32)
{
    Obj55b28c lock((u8 *)onlineContextGetInstance() + 0x58);
    vfunc1c();
    FUN_002ee50c(this, 0);
    return 1;
}
