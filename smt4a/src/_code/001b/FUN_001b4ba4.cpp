/* NON_MATCHING: instruction selection/order differs: retail add r2, r1, #0; compiler ldr r2, [r1, #8]. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern ScopedHalfwordState DAT_005b4028;

/* Saves the original halfword on first entry and applies the scoped value. */
void FUN_001b4ba4(u16 value)
{
    HalfwordTarget *target = DAT_005b4028.target;
    if (DAT_005b4028.depth == 0) {
        DAT_005b4028.previous = target->value;
    }
    ++DAT_005b4028.depth;
    target->value = value;
}

} /* extern "C" */
