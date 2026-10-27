#include "shard/Shard004B.h"

extern "C" s32 unitHasRankingBonus(u16 id);

/* Clamp the current value between one and the conditionally scaled maximum. */
extern "C" s32 recordSetClampedCurrent(ScaledRecordValues *record, s32 value)
{
    if (record == NULL) {
        return 0;
    }
    s16 maximum = record->maximum;
    if (unitHasRankingBonus(record->id)) {
        maximum = static_cast<s16>(maximum * 1.25f);
    }
    if (value > maximum) {
        value = maximum;
    } else if (value < 1) {
        value = 1;
    }
    record->current = static_cast<s16>(value);
    return record->current;
}
