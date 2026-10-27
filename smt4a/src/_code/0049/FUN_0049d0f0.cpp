#include "common.h"

struct RankedEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 flags;
};

extern "C" {

s32 FUN_0049c9a0(const RankedEntry *entry);

static s32 compareRanks(const RankedEntry *left, const RankedEntry *right)
{
    s32 leftRank = FUN_0049c9a0(left);
    s32 rightRank = FUN_0049c9a0(right);
    return leftRank - rightRank;
}

/* Orders entries by their priority flag and then by their lookup rank. */
s32 FUN_0049d0f0(const RankedEntry *left, const RankedEntry *right)
{
    u32 leftFlag = left->flags & 1;
    u32 rightFlag = right->flags & 1;
    if ((leftFlag & rightFlag) == 0) {
        if (leftFlag)
            return 1;
        if (rightFlag)
            return -1;
    }
    return compareRanks(left, right);
}

}
