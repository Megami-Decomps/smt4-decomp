#ifndef UTIL_VALUELIMITS_H
#define UTIL_VALUELIMITS_H

#include "common.h"

/* The larger of `value` and `minimum` (unsigned compare). */
static __inline u32 atLeastU32(u32 value, u32 minimum)
{
    return value > minimum ? value : minimum;
}

#endif
