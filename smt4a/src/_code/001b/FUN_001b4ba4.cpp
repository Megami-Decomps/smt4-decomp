#include "shard/W5_W5Match1_RecordKeys.h"
#include "classes/AllocatorState.h"

extern "C" {

/* Saves the original halfword on first entry and applies the scoped value. */
void FUN_001b4ba4(u16 value)
{
    AllocatorStateA *state = &g_asdMemState;
    AllocationUsage *target = state->usage;
    if (g_asdMemState.tagDepth == 0) {
        g_asdMemState.tagPrevious = target->tag;
    }
    ++g_asdMemState.tagDepth;
    target->tag = value;
}

} /* extern "C" */
