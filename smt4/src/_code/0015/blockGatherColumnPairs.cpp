#include "common.h"

extern "C" {

/* Gathers four two-column blocks in the supplied reverse index order. */
void blockGatherColumnPairs(u32 *output, const u32 *input, u32 stride, const u32 *indices)
{
    for (s32 index = 4; index > 0; --index) {
        u32 offset = indices[index];
        const u32 *block = input + offset;
        *output++ = block[0];
        *output++ = block[stride];
        *output++ = block[1];
        *output++ = block[stride + 1];
        block += stride * 2;
        *output++ = block[0];
        *output++ = block[stride];
        *output++ = block[1];
        *output++ = block[stride + 1];
    }
}

} /* extern "C" */
