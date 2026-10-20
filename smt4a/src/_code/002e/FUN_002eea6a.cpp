#include "common.h"

extern "C" {

void operatorDeleteArray2(void);

/* Runs operatorDeleteArray2 when `*slot` is set; returns the slot. */
s32 *FUN_002eea6a(s32 *slot)
{
    if (*slot != 0) {
        operatorDeleteArray2();
    }
    return slot;
}

} /* extern "C" */
