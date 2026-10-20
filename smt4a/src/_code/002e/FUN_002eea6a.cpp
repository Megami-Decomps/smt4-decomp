#include "common.h"

extern "C" {

void FUN_002f9f12(void);

/* Runs FUN_002f9f12 when `*slot` is set; returns the slot. */
s32 *FUN_002eea6a(s32 *slot)
{
    if (*slot != 0) {
        FUN_002f9f12();
    }
    return slot;
}

} /* extern "C" */
