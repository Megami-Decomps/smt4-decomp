#include "common.h"

extern "C" {

void svcCloseHandle(void);

/* Releases the pointer held in `*slot` (if any), clears it, and returns the slot. */
u32 *FUN_00103774(u32 *slot)
{
    if (*slot != 0) {
        svcCloseHandle();
        *slot = 0;
    }
    return slot;
}

} /* extern "C" */
