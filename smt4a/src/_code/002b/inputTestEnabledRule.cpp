#include "common.h"

struct InputRule {
    /* 0x00 */ u32 disabled;
    /* 0x04 */ u32 mask;
};
struct InputMode {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 flags;
};
struct InputState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 buttons;
};

extern "C" {
extern InputRule DAT_0053d740[31];
extern InputMode DAT_005b4000;
extern InputState DAT_0063fff0;
extern InputState DAT_0063ffd0;

/* Read buttons from an optional input source. */
static __inline u32 inputButtons(const InputState *input)
{
    return input != NULL ? input->buttons : 0;
}

/* Test the selected input source against an enabled rule's button mask. */
bool inputTestEnabledRule(u32 index)
{
    if (index >= 31 || DAT_0053d740[index].disabled != 0) {
        return false;
    }
    InputState *input;
    if ((DAT_005b4000.flags & 1) != 0) {
        input = &DAT_0063fff0;
    } else if ((DAT_005b4000.flags & 2) != 0) {
        input = &DAT_0063fff0;
    } else {
        input = &DAT_0063ffd0;
    }
    return (inputButtons(input) & DAT_0053d740[index].mask) != 0;
}

}
