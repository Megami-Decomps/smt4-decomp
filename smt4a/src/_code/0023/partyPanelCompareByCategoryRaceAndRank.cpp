/* NON_MATCHING: only the entry schedule differs: retail copies the left pointer before the right and reads the left slot through the copy. */
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/NkmBaseRecordA.h"

extern "C" {
s32 FUN_0020e83c(const s32 *left, const s32 *right);

/* Inlines the race and rank tie-breaker used by the stock's race sort (FUN_00241874). */
static __inline s32 compareUnitSlotsByRace(const s32 *left, const s32 *right)
{
    s32 difference = 0;
    if (*left < 0) {
        if (*right >= 0) {
            difference = 1;
        }
        return difference;
    }
    if (*right < 0) {
        return -1;
    }
    SlotRecordA *first = gameGetSlotRecord(*left);
    SlotRecordA *second = gameGetSlotRecord(*right);
    const NkmBaseRecordA *firstDevil = nkmBaseGetRecord(first->id);
    const NkmBaseRecordA *secondDevil = nkmBaseGetRecord(second->id);
    difference = firstDevil->race - secondDevil->race;
    if (difference != 0) {
        return difference;
    }
    return FUN_0020e83c(left, right);
}

/* Sorts unit slots by category, then race and rank, putting the empty slots last. */
s32 partyPanelCompareByCategoryRaceAndRank(const s32 *left, const s32 *right)
{
    s32 difference = 0;
    if (*left < 0) {
        if (*right >= 0) {
            difference = 1;
        }
    } else if (*right < 0) {
        difference = -1;
    } else {
        SlotRecordA *first = gameGetSlotRecord(*left);
        SlotRecordA *second = gameGetSlotRecord(*right);
        const NkmBaseRecordA *firstDevil = nkmBaseGetRecord(first->id);
        const NkmBaseRecordA *secondDevil = nkmBaseGetRecord(second->id);
        difference = firstDevil->category - secondDevil->category;
        if (difference == 0) {
            return compareUnitSlotsByRace(left, right);
        }
    }
    return difference;
}

} /* extern "C" */
