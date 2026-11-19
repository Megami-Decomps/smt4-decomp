#include "nn/fnd/DateTime.h"

/* The second of the minute (0-59) of a DateTime. */
extern "C" s32 dateTimeGetSecond(const nn::fnd::DateTime *dateTime)
{
    return dateTimeMillisecondOfDay(dateTime) / 1000 % 60;
}
