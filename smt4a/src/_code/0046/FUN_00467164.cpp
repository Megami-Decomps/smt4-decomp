#include "common.h"
struct TargetState { u8 unk00[12]; u32 flags; s32 value; };
extern "C" { void FUN_00467840(); extern s32 (*DAT_005c1cac[])(void *); }
/* Dispatches the flag-selected callback unless the target supplies its own result. */
extern "C" s32 FUN_00467164(TargetState *target)
{
    FUN_00467840();
    u32 flags = target->flags;
    if (flags & 1)
        return target->value;
    s32 index = (s32)((flags & 56) >> 3);
    return DAT_005c1cac[index]((u8 *)target + 16);
}
