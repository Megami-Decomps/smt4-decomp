#include "common.h"

extern "C" {

extern void *DAT_0057f244;
void FUN_00405574(void *owner, s32 value);

s32 FUN_0039b93c(s32 value)
{
    if (DAT_0057f244 != NULL) {
        FUN_00405574(DAT_0057f244, value);
    }
    return 0;
}

} /* extern "C" */
