/* NON_MATCHING: the append now reloads the count after the stores and saves r4/r5 like retail (entries are words, so the stores alias the count); retail keeps a zero in r4 for the failure store, tests handle==owner as `cmp r3, r0` with the failure constant out of line, and loads count then capacity with two ldr where the build uses ldm. */
#include "nn/Result.h"

/* Two words. */
struct WordPair {
    u32 first;
    u32 second;
};

/* A fixed-capacity array of 8-byte pairs. */
struct PairArray {
    /* 0x0 */ u32 *entries;
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
        u32 index = DAT_006428e4.count;
        if (index >= DAT_006428e4.capacity) {
            result = (s32)0xe0613881;
        } else {
            u32 *slot = DAT_006428e4.entries + index * 2;
            slot[0] = first;
            slot[1] = second;
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
