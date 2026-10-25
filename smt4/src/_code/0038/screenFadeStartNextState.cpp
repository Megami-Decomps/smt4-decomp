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
static __inline void targetStart(TargetState *target, u32 state)
{
    target->state = state;
    target->step = 0;
}

extern "C" void screenFadeStartNextState(TargetState *target)
{
    if (!screenFadeIsBusy()) {
        if (target->variant != 1) {
            targetStart(target, 4);
        } else {
            targetStart(target, 5);
        }
    }
}
