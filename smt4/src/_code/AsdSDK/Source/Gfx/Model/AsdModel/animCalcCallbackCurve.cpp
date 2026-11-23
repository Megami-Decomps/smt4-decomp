#include "common.h"
struct TargetState { u8 unk00[12]; u32 flags; s32 value; };
typedef s32 (*TargetCallback)(void *payload, f32 frame);
extern "C" { f32 animCurveAdjustFrame(TargetState *target, f32 frame); extern TargetCallback DAT_00471c20[]; }
/* Dispatches the flag-selected callback at the adjusted frame unless the target supplies its own result. */
extern "C" s32 animCalcCallbackCurve(TargetState *target, f32 frame)
{
    frame = animCurveAdjustFrame(target, frame);
    u32 flags = target->flags;
    if (flags & 1)
        return target->value;
    s32 index = (s32)((flags & 56) >> 3);
    return DAT_00471c20[index]((u8 *)target + 16, frame);
}
