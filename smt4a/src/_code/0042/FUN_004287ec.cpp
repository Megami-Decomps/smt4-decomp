/* NON_MATCHING: scheduling/allocation only: retail keeps a zero in r4 for the failure store and loads the count and capacity with two ldr (pointer r0), the build loads them with ldm and keeps a different set of saved registers. */
#include "nn/Result.h"

/* Two words. */
struct WordPair {
    u32 first;
    u32 second;
};

/* A fixed-capacity array of 8-byte pairs. */
struct PairArray {
    /* 0x0 */ WordPair *entries;
    /* 0x4 */ u32 capacity;
    /* 0x8 */ u32 count;
};

extern "C" {

extern PairArray DAT_006428e4; /* 0x6428e4 */

/* Appends the pair (first, second) to the pair array when `owner` still holds `handle`; clears the owner's handle on failure. */
s32 FUN_004287ec(s32 *owner, u32 first, u32 second, s32 handle)
{
    s32 result;

    if (handle == *owner && handle != 0) {
        result = 0;
    } else {
        result = (s32)0xd8a138c1;
    }
    if (!nnResultIsFailure(result)) {
        if (DAT_006428e4.count >= DAT_006428e4.capacity) {
            result = (s32)0xe0613881;
        } else {
            WordPair pair = {first, second};
            DAT_006428e4.entries[DAT_006428e4.count] = pair;
            DAT_006428e4.count++;
            result = 0;
        }
        if (nnResultIsSuccess(result)) {
            result = 0;
        } else {
            *owner = 0;
        }
    }
    return result;
}

} /* extern "C" */
