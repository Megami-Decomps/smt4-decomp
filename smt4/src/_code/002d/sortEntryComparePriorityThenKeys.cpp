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
extern "C" s32 sortEntryComparePriorityThenKeys(const SortEntry *left, const SortEntry *right)
{
    s32 result;

    if (left->priority > right->priority) {
        result = 1;
    } else if (left->priority < right->priority) {
        result = -1;
    } else {
        result = right->first - left->first;
        if (result == 0) {
            result = right->second - left->second;
        }
    }
    return result;
}
