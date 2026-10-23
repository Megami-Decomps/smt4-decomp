/* NON_MATCHING: retail inlines constant signed 64-bit division; current unit calls __aeabi_ldivmod. */
#include "shard/W6_W6Match8_DateTimeValue.h"

extern "C" {
s32 FUN_00439690(s64 *timestamp);
DateTimeValue *nn_fnd_DateTime_DateTime_sub_object(DateTimeValue *, s32 year, s32 month, s32 day,
                                               s32 hour, s32 minute, s32 second, s32 millisecond);

// Read the service's Unix timestamp and express it in the engine's DateTime epoch.
s32 FUN_00428104(void *, DateTimeValue *output)
{
    s64 timestamp;
    s32 result = FUN_00439690(&timestamp);
    if (result >= 0) {
        DateTimeValue epoch;
        DateTimeValue *base = nn_fnd_DateTime_DateTime_sub_object(&epoch, 1970, 1, 1, 0, 0, 0, 0);
        // TimeSpan stores nanoseconds, while DateTime stores milliseconds.
        s64 nanoseconds = timestamp * 1000000;
        output->milliseconds = base->milliseconds + nanoseconds / 1000000;
        return 0;
    }
    return result;
}
}
