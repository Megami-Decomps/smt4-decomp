/* NON_MATCHING: retail keeps the empty-slot checks as branches around a preloaded left/right pair and shares the zero result; ours folds the ternary into asr/add. */
#include "shard/W6_W6Match1_PartySlot.h"
#include "gamedata/DevilRecordA.h"

extern "C" {
PartySlotA *gameGetSlotRecord(s32 index);
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
    const DevilRecordA *first = devilGetRecord(a->unk62);
    const DevilRecordA *second = devilGetRecord(b->unk62);
    s32 difference = second->category - first->category;
    if (difference)
        return difference;
    if (*left < 0)
        return *right < 0 ? 0 : 1;
    if (*right < 0)
        return -1;
    a = gameGetSlotRecord(*left);
    b = gameGetSlotRecord(*right);
    first = devilGetRecord(a->unk62);
    second = devilGetRecord(b->unk62);
    difference = second->race - first->race;
    if (difference)
        return difference;
    return FUN_002909f8(left, right);
}
}
