/* NON_MATCHING: retail tests results as nn::Result bit 31 (`lsrs`/`ands #0x80000000`), spills all four arguments (bufferLength is taken by reference for the min) and returns the second result through r6; structure only roughly recovered. */
#include "nn/Result.h"
#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdOperatorNewB.h"

extern "C" {
s32 FUN_0035a418(u16 *buffer, u32 *length, u32 key, s32 *option);
void asdOperatorDelete(void *memory);
void FUN_00100c74(u16 *destination, const u16 *source, u32 count);
}

static __inline const u32 &minLength(const u32 &a, const u32 &b)
{
    return (b < a) ? b : a;
}

/* Reads the wide string `key` into `buffer` (at most `bufferLength` characters, always terminated);
 * returns the failing result, or 0. */
extern "C" s32 FUN_002344d8(void *owner, u16 *buffer, u32 bufferLength, u32 key)
{
    u32 length;
    s32 option = -1;
    s32 result = FUN_0035a418(NULL, &length, key, &option);
    u16 *text;

    if (nnResultIsFailure(result)) {
        return result;
    }
    text = (u16 *)asdOperatorNewB(length * 2 + 2, buffer);
    result = FUN_0035a418(text, &length, key, &option);
    if (nnResultIsSuccess(result)) {
        u32 count;

        text[length] = 0;
        count = length + 1;
        FUN_00100c74(buffer, text, minLength(count, bufferLength));
        buffer[bufferLength - 1] = 0;
        result = 0;
    }
    asdOperatorDelete(text);
    return result;
}
