#include "common.h"

extern "C" {

/* Gathers packed halfword pairs from four blocks in reverse index order. */
void blockGatherPackedHalfwords(u32 *output, const u32 *input, u32 stride, const u32 *indices)
{
    s32 index = 4;
    do {
        u32 offset = indices[index];
        const u32 *block = input + offset;
        for (s32 pair = 0; pair < 2; ++pair) {
            const u32 *next = block + stride;
            *output++ = block[0];
            *output++ = (block[1] & 0xFFFF) | (next[0] << 16);
            *output++ = (next[0] >> 16) | (next[1] << 16);
            *output++ = (block[1] >> 16) | (block[2] << 16);
            *output++ = ((block[2] >> 16) & 0xFFFF) | (next[1] & 0xFFFF0000);
            *output++ = next[2];
            block += stride * 2;
        }
    } while (--index > 0);
}

} /* extern "C" */
