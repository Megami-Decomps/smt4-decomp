#include "common.h"
#include "gamedata/SaveSlotRecord.h"
#include "code/Code004b_Smt4a.h"

extern "C" {

void itemSortCompareRankThenKey(u32 *a, u32 *b);
s32 skillGetCostWithRankReduction(u32 id, u32 flag);

typedef struct Ref {
    /* 0x00 */ u32 id;
    /* 0x04 */ s32 kind;
} Ref;

/* Resolves both references (negative kind through skillGetCostWithRankReduction, otherwise through skillGetAdjustedCost) and calls itemSortCompareRankThenKey when they resolve to the same value. */
void FUN_002b2748(Ref *a, Ref *b)
{
    s32 first;
    s32 second;
    SlotRecordA *owner;
    s32 diff;

    if (a->kind < 0) {
        first = skillGetCostWithRankReduction(a->id, 1);
    } else {
        owner = gameGetSlotRecord(a->kind);
        first = skillGetAdjustedCost(owner, a->id);
    }
    if (b->kind < 0) {
        second = skillGetCostWithRankReduction(b->id, 1);
    } else {
        owner = gameGetSlotRecord(b->kind);
        second = skillGetAdjustedCost(owner, b->id);
    }
    diff = second - first;
    if (diff == 0) {
        itemSortCompareRankThenKey((u32 *)a, (u32 *)b);
        return;
    }
}

} /* extern "C" */
