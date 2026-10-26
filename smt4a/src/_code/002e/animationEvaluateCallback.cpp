/* NON_MATCHING: callback takes (range pair, time, context); retail copies the maximum into s2 before the clamp and stores the changed flag after the previous-value store. */
#include "common.h"

struct FloatPair { f32 first, second; };
struct AnimationCallback {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ f32 value;
    /* 0x3C */ f32 previous;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ FloatPair range;
    /* 0x4C */ f32 (*evaluate)(FloatPair range, f32 time, void *context);
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
        if (time > callback->range.second)
            time = callback->range.second;
        f32 value = callback->evaluate(callback->range, time, callback->context);
        callback->previous = callback->value;
        callback->value = value;
        callback->changed = true;
    }
}
