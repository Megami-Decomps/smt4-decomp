/* Reconciles the direction bits (4 and 8) of two flag words against the state word at `state`, then clears bit 4. */
#include "common.h"

extern "C" {

static __inline void reconcile(u32 *flags, const u32 *state)
{
    u32 value = *flags;

    if ((~value & 0xc) == 0 || ((value & 4) && !(*state & 8)) || ((value & 8) && !(*state & 4))) {
        *flags = value | 8;
    } else {
        *flags = value & ~8;
    }
}

void FUN_0018c504(u32 *state, u32 *flagsA, u32 *flagsB)
{
    reconcile(flagsA, state);
    reconcile(flagsB, state);
    if (*state & 4) {
        *state = (*state & ~4) | 8;
    }
    *flagsA &= ~4;
    *flagsB &= ~4;
}

}
