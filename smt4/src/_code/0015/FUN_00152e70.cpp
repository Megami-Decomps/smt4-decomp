/* NON_MATCHING: instruction selection/order differs: retail add r2, r1, #0; compiler ldr r2, [r1, #8]. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern ScopedHalfwordState DAT_00465120;

/* Saves the original halfword on first entry and applies the scoped value. */
void FUN_00152e70(u16 value)
{
    HalfwordTarget *target = DAT_00465120.target;
    if (DAT_00465120.depth == 0) {
        DAT_00465120.previous = target->value;
    }
    ++DAT_00465120.depth;
    target->value = value;
}

} /* extern "C" */
