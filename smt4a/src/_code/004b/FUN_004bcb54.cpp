/* NON_MATCHING: Scaled-value reset is complete; the flags-zero store and preserved record pointer use different registers/order in the prologue. */
#include "shard/Shard004B.h"

extern "C" s32 FUN_0018416c(u16 id);

/* Reset the record's current values to its conditionally scaled maxima. */
extern "C" s32 FUN_004bcb54(ScaledRecordValues *record)
{
    if (record == NULL) {
        return 0;
    }
    record->flags = 0;
    s16 maximum = record->maximum;
    if (FUN_0018416c(record->id)) {
        maximum = static_cast<s16>(maximum * 1.25f);
    }
    record->current = maximum;
    record->secondaryCurrent = record->secondaryMaximum;
    return 1;
}
