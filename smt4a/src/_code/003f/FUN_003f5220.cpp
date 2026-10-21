/* NON_MATCHING: compiler emits two scalar coordinate stores instead of retail LDRD/STRD. */
#include "common.h"

namespace { struct State { u8 padding[0x2c]; u32 x, y; u8 unused[8]; u32 slot; }; }

extern "C" {
void FUN_003f3e64(State *state, u32 *x, u32 *y);
void FUN_003f5220(State *state, u32 slot)
{
    state->slot = slot;
    u32 x = 0, y = 0;
    FUN_003f3e64(state, &x, &y);
    state->x = x;
    state->y = y;
}
}
