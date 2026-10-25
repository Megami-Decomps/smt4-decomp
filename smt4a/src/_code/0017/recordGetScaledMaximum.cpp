#include "shard/Shard004B.h"
#include "shard/recordGetScaledMaximum.h"

extern "C" s32 FUN_0018416c(u16 id);

/* Apply the record's optional 25-percent bonus to its signed value. */
extern "C" s32 recordGetScaledMaximum(const ScaledRecordValues *record)
{
    if (record == NULL) {
        return 0;
    }
    s16 value = record->maximum;
    if (FUN_0018416c(record->id)) {
        value = static_cast<s16>(value * 1.25f);
    }
    return value;
}
