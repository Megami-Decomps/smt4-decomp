#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern ScopedHalfwordState g_allocationAddressRanges;

/* Restores the saved halfword after leaving the outermost scope. */
void FUN_001b4e80(void)
{
    if (g_allocationAddressRanges.depth != 0) {
        if (--g_allocationAddressRanges.depth == 0) {
            g_allocationAddressRanges.target->value = g_allocationAddressRanges.previous;
        }
    }
}

} /* extern "C" */
