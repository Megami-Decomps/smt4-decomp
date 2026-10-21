#include "shard/Sys4650a0.h"

extern "C" {

struct InputRule {
    /* 0x00 */ u32 disabled;
    /* 0x04 */ u32 mask;
};
struct InputState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 buttons;
};
extern InputRule DAT_00409ab0[31];
extern InputState DAT_004e3c48;
extern InputState DAT_004e3c28;

/* Read buttons from an optional input source. */
static __inline u32 inputButtons(const InputState *input)
{
    return input != NULL ? input->buttons : 0;
}

/* Test the selected input source against an enabled rule's button mask. */
bool inputTestEnabledRule(u32 index)
{
    if (index >= 31 || DAT_00409ab0[index].disabled != 0) {
        return false;
    }
    InputState *input;
    if ((DAT_004650a0.unk08 & 1) != 0) {
        input = &DAT_004e3c48;
    } else {
        input = &DAT_004e3c28;
    }
    return (inputButtons(input) & DAT_00409ab0[index].mask) != 0;
}

}
