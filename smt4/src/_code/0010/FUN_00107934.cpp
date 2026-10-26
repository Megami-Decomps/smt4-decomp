/* NON_MATCHING: the rule walk now steps pointers like retail; retail reads pollSucceeded once into r5 before the loop (the field is hoisted) and shares one literal base for the held-state and frame-counter globals (DAT_004e3c58-48), ours reloads it per rule and keeps separate literals. */
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
    const InputRule *rule = DAT_00409ab0;
    u32 *frames = DAT_004e3c58;
    for (s32 remaining = 31; remaining != 0; --remaining, ++rule, ++frames) {
        u32 buttons = 0;
        if (rule->disabled == 0) {
            if (DAT_004650a0.pollSucceeded <= 0) {
                continue;
            }
            buttons = DAT_004e3c28.held;
        }
        if ((buttons & rule->mask) != 0) {
            ++*frames;
        } else {
            *frames = 0;
        }
    }
}
}
