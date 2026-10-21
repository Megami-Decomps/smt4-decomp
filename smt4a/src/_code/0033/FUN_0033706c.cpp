/* NON_MATCHING: compiler predicates the secondary-key comparison instead of branching. */
#include "common.h"

namespace {
struct SortEntry {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ f32 priority;
    /* 0x1c */ u16 first;
    /* 0x1e */ u16 second;
};
}

/* Sorts by ascending float priority, then descending halfword keys. */
extern "C" s32 FUN_0033706c(const SortEntry *left, const SortEntry *right)
{
    if (left->priority > right->priority) {
        return 1;
    }
    if (left->priority < right->priority) {
        return -1;
    }
    s32 difference = right->first - left->first;
    if (difference != 0) {
        return difference;
    }
    return right->second - left->second;
}
