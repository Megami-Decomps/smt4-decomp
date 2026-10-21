#include "shard/Shard0035.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void bustupCutAnimSetPlacement(u32 job, s32 slot, s32 snap, s32 x, s32 y);

/* Script command: bustupCutAnimSetPlacement on arguments 0 and 1. */
u32 FUN_0035c2ec(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);

    bustupCutAnimSetPlacement(a, b, 0, 0, 0);
    return 1;
}

} /* extern "C" */
