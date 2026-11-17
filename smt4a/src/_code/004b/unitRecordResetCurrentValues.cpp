#include "gamedata/GameSaveDataA.h"

extern "C" s32 unitHasRankingBonus(u16 id);

/* Reset the record's current values to its conditionally scaled maxima. */
static void resetScaledValues(SlotRecordA *record)
{
    record->ailments = 0;
    s16 maximum = record->maxHp;
    if (unitHasRankingBonus(record->id)) {
        maximum = static_cast<s16>(maximum * 1.25f);
    }
    record->hp = maximum;
    record->mp = record->maxMp;
}

/* Reset a record when it exists; returns 1 on success. */
extern "C" s32 unitRecordResetCurrentValues(SlotRecordA *record)
{
    if (record == NULL) {
        return 0;
    }
    resetScaledValues(record);
    return 1;
}
