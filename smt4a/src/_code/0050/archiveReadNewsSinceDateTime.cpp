/* NON_MATCHING: lookup/carry scheduling and generic 64-bit limb-multiply terms fold differently, with a different spill layout; candidate -O2. */
#include "shard/W6_W6Match8_ArchiveValues.h"
#include "shard/W6_W6Match8_DateTimeValue.h"

// High 64 bits of a signed 128-bit product, formed from 32-bit limbs.
static inline s64 multiplyHighSigned(s64 first, s64 second)
{
    u32 firstLow = (u32)first;
    s64 firstHigh = first >> 32;
    u32 secondLow = (u32)second;
    s64 secondHigh = second >> 32;
    s64 lowerCross = (s64)(((u64)firstLow * secondLow) >> 32) +
                     firstHigh * secondLow;
    s64 upperCross = (s64)firstLow * secondHigh + (u32)lowerCross;
    return firstHigh * secondHigh + (lowerCross >> 32) + (upperCross >> 32);
}

extern "C" {
s32 libc_strncmp(const char *first, const char *second, u32 length);
s64 libc_strtoll(const char *text, char **end, s32 base);
DateTimeValue *nn_fnd_DateTime_DateTime_sub_object(DateTimeValue *value,
    s32 year, s32 month, s32 day, s32 hour, s32 minute, s32 second, s32 millisecond);

void archiveReadNewsSinceDateTime(DateTimeValue *output, const Archive *source)
{
    const ArchiveAttributeTable *table = source->table;
    u32 count = table->count;
    const char *text = NULL;
    for (u32 i = 0; i < count; ++i) {
        if (libc_strncmp((const char *)table->entries[i].name, "NewSince", 64) == 0) {
            text = (const char *)table->entries[i].value;
            break;
        }
    }
    s64 milliseconds = libc_strtoll(text, NULL, 10);
    DateTimeValue epoch;
    DateTimeValue *base = nn_fnd_DateTime_DateTime_sub_object(&epoch, 1970, 1, 1, 0, 0, 0, 0);
    // The SDK timespan stores nanoseconds and converts back to date-time milliseconds.
    s64 nanoseconds = (s64)((u64)milliseconds * 1000000ULL);
    // Reciprocal multiplication implements the SDK's truncating division by 1,000,000.
    s64 span = (multiplyHighSigned(nanoseconds, 0x431bde82d7b634dbLL) >> 18) +
               (s64)((u64)nanoseconds >> 63);
    output->milliseconds = (s64)((u64)base->milliseconds + (u64)span);
}
}
