#include "nn/fnd/DateTime.h"

/* The minute of the hour (0-59) of a DateTime. */
extern "C" s32 dateTimeGetMinute(const nn::fnd::DateTime *dateTime)
{
    return dateTimeMillisecondOfDay(dateTime) / 60000 % 60;
}
