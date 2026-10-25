#include "common.h"
#include "status/StatusCamera.h"

namespace { struct State { u8 padding[0x44]; u8 bits[1]; }; }

extern "C" {

/* Sets or clears a flag in the state's bit set. */
void stateSetBitFlag(u32 flag, u32 enabled)
{
    State *state = reinterpret_cast<State *>(FUN_002a0d0c());
    if (enabled != 0) {
        state->bits[flag >> 3] |= 1 << (flag & 7);
    } else {
        state->bits[flag >> 3] &= ~(1 << (flag & 7));
    }
}
}
