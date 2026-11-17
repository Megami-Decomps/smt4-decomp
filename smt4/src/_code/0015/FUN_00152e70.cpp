#include "shard/W5_W5Match1_RecordKeys.h"
#include "classes/AllocatorState.h"

extern "C" {

/* Saves the original halfword on first entry and applies the scoped value. */
void FUN_00152e70(u16 value)
{
    AllocatorState *state = &DAT_00465120;
    AllocationUsage *target = state->usage;
    if (DAT_00465120.tagDepth == 0) {
        DAT_00465120.tagPrevious = target->tag;
    }
    ++DAT_00465120.tagDepth;
    target->tag = value;
}

} /* extern "C" */
