/* NON_MATCHING: same packing; retail masks the 2-bit kind with a shift pair and builds the two 64-bit halves separately. */
#include "common.h"

extern "C" {

/* Packs a 64-bit key: the value in the low word; above it an 8-bit index at bit 45, a set marker at 53, a 2-bit kind at 54 and an 8-bit flags byte at 56. */
u64 FUN_003f87a0(void *self, u32 value, u32 kind, u8 index, u8 flags)
{
    u32 high = (flags << 24) | (index << 13) | ((kind & 3) << 22) | (1 << 21);

    return ((u64)high << 32) | value;
}

} /* extern "C" */
