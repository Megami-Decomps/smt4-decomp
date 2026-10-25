#include "common.h"
#include "status/StatusCamera.h"

extern "C" {

struct MotionOwner {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ u32 state;
    /* 0x018 */ u32 stateArg;
    /* 0x01c */ u8 unk01c[0x5a4 - 0x1c];
    /* 0x5a4 */ u8 alternate;
};

u8 useCounterIsFinished(void);
void useCounterRelease(void);
s32 useCounterGetCurrentValue(void);
void buttonHelpSetPreset(u32 preset);
void motionPlayForMode(MotionOwner *owner, s32 allowAlternate, s32 unused);

/* Finishes the use counter and moves to state 2 once it has finished; otherwise keeps the current motion going unless the counter is at 75. */
void FUN_0022c988(MotionOwner *owner)
{
    if (useCounterIsFinished()) {
        useCounterRelease();
        buttonHelpSetPreset(owner->alternate == 1 ? 0x46 : 0x2e);
        FUN_002a0cc8(0);
        owner->state = 2;
        owner->stateArg = 0;
    } else if (useCounterGetCurrentValue() != 75) {
        motionPlayForMode(owner, 1, 1);
    }
}

} /* extern "C" */
