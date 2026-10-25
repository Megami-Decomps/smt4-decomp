/* NON_MATCHING: armcc emits separate word loads and different register allocation instead of retail's LDRD pairs. */
#include "common.h"

extern "C" {

/* Gathers packed halfword pairs from four blocks in reverse index order. */
void FUN_0015a634(u32 *output, const u32 *input, u32 stride, const u32 *indices)
{
    for (u32 index = 4; index > 0; --index) {
        const u32 *block = input + indices[index];
        for (s32 pair = 0; pair < 2; ++pair) {
            const u32 *next = block + stride;
            *output++ = block[0];
            *output++ = (block[1] & 0xFFFF) | (next[0] << 16);
            *output++ = (next[0] >> 16) | (next[1] << 16);
            *output++ = (block[1] >> 16) | (block[2] << 16);
            *output++ = (block[2] >> 16) | (next[1] & 0xFFFF0000);
            *output++ = next[2];
            block += stride * 2;
        }
    }
}

} /* extern "C" */
