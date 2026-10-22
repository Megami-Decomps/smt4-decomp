/* NON_MATCHING: the input-rule walk uses indexed addressing and a different disabled-rule branch layout. */
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
extern PadInputState DAT_004e3c28;
extern u32 DAT_004e3c58[31];
extern InputRule DAT_00409ab0[31];
u32 FUN_0011c6cc(PadReader *reader, PadInputState *input);

void FUN_00107934()
{
    DAT_004650a0.pollSucceeded =
        FUN_0011c6cc(DAT_004650a0.reader, &DAT_004e3c28) != 0;
    for (u32 index = 0; index < 31; ++index) {
        u32 buttons = 0;
        if (DAT_00409ab0[index].disabled == 0) {
            if (DAT_004650a0.pollSucceeded <= 0) {
                continue;
            }
            buttons = DAT_004e3c28.held;
        }
        if ((buttons & DAT_00409ab0[index].mask) == 0) {
            DAT_004e3c58[index] = 0;
        } else {
            ++DAT_004e3c58[index];
        }
    }
}
}
