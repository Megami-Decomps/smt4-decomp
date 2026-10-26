/* NON_MATCHING: keys are two-word records now and the result is built in r0 like retail; retail reloads right->high for the secondary compare and keeps left->high, the build keeps both. */
#include "common.h"

struct PackedKey {
    u32 low;
    u32 high;
};

/* Orders packed 64-bit keys by descending primary and ascending secondary fields. */
extern "C" s32 FUN_0034f784(const PackedKey *left, const PackedKey *right)
{
    s32 result = (right->high >> 17) - (left->high >> 17);
    if (result == 0) {
        u32 leftSecondary = (left->high << 15) | (left->low >> 17);
        u32 rightSecondary = (right->high << 15) | (right->low >> 17);
        result = (leftSecondary >> 17) - (rightSecondary >> 17);
    }
    return result;
}
