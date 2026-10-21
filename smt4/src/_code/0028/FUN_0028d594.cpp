#include "common.h"

namespace {
struct State {
    u8 padding[0x4cb];
    s8 value;
};
struct Owner {
    u32 job;
    State *state;
};
}

extern "C" {
extern Owner g_buttonHelp;

/* Reads the current signed status byte. */
s32 FUN_0028d594(void)
{
    return g_buttonHelp.state->value;
}
}
