/* NON_MATCHING: same packed word; retail builds it as bit-field inserts (mode via lsl 30 / lsr 8) with the low word ORed in from zero, this build masks and merges directly. */
#include "common.h"

/* Packs a draw-command word: the low word is `low`, the high word holds the three fields and the fixed bit. */
extern "C" u64 FUN_003f85dc(void *self, u32 low, u32 mode, u32 value, u32 flags)
{
    u32 high = flags << 24 | value << 13 | (mode & 3) << 22 | 0x200000;

    return ((u64)high << 32) | low;
}
