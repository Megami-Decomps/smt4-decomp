/* NON_MATCHING: retail keeps the empty-slot checks as branches around a preloaded left/right pair and shares the zero result; ours folds the ternary into asr/add. */
#include "shard/W6_W6Match1_PartySlot.h"

struct PartySortDefinition { u8 unk00[2]; u8 rank; u8 unk03[6]; u8 category; };
extern "C" {
PartySlotA *gameGetSlotRecord(s32 index);
const PartySortDefinition *FUN_00184310(u32 id);
s32 FUN_002909f8(const s32 *left, const s32 *right);

// Order populated party slots by descending category and rank, then the shared tie breaker.
s32 FUN_002ce730(const s32 *left, const s32 *right)
{
    if (*left < 0)
        return *right < 0 ? 0 : 1;
    if (*right < 0)
        return -1;
    PartySlotA *a = gameGetSlotRecord(*left);
    PartySlotA *b = gameGetSlotRecord(*right);
    const PartySortDefinition *first = FUN_00184310(a->unk62);
    const PartySortDefinition *second = FUN_00184310(b->unk62);
    s32 difference = second->category - first->category;
    if (difference)
        return difference;
    if (*left < 0)
        return *right < 0 ? 0 : 1;
    if (*right < 0)
        return -1;
    a = gameGetSlotRecord(*left);
    b = gameGetSlotRecord(*right);
    first = FUN_00184310(a->unk62);
    second = FUN_00184310(b->unk62);
    difference = second->rank - first->rank;
    if (difference)
        return difference;
    return FUN_002909f8(left, right);
}
}
