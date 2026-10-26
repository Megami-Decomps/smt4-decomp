/* NON_MATCHING: retail pushes only lr (no r4 pad) around the call; same instructions otherwise. */
#include "common.h"

extern "C" {
s32 FUN_005083a0(u32 value, s32 mode);

u32 FUN_00508384(u32 value)
{
    return FUN_005083a0(value, 0x4001) != 0;
}
}
