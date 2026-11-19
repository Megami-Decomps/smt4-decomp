#include "nn/fnd/DateTime.h"
#include "shard/W6_W6Match2_LongDivision.h"

/* The year of a DateTime. */
extern "C" s32 nn_fnd_DateTime_GetYear(const nn::fnd::DateTime *dateTime)
{
    s64 days = ll_sdiv(dateTime->milliseconds + DATE_TIME_EPOCH_OFFSET, DATE_TIME_MILLISECONDS_PER_DAY).quotient;
    s32 year;
    dateConvertDaysToCalendar(&year, NULL, NULL, (s32)(days - DATE_TIME_EPOCH_DAYS));
    return year;
}
