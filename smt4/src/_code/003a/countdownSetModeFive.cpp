#include "common.h"

struct CountdownState {
    /* 0x00 */ u8 unk00[29];
    /* 0x1d */ u8 mode;
};
struct CountdownGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ CountdownState *state;
};
extern "C" {
extern CountdownGlobals g_countdown;
static __inline void countdownSetMode(CountdownState *state, u8 mode)
{
    state->mode = mode;
}

/* Switches the countdown mode. */
void countdownSetModeFive()
{
    countdownSetMode(g_countdown.state, 5);
}
}
