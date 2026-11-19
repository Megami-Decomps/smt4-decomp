#include "nn/fnd/DateTime.h"
#include "shard/W6_W6Match2_LongDivision.h"

/* The month (1-12) of a DateTime. */
extern "C" s32 nn_fnd_DateTime_GetMonth(const nn::fnd::DateTime *dateTime)
{
    s64 days = ll_sdiv(dateTime->milliseconds + DATE_TIME_EPOCH_OFFSET, DATE_TIME_MILLISECONDS_PER_DAY).quotient;
    s32 month;
    dateConvertDaysToCalendar(NULL, &month, NULL, (s32)(days - DATE_TIME_EPOCH_DAYS));
    return month;
}
