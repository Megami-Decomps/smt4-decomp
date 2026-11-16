/* NON_MATCHING: only the first temporary differs: retail shifts the flags into ip (`lsl ip, r0, #24`) where armcc reuses r0. */
#include "common.h"

extern "C" {

/* Builds a 64-bit descriptor: the low word as given, the high word from the mode, scale and flags. */
u64 FUN_003f86b8(void *self, u32 low, u32 mode, u32 scale, u32 flags)
{
    u32 high = (mode << 30) >> 8; /* 2-bit field at bit 22 */
    high |= (flags << 24) | (scale << 13);
    high |= 0x200000;
    u64 packed = high;
    packed <<= 32;
    return packed | low;
}

} /* extern "C" */
