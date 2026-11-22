/* NON_MATCHING: the IV twin FUN_003f87a0's source; only the first temporary differs: retail shifts the flags into ip (`lsl ip, r0, #24`) where armcc reuses r0. */
#include "common.h"

extern "C" {

/* Packs a 64-bit key: the value in the low word; above it an 8-bit index at bit 45, a set marker at 53, a 2-bit kind at 54 and an 8-bit flags byte at 56. */
u64 FUN_005168d4(void *self, u32 value, u32 kind, u8 index, u8 flags)
{
    u32 high = (kind << 30) >> 8; /* 2-bit field at bit 22 */
    high |= (flags << 24) | (index << 13);
    high |= 0x200000;
    u64 packed = high;
    packed <<= 32;
    return packed | value;
}

} /* extern "C" */
