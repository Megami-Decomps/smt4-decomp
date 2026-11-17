#include "shard/W5_W5Match1_RecordKeys.h"
#include "classes/AllocatorState.h"

extern "C" {

/* Saves the original halfword on first entry and applies the scoped value. */
void FUN_00152e70(u16 value)
{
    AllocatorState *state = &g_asdMemState;
    AllocationUsage *target = state->usage;
    if (g_asdMemState.tagDepth == 0) {
        g_asdMemState.tagPrevious = target->tag;
    }
    ++g_asdMemState.tagDepth;
    target->tag = value;
}

} /* extern "C" */
