#include "common.h"

extern "C" {

void itemSortCompareRankThenKey(u32 *a, u32 *b);
u32 gameGetSlotRecord(void);
s32 FUN_003df57c(u32 id, u32 flag);
s32 skillGetAdjustedCost(u32 owner, u32 id);

typedef struct Ref {
    /* 0x00 */ u32 id;
    /* 0x04 */ s32 kind;
} Ref;

/* Resolves both references (negative kind through FUN_003df57c, otherwise through skillGetAdjustedCost) and calls itemSortCompareRankThenKey when they resolve to the same value. */
void FUN_002b2748(Ref *a, Ref *b)
{
    s32 first;
    s32 second;
    u32 owner;
    s32 diff;

    if (a->kind < 0) {
        first = FUN_003df57c(a->id, 1);
    } else {
        owner = gameGetSlotRecord();
        first = skillGetAdjustedCost(owner, a->id);
    }
    if (b->kind < 0) {
        second = FUN_003df57c(b->id, 1);
    } else {
        owner = gameGetSlotRecord();
        second = skillGetAdjustedCost(owner, b->id);
    }
    diff = second - first;
    if (diff == 0) {
        itemSortCompareRankThenKey((u32 *)a, (u32 *)b);
        return;
    }
}

} /* extern "C" */
