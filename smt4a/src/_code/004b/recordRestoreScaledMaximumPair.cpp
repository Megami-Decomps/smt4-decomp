#include "shard/Shard004B.h"

extern "C" s32 FUN_0018416c(u16 id);

// Restore the current pair from its maxima, applying the conditional 25% bonus.
extern "C" s32 recordRestoreScaledMaximumPair(ScaledRecordValues *record)
{
    if (record == NULL)
        return 0;
    s16 maximum = record->maximum;
    if (FUN_0018416c(record->id))
        maximum = (s16)(s32)(maximum * 1.25f);
    record->current = maximum;
    record->secondaryCurrent = record->secondaryMaximum;
    return 1;
}
