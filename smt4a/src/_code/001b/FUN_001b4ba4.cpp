#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern ScopedHalfwordState g_allocationAddressRanges;

/* Saves the original halfword on first entry and applies the scoped value. */
void FUN_001b4ba4(u16 value)
{
    ScopedHalfwordState *state = &g_allocationAddressRanges;
    HalfwordTarget *target = state->target;
    if (g_allocationAddressRanges.depth == 0) {
        g_allocationAddressRanges.previous = target->value;
    }
    ++g_allocationAddressRanges.depth;
    target->value = value;
}

} /* extern "C" */
