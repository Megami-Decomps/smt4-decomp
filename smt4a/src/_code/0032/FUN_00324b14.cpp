#include "common.h"

namespace { struct MapState { u8 padding[0xcc]; u32 value; u32 active; u32 timer; }; }

extern "C" {
/* Reads or updates the requested state. */
extern MapState *g_lmapMainState;
void FUN_00324b14(u32 value)
{
    MapState *state = g_lmapMainState;
    if (state->value != value) {
        state->value = value;
        state->active = 0;
        state->timer = 0;
    }
}
}
