#include "shard/W5_W5Match1_RecordKeys.h"
#include "classes/AllocatorState.h"

extern "C" {

/* Restores the saved halfword after leaving the outermost scope. */
void FUN_00152ea0(void)
{
    if (DAT_00465120.tagDepth != 0) {
        if (--DAT_00465120.tagDepth == 0) {
            DAT_00465120.usage->tag = DAT_00465120.tagPrevious;
        }
    }
}

} /* extern "C" */
