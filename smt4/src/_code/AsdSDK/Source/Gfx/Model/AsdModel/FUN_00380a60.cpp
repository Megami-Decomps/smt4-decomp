#include "common.h"
struct TargetState { u8 unk00[12]; u32 flags; s32 value; };
extern "C" { void thresholdDispatchOutsideRange(); extern s32 (*DAT_00471c20[])(void *); }
/* Dispatches the flag-selected callback unless the target supplies its own result. */
extern "C" s32 FUN_00380a60(TargetState *target)
{
    thresholdDispatchOutsideRange();
    u32 flags = target->flags;
    if (flags & 1)
        return target->value;
    s32 index = (s32)((flags & 56) >> 3);
    return DAT_00471c20[index]((u8 *)target + 16);
}
