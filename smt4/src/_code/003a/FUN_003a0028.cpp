#include "common.h"

struct RankedEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 flags;
};

extern "C" {

s32 aocEntryGetSortOrder(const RankedEntry *entry);

static s32 compareLookupRank(const RankedEntry *left, const RankedEntry *right)
{
    s32 leftRank = aocEntryGetSortOrder(left);
    s32 rightRank = aocEntryGetSortOrder(right);
    return leftRank - rightRank;
}

/* Orders entries by their priority flag and then by their lookup rank. */
s32 FUN_003a0028(const RankedEntry *left, const RankedEntry *right)
{
    u32 leftFlag = left->flags & 1;
    u32 rightFlag = right->flags & 1;
    if ((leftFlag & rightFlag) == 0) {
        if (rightFlag)
            return 1;
        if (leftFlag)
            return -1;
    }
    return compareLookupRank(left, right);
}

}
