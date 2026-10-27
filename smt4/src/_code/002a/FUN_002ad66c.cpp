/* NON_MATCHING: year is now stored last (one `stm` with the first packed word, as in retail); remaining diff is register numbering of the result pointer and of the uninitialised bitfield bases (retail r6/r7/r8). */
#include "shard/W6_W6Match2_LongDivision.h"
#include "shard/W6_W6Match8_DateTimeValue.h"
#include "AsdSDK/Source/Sys/Save/AsdSaveHeader.h"

extern "C" {
__value_in_regs LongDivisionResult ll_sdiv(s64 dividend, s64 divisor);
void dateConvertDaysToCalendar(s32 *year, s32 *month, s32 *day, s32 epochDay);

// Split the SDK millisecond timestamp into calendar date, weekday and time of day.
SaveCalendarTime FUN_002ad66c(const DateTimeValue *value)
{
    LongDivisionResult divided = ll_sdiv((s64)((u64)value->milliseconds + 0x395F7CFC8400ULL), 86400000);
    s32 epochDay = (s32)divided.quotient - 730119;
    s32 dayMilliseconds = (s32)divided.remainder;
    s32 year, month, day;
    dateConvertDaysToCalendar(&year, &month, &day, epochDay);
    SaveCalendarTime calendar;
    calendar.month = month;
    calendar.day = day;
    calendar.weekday = ((epochDay + 6) % 7 + 7) % 7;
    calendar.hour = dayMilliseconds / 3600000;
    calendar.minute = (dayMilliseconds / 60000) % 60;
    calendar.second = (dayMilliseconds / 1000) % 60;
    calendar.millisecond = dayMilliseconds % 1000;
    calendar.year = year;
    return calendar;
}
}
