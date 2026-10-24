/* NON_MATCHING: retail composes the two words through a redundant zero pair (mov r0,#0; mov r3,r0) that armcc here folds away; same result. */
#include "common.h"

extern "C" {

/* Builds a 64-bit descriptor: the low word as given, the high word from the mode, scale and flags. */
u64 FUN_003f86b8(void *self, u32 low, u32 mode, u32 scale, u32 flags)
{
    u32 high = 0x200000 | ((mode & 3) << 22) | (scale << 13) | (flags << 24);
    return ((u64)high << 32) | low;
}

} /* extern "C" */
