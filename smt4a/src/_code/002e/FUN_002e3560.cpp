/* NON_MATCHING: retail divides by ten using a shift/add routine; armcc emits reciprocal multiplication. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Divides an unsigned word by ten, returning quotient and remainder in registers. */
__value_in_regs UnsignedDivisionResult FUN_002e3560(u32 value)
{
    UnsignedDivisionResult result;
    result.quotient = value / 10;
    result.remainder = value % 10;
    return result;
}

} /* extern "C" */
