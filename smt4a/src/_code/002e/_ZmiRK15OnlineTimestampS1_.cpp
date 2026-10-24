/* The interval between two online timestamps. */
#include "classes/OnlineTimestamp.h"

s64 operator-(const OnlineTimestamp &later, const OnlineTimestamp &earlier)
{
    return later.ticks - earlier.ticks;
}
