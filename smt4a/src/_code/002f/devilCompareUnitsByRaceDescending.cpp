#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/NkmBaseRecordA.h"

extern "C" {
s32 FUN_002909f8(const s32 *left, const s32 *right);

/* Sort valid party slots by descending race, using FUN_002909f8 as a tie-breaker. */
s32 devilCompareUnitsByRaceDescending(const s32 *left, const s32 *right)
{
    s32 result;
    if (*left < 0) {
        if (*right < 0)
            result = 0;
        else
            result = 1;
    } else if (*right < 0) {
        result = -1;
    } else {
        SlotRecordA *leftUnit = gameGetSlotRecord(*left);
        SlotRecordA *rightUnit = gameGetSlotRecord(*right);
        NkmBaseRecordA *leftDevil = nkmBaseGetRecord(leftUnit->id);
        NkmBaseRecordA *rightDevil = nkmBaseGetRecord(rightUnit->id);
        result = rightDevil->race - leftDevil->race;
        if (result == 0)
            return FUN_002909f8(left, right);
    }
    return result;
}
}
