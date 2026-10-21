#include "common.h"

extern "C" {

struct HelpState {
    /* 0x000 */ u8 unk000[0x5e8];
    /* 0x5e8 */ u16 value;
};
struct HelpOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ HelpState *state;
};
extern HelpOwner g_buttonHelp;

u32 buttonHelpGetValue(void)
{
    HelpState *state = g_buttonHelp.state;
    return state != NULL ? state->value : 0;
}

} /* extern "C" */
