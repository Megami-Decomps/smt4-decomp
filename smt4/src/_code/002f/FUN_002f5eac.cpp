/* NON_MATCHING: compiler schedules address formation, prologue and conditional return differently from retail. */
#include "common.h"

namespace { struct State { u8 padding[0x44]; u8 flags; }; }

extern "C" {
State *FUN_002a0d0c(void);
void FUN_002f5eac(u32 flag, u32 enabled)
{
    State *state = FUN_002a0d0c();
    u8 mask = 1 << (flag & 7);
    if (enabled != 0) { state->flags |= mask; }
    else { state->flags &= ~mask; }
}
}
