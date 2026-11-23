/* NON_MATCHING: 6 lines, only the literal pool order: retail pools &g_padInputs ahead of g_padInputState (the
 * entry loads take the two words in the other order). Code and layout match. */
#include "common.h"

struct PadReader;
struct PadPollingState {
    /* 0x00 */ PadReader *reader;
    /* 0x04 */ s32 pollSucceeded;
};
struct PadInputState {
    /* 0x00 */ u32 held;
    /* 0x04 */ u32 pressed;
    /* 0x08 */ u32 released;
    /* 0x0c */ s16 stickX;
    /* 0x0e */ s16 stickY;
};
struct InputRule {
    /* 0x00 */ u32 disabled;
    /* 0x04 */ u32 mask;
};

extern "C" {
extern PadPollingState g_padInputState;
extern InputRule DAT_00409ab0[31];
u32 FUN_0011c6cc(PadReader *reader, PadInputState *input);

PadInputState g_padInputs[3];
u32 g_padHeldFrames[31];

void padUpdateHeldFrames()
{
    if (FUN_0011c6cc(g_padInputState.reader, &g_padInputs[0]) != 0) {
        g_padInputState.pollSucceeded = 1;
    } else {
        g_padInputState.pollSucceeded = 0;
    }
    s32 pollSucceeded = g_padInputState.pollSucceeded;
    for (s32 i = 0; i < 31; i++) {
        u32 buttons;
        if (DAT_00409ab0[i].disabled == 0) {
            if (pollSucceeded <= 0)
                continue;
            buttons = g_padInputs[0].held;
        } else {
            buttons = 0;
        }
        if ((buttons & DAT_00409ab0[i].mask) != 0) {
            ++g_padHeldFrames[i];
        } else {
            g_padHeldFrames[i] = 0;
        }
    }
}
}
