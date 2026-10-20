#include "common.h"

extern "C" {

void FUN_002e7264(void);

/* Releases the pointer held in `*slot` (if any), clears it, and returns the slot. */
u32 *FUN_00103774(u32 *slot)
{
    if (*slot != 0) {
        FUN_002e7264();
        *slot = 0;
    }
    return slot;
}

} /* extern "C" */
