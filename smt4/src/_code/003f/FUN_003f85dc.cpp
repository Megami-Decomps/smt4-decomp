/* NON_MATCHING: field word now matches retail ((mode << 30) >> 8); retail still ORs the 64-bit halves with unfolded zeros. */
#include "common.h"

/* Packs a draw-command word: the low word is `low`, the high word holds the three fields and the fixed bit. */
extern "C" u64 FUN_003f85dc(void *self, u32 low, u32 mode, u32 value, u32 flags)
{
    u32 high = (flags << 24) | (value << 13) | ((mode << 30) >> 8) | 0x200000;

    return ((u64)high << 32) | low;
}
