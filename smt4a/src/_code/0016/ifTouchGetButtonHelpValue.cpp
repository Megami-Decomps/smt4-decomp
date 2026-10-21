#include "common.h"

struct ButtonHelpState {
    u8 unk00[0x5E6];
    u16 value; // 0x5E6
};

struct ButtonHelp {
    u32 unk00; // 0x00
    ButtonHelpState* state; // 0x04
};

extern "C" {
extern ButtonHelp g_buttonHelp;

u16 ifTouchGetButtonHelpValue(void)
{
    ButtonHelpState* state = g_buttonHelp.state;
    if (state != 0) {
        return state->value;
    }
    return 0;
}
}
