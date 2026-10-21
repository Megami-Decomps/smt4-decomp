/* NON_MATCHING: instruction selection/order differs: retail and r0, r0, #-2147483648; compiler no equivalent instruction. */
#include "common.h"

extern "C" {

extern void *asdMemoryGetAllocatorC(void);
extern s32 FUN_0042d368(void *allocator);

/* Reports whether the allocator operation returned a nonnegative status. */
bool FUN_0028022c(void)
{
    bool success = false;
    if (FUN_0042d368(asdMemoryGetAllocatorC()) >= 0) {
        success = true;
    }
    return success;
}

} /* extern "C" */
