/* NON_MATCHING: retail rewrites both words of the packed value after every field (a 64-bit read-modify-write) and schedules the year insert differently; these bitfields store only the changed word. */
#include "common.h"

/* nn::fnd::DateTime: milliseconds since 2000-01-01. */
struct NnDateTime {
    s64 value;
};

/* A date and time packed into 64 bits. */
struct PackedDateTime {
    u64 second : 6;
    u64 minute : 6;
    u64 hour : 5;
    u64 day : 5;
    u64 month : 4;
    u64 year : 14;
    u64 unused : 24;
};

extern "C" {
void FUN_0030fc80(NnDateTime *now);
s32 nn_fnd_DateTime_GetYear(const NnDateTime *dateTime);
s32 nn_fnd_DateTime_GetMonth(const NnDateTime *dateTime);
s32 nn_fnd_DateTime_GetDay(const NnDateTime *dateTime);
s32 FUN_005020c0(const NnDateTime *dateTime);
s32 FUN_005021d8(const NnDateTime *dateTime);
s32 FUN_00502244(const NnDateTime *dateTime);

/* Stores the current date and time into `packed`. */
void FUN_00303088(PackedDateTime *packed)
{
    NnDateTime now;

    FUN_0030fc80(&now);
    packed->year = nn_fnd_DateTime_GetYear(&now);
    packed->month = nn_fnd_DateTime_GetMonth(&now);
    packed->day = nn_fnd_DateTime_GetDay(&now);
    packed->hour = FUN_005020c0(&now);
    packed->minute = FUN_005021d8(&now);
    packed->second = FUN_00502244(&now);
}

} /* extern "C" */
