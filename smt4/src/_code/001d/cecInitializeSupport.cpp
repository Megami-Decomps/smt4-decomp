#include "common.h"

extern "C" {

extern void *asdMemoryGetAllocatorC(void);
extern s32 FUN_0035777c(void *allocator);

/* Reports whether the allocator operation returned a nonnegative status. */
bool cecInitializeSupport(void)
{
    bool success = false;
    s32 failure = FUN_0035777c(asdMemoryGetAllocatorC()) & 0x80000000;
    if (failure >= 0) {
        success = true;
    }
    return success;
}

} /* extern "C" */
