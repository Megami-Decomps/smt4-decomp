/* NON_MATCHING: scoped-lock and virtual dispatch register allocation has not been matched. */
#include "classes/Obj558c90.h"
#include "classes/Obj55b28c.h"
extern "C" {
void *onlineContextGetInstance();
s32 FUN_0010aafa(Obj558c90 *object, u32 key);
}

s32 Obj558c90::vfunc0c(u32 key, u32, u32)
{
    Obj55b28c lock((u8 *)onlineContextGetInstance() + 0x58);
    if (FUN_0010aafa(this, key) != 0) {
        vfunc1c();
        return 1;
    }
    return 0;
}
