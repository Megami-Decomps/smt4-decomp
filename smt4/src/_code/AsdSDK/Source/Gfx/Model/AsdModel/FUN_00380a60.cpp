/* NON_MATCHING: retail query scheduling or inlined accessor instruction grouping differs. */
#include "common.h"
struct TargetState { u8 unk00[12]; u32 flags; s32 value; };
extern "C" { void thresholdDispatchOutsideRange(); extern s32 (*DAT_00471c20[])(void *); }
/* Dispatches the flag-selected callback unless the target supplies its own result. */
extern "C" s32 FUN_00380a60(TargetState *target)
{
    thresholdDispatchOutsideRange();
    if (target->flags & 1)
        return target->value;
    return DAT_00471c20[(target->flags & 56) >> 3]((u8 *)target + 16);
}
