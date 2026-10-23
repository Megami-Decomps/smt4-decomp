/* NON_MATCHING: SDK nanosecond-to-millisecond division lowers to a runtime call, not retail inline arithmetic. */
#include "shard/W6_W6Match8_ArchiveValues.h"
#include "shard/W6_W6Match8_DateTimeValue.h"

extern "C" {
s32 libc_strncmp(const char *first, const char *second, u32 length);
s64 libc_strtoll(const char *text, char **end, s32 base);
DateTimeValue *nn_fnd_DateTime_DateTime_sub_object(DateTimeValue *value,
    s32 year, s32 month, s32 day, s32 hour, s32 minute, s32 second, s32 millisecond);

void FUN_003df648(DateTimeValue *output, const Archive *source)
{
    const ArchiveAttributeTable *table = source->table;
    const char *text = NULL;
    for (u32 index = 0; index < table->count; ++index) {
        if (libc_strncmp(reinterpret_cast<const char *>(table->entries[index].name), "NewSince", 64) == 0) {
            text = reinterpret_cast<const char *>(table->entries[index].value);
            break;
        }
    }
    s64 milliseconds = libc_strtoll(text, NULL, 10);
    DateTimeValue epoch;
    DateTimeValue *base = nn_fnd_DateTime_DateTime_sub_object(&epoch, 1970, 1, 1, 0, 0, 0, 0);
    // The SDK timespan stores nanoseconds, while DateTime uses milliseconds.
    s64 nanoseconds = static_cast<s64>(static_cast<u64>(milliseconds) * 1000000ULL);
    output->milliseconds = static_cast<s64>(static_cast<u64>(base->milliseconds) +
                                           static_cast<u64>(nanoseconds / 1000000LL));
}
}
