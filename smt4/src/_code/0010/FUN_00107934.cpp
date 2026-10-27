/* NON_MATCHING: same-file data now reproduces retail's single literal base (held state = frame counters - 48) and the single read of pollSucceeded; remaining: retail lays the poll test out inside the loop before its tail (no `continue` branch) and loads the held-state literal before DAT_004650a0. */
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
extern PadPollingState DAT_004650a0;
extern InputRule DAT_00409ab0[31];
u32 FUN_0011c6cc(PadReader *reader, PadInputState *input);

PadInputState DAT_004e3c28[3];
u32 DAT_004e3c58[31];

void FUN_00107934()
{
    if (FUN_0011c6cc(DAT_004650a0.reader, &DAT_004e3c28[0]) != 0) {
        DAT_004650a0.pollSucceeded = 1;
    } else {
        DAT_004650a0.pollSucceeded = 0;
    }
    s32 pollSucceeded = DAT_004650a0.pollSucceeded;
    for (s32 i = 0; i < 31; i++) {
        u32 buttons = 0;
        if (DAT_00409ab0[i].disabled == 0) {
            if (pollSucceeded <= 0) {
                continue;
            }
            buttons = DAT_004e3c28[0].held;
        }
        if ((buttons & DAT_00409ab0[i].mask) != 0) {
            ++DAT_004e3c58[i];
        } else {
            DAT_004e3c58[i] = 0;
        }
    }
}
}
