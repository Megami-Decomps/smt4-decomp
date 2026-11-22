/* NON_MATCHING: the IV twin FUN_003f85dc's source; only the first temporary differs: retail shifts the flags into ip (`lsl ip, r0, #24`) where armcc reuses r0. */
#include "common.h"

/* Packs a draw-command word: the low word is `low`, the high word holds the three fields and the fixed bit. */
extern "C" u64 FUN_00516710(void *self, u32 low, u32 mode, u32 value, u32 flags)
{
    u32 high = (mode << 30) >> 8; /* 2-bit field at bit 22 */
    high |= (flags << 24) | (value << 13);
    high |= 0x200000;
    u64 packed = high;
    packed <<= 32;
    return packed | low;
}
