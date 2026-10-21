/* NON_MATCHING: retail stores the new state before masking/converting through R0; compiled code masks and transfers to S0 before the final two stores. */
#include "shard/W5_W5Match2_ShiftRandom.h"

extern "C" {
extern ShiftRandomState DAT_004d9748;

// Advances the four-word shift generator and returns a 24-bit fraction in [0, 1).
f32 FUN_0024b830(ShiftRandomState* state)
{
    if (state == NULL) {
        state = &DAT_004d9748;
    }
    u32 first = state->first;
    u32 second = state->second;
    u32 third = state->third;
    u32 fourth = state->fourth;
    state->third = second;
    state->second = first;
    u32 next = ((second << 2) | (first >> 30)) ^ ((fourth << 1) | (third >> 31));
    state->first = next;
    state->fourth = third;
    return static_cast<f32>(next & 0xffffff) * (1.0f / 16777216.0f);
}
}
