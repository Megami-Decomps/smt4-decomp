#include "nn/fnd/DateTime.h"

/* The hour of the day (0-23) of a DateTime. */
extern "C" s32 dateTimeGetHour(const nn::fnd::DateTime *dateTime)
{
    s32 millisecond = (s32)ll_sdiv(dateTime->milliseconds + DATE_TIME_EPOCH_OFFSET, DATE_TIME_MILLISECONDS_PER_DAY).remainder;
    return millisecond / 3600000 % 24;
}
