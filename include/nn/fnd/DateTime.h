#ifndef NN_FND_DATETIME_H
#define NN_FND_DATETIME_H

#include "common.h"
#include "shard/W6_W6Match2_LongDivision.h"

namespace nn {
namespace fnd {

class DateTime {
public:
    DateTime() : milliseconds(0) {}
    DateTime(s32 year, s32 month, s32 day, s32 hour, s32 minute, s32 second, s32 millisecond);

    s64 milliseconds;
};
typedef char DateTimeSize[sizeof(DateTime) == 8 ? 1 : -1];

} // namespace fnd
} // namespace nn

/* DateTime counts milliseconds from 2000-01-01; the calendar maths counts from 0001-01-01. */
#define DATE_TIME_EPOCH_OFFSET 63082281600000LL /* milliseconds from 0001-01-01 to 2000-01-01 */
#define DATE_TIME_EPOCH_DAYS 730119             /* days from 0001-01-01 to 2000-01-01 */
#define DATE_TIME_MILLISECONDS_PER_DAY 86400000

/* The milliseconds since midnight of a DateTime (the minute and second getters share it; the hour getter writes it out). */
static __inline s32 dateTimeMillisecondOfDay(const nn::fnd::DateTime *dateTime)
{
    return (s32)ll_sdiv(dateTime->milliseconds + DATE_TIME_EPOCH_OFFSET, DATE_TIME_MILLISECONDS_PER_DAY).remainder;
}

/* Splits a day count (from 2000-01-01) into year, month and day; a NULL output is skipped. */
extern "C" void dateConvertDaysToCalendar(s32 *yearOut, s32 *monthOut, s32 *dayOut, s32 days);

#endif
