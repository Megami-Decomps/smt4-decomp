#include "gamedata/GameDataAccess_Shard004B.h"
#include "gamedata/GameSaveDataA.h"

extern "C" s32 unitHasRankingBonus(u16 id);

/* Apply the record's optional 25-percent bonus to its signed value. */
extern "C" s32 recordGetScaledMaximum(const SlotRecordA *record)
{
    if (record == NULL) {
        return 0;
    }
    s16 value = record->maxHp;
    if (unitHasRankingBonus(record->id)) {
        value = static_cast<s16>(value * 1.25f);
    }
    return value;
}
