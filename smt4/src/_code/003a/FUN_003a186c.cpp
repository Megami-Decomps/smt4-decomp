/* NON_MATCHING: retail resource ownership or default-store allocation differs. */
#include "common.h"

struct TargetState { u32 flags; u32 state; u32 step; };
extern "C" u32 screenFadeIsBusy(void);
/* Starts state two and enables its control flags while idle. */
extern "C" void FUN_003a186c(TargetState *target)
{
    if (!screenFadeIsBusy()) {
        target->flags |= 0x102;
        target->state = 2;
        target->step = 0;
    }
}
