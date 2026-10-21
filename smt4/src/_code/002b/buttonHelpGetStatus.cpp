#include "common.h"

namespace {
struct State {
    u8 padding[0x4c9];
    u8 value;
};
struct Owner {
    u32 job;
    State *state;
};
}

extern "C" {
extern Owner g_buttonHelp;

/* Reads the current status byte. */
s32 buttonHelpGetStatus(void)
{
    return g_buttonHelp.state != NULL ? g_buttonHelp.state->value : 0;
}
}
