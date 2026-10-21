/* NON_MATCHING: packed-key loads and register allocation differ, including an ldrd absent from retail. */
#include "common.h"

/* Orders packed 64-bit keys by descending primary and ascending secondary fields. */
extern "C" s32 FUN_0034f784(const u64 *left, const u64 *right)
{
    s32 difference = (u32)(*right >> 49) - (u32)(*left >> 49);
    if (difference != 0) {
        return difference;
    }
    u32 leftSecondary = (u32)(*left >> 17);
    u32 rightSecondary = (u32)(*right >> 17);
    return (leftSecondary >> 17) - (rightSecondary >> 17);
}
