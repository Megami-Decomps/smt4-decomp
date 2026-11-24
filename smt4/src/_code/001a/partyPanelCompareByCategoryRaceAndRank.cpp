/* NON_MATCHING: only the prologue differs: retail copies left to r5 before right to r4 and loads *left through r5; the build copies right first and loads *left through r0. */
#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" s32 comparePartyUnitsByRankRaceAndId(const s32 *left, const s32 *right);

/* Orders unit slots by their devils' race, then by rank; empty slots sort last. */
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
    StatBlock *first = gameGetUnitRecord(*left);
    StatBlock *second = gameGetUnitRecord(*right);
    const NkmBaseRecord *firstDevil = nkmBaseGetRecord(first->id);
    const NkmBaseRecord *secondDevil = nkmBaseGetRecord(second->id);
    difference = firstDevil->race - secondDevil->race;
    if (difference != 0) {
        return difference;
    }
    return comparePartyUnitsByRankRaceAndId(left, right);
}

// Sort unit slots by record key, race, and descending unit rank; empty slots sort last.
extern "C" s32 partyPanelCompareByCategoryRaceAndRank(const s32 *left, const s32 *right)
{
    s32 difference = 0;
    if (*left < 0) {
        if (*right >= 0) {
            difference = 1;
        }
    } else if (*right < 0) {
        difference = -1;
    } else {
        StatBlock *first = gameGetUnitRecord(*left);
        StatBlock *second = gameGetUnitRecord(*right);
        const NkmBaseRecord *firstRecord = (const NkmBaseRecord *)nkmBaseGetRecord(first->id);
        const NkmBaseRecord *secondRecord = (const NkmBaseRecord *)nkmBaseGetRecord(second->id);
        difference = firstRecord->category - secondRecord->category;
        if (difference == 0) {
            return compareUnitSlotsByRace(left, right);
        }
    }
    return difference;
}
