/* NON_MATCHING: retail argument/return register scheduling differs from the typed helper. */
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
/* Switches the countdown mode. */
void FUN_003ac468()
{
    g_countdown.state->mode = 5;
}
}
