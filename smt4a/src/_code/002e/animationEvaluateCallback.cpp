/* NON_MATCHING: VFP clamp copies and callback-result store scheduling differ from retail. */
#include "common.h"

struct AnimationCallback {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ f32 value;
    /* 0x3C */ f32 previous;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ f32 start;
    /* 0x48 */ f32 maximumTime;
    /* 0x4C */ f32 (*evaluate)(void *context, f32 start, f32 duration, f32 time);
    /* 0x50 */ void *context;
    /* 0x54 */ u32 unk54;
    /* 0x58 */ u8 changed;
};
struct AnimationCallbackOwner {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 count;
    /* 0x38 */ u8 unk38[0x14];
    /* 0x4C */ AnimationCallback *callback;
};

/* Evaluate a live animation callback, clamping elapsed time to its duration. */
extern "C" void animationEvaluateCallback(AnimationCallbackOwner *owner, f32 time)
{
    if (owner->count <= 0)
        return;
    AnimationCallback *callback = owner->callback;
    if (callback != NULL) {
        if (time > callback->maximumTime)
            time = callback->maximumTime;
        f32 value = callback->evaluate(callback->context, callback->start, callback->maximumTime, time);
        callback->previous = callback->value;
        callback->value = value;
        callback->changed = true;
    }
}
