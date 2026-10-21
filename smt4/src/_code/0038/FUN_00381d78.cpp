/* NON_MATCHING: retail resource ownership or default-store allocation differs. */
#include "common.h"

struct TargetState {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 step;
    /* 0x0c */ u8 unk0c[5];
    /* 0x11 */ u8 variant;
};
extern "C" s32 screenFadeIsBusy();
/* Starts state four or five when the shared query is idle. */
extern "C" void FUN_00381d78(TargetState *target)
{
    if (!screenFadeIsBusy()) {
        target->state = target->variant == 1 ? 5 : 4;
        target->step = 0;
    }
}
