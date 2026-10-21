/* NON_MATCHING: compiler uses __aeabi_ldivmod for microseconds-to-seconds conversion; retail inlines signed constant-division multiplication. */
#include "common.h"

struct TimestampField {
    const char *name;
    const char *value;
};
struct TimestampFields {
    u8 unk00[0x18];
    TimestampField *fields;
    u32 count;
};
struct TimestampSource {
    TimestampFields *data;
};
struct TimestampDateTime {
    s64 seconds;
};

extern "C" {
s32 libc_strncmp(const char *first, const char *second, u32 length);
s64 libc_strtoll(const char *text, char **end, s32 base);
TimestampDateTime *nn_fnd_DateTime_DateTime_sub_object(TimestampDateTime *date,
    s32 year, s32 month, s32 day, s32 hour, s32 minute, s32 second, s32 millisecond);

// Interpret the NewSince field as a Unix timestamp and offset the SDK's 1970 epoch.
void dictionaryWasUpdatedSince(s64 *result, const TimestampSource *source)
{
    const char *value = NULL;
    TimestampFields *data = source->data;
    for (u32 index = 0; index < data->count; ++index) {
        if (libc_strncmp(data->fields[index].name, "NewSince", 0x40) == 0) {
            value = data->fields[index].value;
            break;
        }
    }
    s64 seconds = libc_strtoll(value, NULL, 10);
    TimestampDateTime epoch;
    TimestampDateTime *date = nn_fnd_DateTime_DateTime_sub_object(&epoch, 1970, 1, 1, 0, 0, 0, 0);
    // SDK time spans carry microseconds; DateTime arithmetic consumes whole seconds.
    s64 microseconds = seconds * 1000000;
    *result = date->seconds + microseconds / 1000000;
}
}
