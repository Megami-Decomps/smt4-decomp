/* NON_MATCHING: the loops now match; retail keeps the constant 1 in ip and the byte index in r3, this build swaps them. */
#include "common.h"

extern "C" {

/* Copies flag `id` from `source` to `destination` when it is set there (bit id & 7 of byte id >> 3). */
static void flagBitCopy(u8 *destination, const u8 *source, u32 id)
{
    u32 index = id >> 3;
    u32 mask = 1 << (id & 7);
    if ((source[index] & mask) != 0) {
        destination[index] |= mask;
    }
}

/* ORs the flag bits 0x800-0xa1f of `source` into `destination`. */
void flagBitsMergeBlock(u8 *destination, const u8 *source)
{
    s32 i;

    for (i = 0; i < 0x20; i++) {
        flagBitCopy(destination, source, i + 0x800);
    }
    for (i = 0; i < 0x200; i++) {
        flagBitCopy(destination, source, i + 0x820);
    }
}

} /* extern "C" */
