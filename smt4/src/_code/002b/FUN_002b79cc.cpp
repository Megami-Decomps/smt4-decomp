/* NON_MATCHING: swap-loop induction transformations and work-stack register allocation differ; -O2 or -Ospace removes the loop bloat. */
#include "common.h"

namespace {
typedef s32 (*SortCompare)(const void *, const void *);

// Swap cursor lvalues in place, restoring their original positions afterward.
#define SWAP_SORT_ELEMENTS(left, right, width) do { \
    u32 remaining = (width); \
    if (((reinterpret_cast<u32>(left) | (width)) & 3) != 0) { \
        do { \
            u8 value = *(left); \
            *(left)++ = *(right); \
            *(right)++ = value; \
        } while (--remaining != 0); \
    } else { \
        do { \
            u32 value = *reinterpret_cast<u32 *>(left); \
            *reinterpret_cast<u32 *>(left) = *reinterpret_cast<u32 *>(right); \
            (left) += 4; \
            *reinterpret_cast<u32 *>(right) = value; \
            (right) += 4; \
            remaining -= 4; \
        } while (remaining != 0); \
    } \
    (left) -= (width); \
    (right) -= (width); \
} while (0)
}

extern "C" {
// Partition large ranges for the caller's final small-range sort, using a bounded work stack.
void FUN_002b79cc(void *base, s32 count, u32 size, SortCompare compare)
{
    u8 *pendingBases[32];
    s32 pendingCounts[32];
    s32 pending = 1;
    pendingBases[0] = static_cast<u8 *>(base);
    pendingCounts[0] = count;
    while (pending != 0) {
        --pending;
        u8 *first = pendingBases[pending];
        s32 length = pendingCounts[pending];
        for (;;) {
            u32 middleOffset = size * (length >> 1);
            u8 *middle = first + middleOffset;
            u8 *last = middle + middleOffset;
            if ((length & 1) == 0)
                last -= size;
            if (compare(first, middle) > 0)
                SWAP_SORT_ELEMENTS(first, middle, size);
            if (compare(middle, last) > 0) {
                if (compare(first, last) > 0)
                    SWAP_SORT_ELEMENTS(first, last, size);
                SWAP_SORT_ELEMENTS(middle, last, size);
            }
            last -= size;
            SWAP_SORT_ELEMENTS(middle, last, size);
            u8 *pivot = last;
            u8 *left = first;
            u8 *right = last;
            for (;;) {
                do { left += size; } while (compare(left, pivot) < 0);
                do { right -= size; } while (compare(right, pivot) > 0);
                if (right <= left)
                    break;
                SWAP_SORT_ELEMENTS(left, right, size);
            }
            SWAP_SORT_ELEMENTS(left, pivot, size);
            s32 leftCount = static_cast<u32>(left - first) / size - 1;
            s32 rightCount = length - leftCount - 1;
            if (leftCount > rightCount) {
                if (rightCount >= 11) {
                    pendingBases[pending] = first;
                    pendingCounts[pending++] = leftCount;
                    first = left;
                    length = rightCount;
                } else if (leftCount >= 11) {
                    length = leftCount;
                } else {
                    break;
                }
            } else {
                if (leftCount >= 11) {
                    pendingBases[pending] = left;
                    pendingCounts[pending++] = rightCount;
                    length = leftCount;
                } else if (rightCount >= 11) {
                    first = left;
                    length = rightCount;
                } else {
                    break;
                }
            }
        }
    }
}
}

#undef SWAP_SORT_ELEMENTS
