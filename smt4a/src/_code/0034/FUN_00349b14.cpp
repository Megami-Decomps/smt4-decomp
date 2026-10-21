#include "common.h"

extern "C" {

extern void *DAT_00588130;
void FUN_003e66f8(void *owner, s32 value);

s32 FUN_00349b14(s32 value)
{
    if (DAT_00588130 != NULL) {
        FUN_003e66f8(DAT_00588130, value);
    }
    return 0;
}

} /* extern "C" */
