#include "common.h"

struct CountdownState {
    /* 0x00 */ u8 unk00[28];
    /* 0x1c */ u8 state;
};

struct CountdownGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ CountdownState *countdown;
};

extern "C" {

extern CountdownGlobals g_countdown;

/* Reports whether the countdown is outside its finished state. */
s32 countdownIsOutsideFinishedState()
{
    if (g_countdown.countdown->state == 4)
        return 0;
    return 1;
}

}
