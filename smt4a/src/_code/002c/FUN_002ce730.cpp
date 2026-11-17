/* NON_MATCHING: retail keeps the empty-slot checks as branches around a preloaded left/right pair and shares the zero result; ours folds the ternary into asr/add. */
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/NkmBaseRecordA.h"

extern "C" {
s32 FUN_002909f8(const s32 *left, const s32 *right);

// Order populated party slots by descending category and rank, then the shared tie breaker.
s32 FUN_002ce730(const s32 *left, const s32 *right)
{
    if (*left < 0)
        return *right < 0 ? 0 : 1;
    if (*right < 0)
        return -1;
    SlotRecordA *a = gameGetSlotRecord(*left);
    SlotRecordA *b = gameGetSlotRecord(*right);
    const NkmBaseRecordA *first = nkmBaseGetRecord(a->id);
    const NkmBaseRecordA *second = nkmBaseGetRecord(b->id);
    s32 difference = second->category - first->category;
    if (difference)
        return difference;
    if (*left < 0)
        return *right < 0 ? 0 : 1;
    if (*right < 0)
        return -1;
    a = gameGetSlotRecord(*left);
    b = gameGetSlotRecord(*right);
    first = nkmBaseGetRecord(a->id);
    second = nkmBaseGetRecord(b->id);
    difference = second->race - first->race;
    if (difference)
        return difference;
    return FUN_002909f8(left, right);
}
}
