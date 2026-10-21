#include "common.h"

namespace {
struct State {
    u8 padding[0x1e60];
    s8 value;
};
struct Owner {
    u32 job;
    State *state;
};
}

extern "C" {
extern Owner g_gameGlobals;

/* Reads the current signed status byte. */
s32 FUN_0029dfa8(void)
{
    return g_gameGlobals.state->value;
}
}
