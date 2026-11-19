#include "common.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

extern "C" {

extern s32 FUN_0042d368(void *allocator);

/* Reports whether the allocator operation returned a nonnegative status. */
bool cecInitializeSupport(void)
{
    bool success = false;
    if ((s32)(FUN_0042d368(asdMemoryGetAllocatorC()) & 0x80000000) >= 0) {
        success = true;
    }
    return success;
}

} /* extern "C" */
