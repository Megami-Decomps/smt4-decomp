#include "shard/Shard0034.h"
#include "gamedata/SaveSlotRecord.h"
#include "code/Code004b_Smt4a.h"

extern "C" {

extern s32 FUN_003df57c(u32 id, s32 flag);
extern void itemSortCompareByCategoryAndId(KindRef *a, KindRef *b);

/* If the two references rate the same, hands them to itemSortCompareByCategoryAndId. */
void kindRefTieBreak(KindRef *a, KindRef *b)
{
    s32 rankA;
    s32 rankB;
    s32 diff;

    if (a->kind < 0) {
        rankA = FUN_003df57c(a->id, 1);
    } else {
        rankA = skillGetAdjustedCost(gameGetSlotRecord(a->kind), a->id);
    }
    if (b->kind < 0) {
        rankB = FUN_003df57c(b->id, 1);
    } else {
        rankB = skillGetAdjustedCost(gameGetSlotRecord(b->kind), b->id);
    }
    diff = rankA - rankB;
    if (diff == 0) {
        itemSortCompareByCategoryAndId(a, b);
    }
}

} /* extern "C" */
