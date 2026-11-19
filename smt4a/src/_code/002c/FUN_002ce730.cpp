/* NON_MATCHING: only the prologue differs: retail copies left to r5 before right to r4 and loads *left through r5; the build copies right first and loads *left through r0 (as smt4 FUN_002072f0). */
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/NkmBaseRecordA.h"

extern "C" {
s32 FUN_002909f8(const s32 *left, const s32 *right);

/* Valid slots before empty ones, by descending race, then the shared tie breaker. */
static inline s32 compareRaceThenRank(const s32 *left, const s32 *right)
{
    s32 result;
    if (*left < 0) {
        if (*right < 0) {
            return 0;
        }
        return 1;
    } else if (*right < 0) {
        result = -1;
    } else {
        SlotRecordA *first = gameGetSlotRecord(*left);
        SlotRecordA *second = gameGetSlotRecord(*right);
        const NkmBaseRecordA *firstDemon = nkmBaseGetRecord(first->id);
        const NkmBaseRecordA *secondDemon = nkmBaseGetRecord(second->id);
        result = secondDemon->race - firstDemon->race;
        if (result == 0) {
            return FUN_002909f8(left, right);
        }
    }
    return result;
}

// Order populated party slots by descending category, then by race and the shared tie breaker.
s32 FUN_002ce730(const s32 *left, const s32 *right)
{
    s32 order = 0;
    if (*left < 0) {
        if (*right >= 0) {
            order = 1;
        }
    } else if (*right < 0) {
        order = -1;
    } else {
        SlotRecordA *first = gameGetSlotRecord(*left);
        SlotRecordA *second = gameGetSlotRecord(*right);
        const NkmBaseRecordA *firstDemon = nkmBaseGetRecord(first->id);
        const NkmBaseRecordA *secondDemon = nkmBaseGetRecord(second->id);
        order = (s32)secondDemon->category - firstDemon->category;
        if (order == 0) {
            return compareRaceThenRank(left, right);
        }
    }
    return order;
}
}
