/* NON_MATCHING: loop strength reduction: the build turns the bit index into a counting-down induction variable (mov r5, #32; subs); retail recomputes i + 0x800 from an up-counting index each iteration (candidate lower optimization level). */
#include "common.h"

extern "C" {

/* ORs the flag bits 0x800-0xa1f of `source` into `destination` (bit n is bit n & 7 of byte n >> 3). */
void FUN_0033f86c(u8 *destination, const u8 *source)
{
    s32 i;

    for (i = 0; i < 0x20; i++) {
        u32 bit = i + 0x800;
        u32 mask = 1 << (bit & 7);
        if ((source[bit >> 3] & mask) != 0) {
            destination[bit >> 3] |= mask;
        }
    }
    for (i = 0; i < 0x200; i++) {
        u32 bit = i + 0x820;
        u32 mask = 1 << (bit & 7);
        if ((source[bit >> 3] & mask) != 0) {
            destination[bit >> 3] |= mask;
        }
    }
}

} /* extern "C" */
