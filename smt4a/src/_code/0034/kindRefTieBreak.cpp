#include "shard/Shard0034.h"

extern "C" {

extern s32 FUN_003df57c(u32 id, s32 flag);
extern u32 gameGetSlotRecord(s32 index);
extern s32 skillGetAdjustedCost(u32 data, u32 id);
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
