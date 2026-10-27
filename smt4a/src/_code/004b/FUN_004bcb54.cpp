#include "shard/Shard004B.h"

extern "C" s32 FUN_0018416c(u16 id);

/* Reset the record's current values to its conditionally scaled maxima. */
static void resetScaledValues(ScaledRecordValues *record)
{
    record->flags = 0;
    s16 maximum = record->maximum;
    if (FUN_0018416c(record->id)) {
        maximum = static_cast<s16>(maximum * 1.25f);
    }
    record->current = maximum;
    record->secondaryCurrent = record->secondaryMaximum;
}

/* Reset a record when it exists; returns 1 on success. */
extern "C" s32 FUN_004bcb54(ScaledRecordValues *record)
{
    if (record == NULL) {
        return 0;
    }
    resetScaledValues(record);
    return 1;
}
