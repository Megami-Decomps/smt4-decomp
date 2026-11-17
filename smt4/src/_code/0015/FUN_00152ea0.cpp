#include "shard/W5_W5Match1_RecordKeys.h"
#include "classes/AllocatorState.h"

extern "C" {

/* Restores the saved halfword after leaving the outermost scope. */
void FUN_00152ea0(void)
{
    if (g_asdMemState.tagDepth != 0) {
        if (--g_asdMemState.tagDepth == 0) {
            g_asdMemState.usage->tag = g_asdMemState.tagPrevious;
        }
    }
}

} /* extern "C" */
