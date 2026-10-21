/* NON_MATCHING: retail preserves the state and value in callee-saved registers; compiler emits a leaf setter. */
#include "common.h"

namespace { struct State { u8 padding[0x24]; s32 value; u8 reserved[0x38]; u8 changed; u8 unused; u8 locked; }; }

extern "C" {
void FUN_00298d64(State *state, s32 value)
{
    if (state->locked == 0) {
        if (state->value != value) { state->changed = 1; }
        state->value = value;
    }
}
}
