#include "shard/W5_W5Match1_RecordKeys.h"
#include "classes/AllocatorState.h"

extern "C" {

/* Restores the saved halfword after leaving the outermost scope. */
void FUN_001b4e80(void)
{
    if (g_allocationAddressRanges.tagDepth != 0) {
        if (--g_allocationAddressRanges.tagDepth == 0) {
            g_allocationAddressRanges.usage->tag = g_allocationAddressRanges.tagPrevious;
        }
    }
}

} /* extern "C" */
