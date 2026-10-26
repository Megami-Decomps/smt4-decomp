#include "common.h"

/* A packed key: 15-bit primary and secondary orderings in the high bits. */
struct PackedKey {
    u64 unk00 : 34;
    u64 secondary : 15;
    u64 primary : 15;
};

/* Orders packed 64-bit keys by descending primary and ascending secondary fields. */
extern "C" s32 packedKeyCompareByPrimaryThenSecondary(const PackedKey *left, const PackedKey *right)
{
    s32 difference = right->primary - left->primary;
    if (difference == 0) {
        difference = left->secondary - right->secondary;
    }
    return difference;
}
