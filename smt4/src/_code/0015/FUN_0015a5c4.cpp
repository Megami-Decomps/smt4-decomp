/* NON_MATCHING: armcc assigns the loop counter to ip and the block pointer to r4; retail uses the opposite allocation. */
#include "common.h"

extern "C" {

/* Gathers four two-column blocks in the supplied reverse index order. */
void FUN_0015a5c4(u32 *output, const u32 *input, u32 stride, const u32 *indices)
{
    for (s32 index = 4; index > 0; --index) {
        const u32 *block = input + indices[index];
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
