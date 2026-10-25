#include "common.h"

namespace { struct State { u8 padding[0x12e4]; s32 state; }; struct Owner { u32 job; State *state; }; }

extern "C" {
/* Reads or updates the requested state. */
extern Owner g_gameGlobals;
s32 FUN_0029e02c(void)
{
    if (g_gameGlobals.state != NULL) {
        return g_gameGlobals.state->state != 0;
    }
    return 0;
}
}
