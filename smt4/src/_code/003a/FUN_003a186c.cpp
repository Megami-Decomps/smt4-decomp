#include "common.h"

struct TargetStep { u32 state; u32 step; };
struct TargetState { u32 flags; TargetStep step; };

extern "C" u32 screenFadeIsBusy(void);

static inline void targetStepSet(TargetStep *slot, u32 state, u32 step)
{
    TargetStep value = { state, step };
    *slot = value;
}

/* Starts state two and enables its control flags while idle. */
extern "C" void FUN_003a186c(TargetState *target)
{
    if (!screenFadeIsBusy()) {
        target->flags |= 0x102;
        targetStepSet(&target->step, 2, 0);
    }
}
