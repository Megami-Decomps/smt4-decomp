#include "gamedata/nkm/NkmGrowEvent.h"
#include "gamedata/GameSaveDataA.h"

extern "C" s32 unitHasRankingBonus(u16 id);

// Restore the current pair from its maxima, applying the conditional 25% bonus.
extern "C" s32 recordRestoreScaledMaximumPair(SlotRecordA *record)
{
    if (record == NULL)
        return 0;
    s16 maximum = record->maxHp;
    if (unitHasRankingBonus(record->id))
        maximum = (s16)(s32)(maximum * 1.25f);
    record->hp = maximum;
    record->mp = record->maxMp;
    return 1;
}
