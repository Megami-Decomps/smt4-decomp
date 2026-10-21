#include "common.h"

extern "C" {

extern void *DAT_0057f658;
void FUN_004ce7c4(void *owner, s32 value);

s32 FUN_00330954(s32 value)
{
    if (DAT_0057f658 != NULL) {
        FUN_004ce7c4(DAT_0057f658, value);
    }
    return 0;
}

} /* extern "C" */
