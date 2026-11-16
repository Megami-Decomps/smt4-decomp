#include "shard/Shard0049.h"

extern "C" {

extern u16 recordGetCompareValue(u16 *p);

/* Difference of recordGetCompareValue(b) and recordGetCompareValue(a). */
s32 halfDifference(u16 *a, u16 *b)
{
    s32 first = recordGetCompareValue(a);
    s32 second = recordGetCompareValue(b);

    return second - first;
}

} /* extern "C" */
