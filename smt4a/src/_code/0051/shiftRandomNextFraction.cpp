#include "shard/W5_W5Match2_ShiftRandom.h"
#include "code/Code0051_Smt4a.h"

extern "C" {
extern ShiftRandomState DAT_006357c8;

static __inline u32 shiftRandomAdvance(ShiftRandomState *state)
{
    u32 first = state->first;
    u32 second = state->second;
    u32 third = state->third;
    u32 fourth = state->fourth;

    state->third = second;
    state->second = first;
    u32 next = ((second << 2) | (first >> 30)) ^ ((fourth << 1) | (third >> 31));
    state->first = next;
    state->fourth = third;
    return next;
}

// Advances the four-word shift generator and returns a 24-bit fraction in [0, 1).
f32 shiftRandomNextFraction(ShiftRandomState* state)
{
    if (state == NULL) {
        state = &DAT_006357c8;
    }
    return static_cast<f32>(shiftRandomAdvance(state) & 0xffffff) * (1.0f / 16777216.0f);
}
}
