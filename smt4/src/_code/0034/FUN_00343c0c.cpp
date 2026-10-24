/* NON_MATCHING: same operations; retail keeps id-1 across the getter call in r5 and recomputes it for the remainder, armcc schedules the shift/bic and mask setup differently */
#include "common.h"

extern "C" {
u8* FUN_001c35e8(void);

// Sets or clears the one-based flag in the saved bit array.
void FUN_00343c0c(s32 id, s32 enabled)
{
    s32 index = id - 1;
    u8* flags = FUN_001c35e8();
    u8* byte = &flags[index / 8];
    u32 mask = 1u << ((id - 1) % 8);
    if (enabled != 0) {
        *byte |= mask;
    } else {
        *byte &= ~mask;
    }
}
}
