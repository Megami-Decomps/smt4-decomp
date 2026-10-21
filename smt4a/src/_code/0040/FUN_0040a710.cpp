/* NON_MATCHING: retail preserves both ID and ID-minus-one across the getter; compiled code shares the index and schedules the signed division and flag test differently. */
#include "common.h"

extern "C" {
u8* FUN_00261440(void);

// Sets or clears the one-based flag in the saved bit array.
void FUN_0040a710(s32 id, s32 enabled)
{
    s32 index = id - 1;
    u8* flags = FUN_00261440();
    u8* byte = &flags[index / 8];
    u32 mask = 1u << (index % 8);
    if (enabled != 0) {
        *byte |= mask;
    } else {
        *byte &= ~mask;
    }
}
}
