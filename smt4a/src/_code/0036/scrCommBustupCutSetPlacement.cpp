#include "shard/Shard0036.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void bustupCutAnimSetPlacement(u32 job, s32 slot, s32 snap, s32 x, s32 y);

/* Script command: bustupCutAnimSetPlacement on four arguments. */
u32 scrCommBustupCutSetPlacement(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);
    u32 d = scrGetArg(3);

    bustupCutAnimSetPlacement(a, b, 0, c, d);
    return 1;
}

} /* extern "C" */
