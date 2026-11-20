#include "shard/Shard0031.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void lmapRequestTimedEffect(u32 a, u32 b, s32 c);

/* Script command: runs lmapRequestTimedEffect on argument 0 and argument 1. */
u32 FUN_0031d558(void)
{
    u32 value = scrGetArg(1);
    u32 id = scrGetArg(0);

    lmapRequestTimedEffect(id, value, 0);
    return 1;
}

} /* extern "C" */
