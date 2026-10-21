#include "common.h"

namespace {
struct State { u8 padding[0x12ec]; s8 value; };
struct Owner { u32 job; State *state; };
}

extern "C" {
/* Reads or forwards the current state. */
extern Owner g_gameGlobals;
s32 FUN_0029ae44(void)
{
    return g_gameGlobals.state != NULL ? g_gameGlobals.state->value : 0;
}
}
