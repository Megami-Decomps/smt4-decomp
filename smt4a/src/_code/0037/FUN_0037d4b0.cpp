#include "common.h"

extern "C" {

extern void *DAT_0057f244;
void FUN_00405268(void *owner, s32 value);

s32 FUN_0037d4b0(s32 value)
{
    if (DAT_0057f244 != NULL) {
        FUN_00405268(DAT_0057f244, value);
    }
    return 0;
}

} /* extern "C" */
