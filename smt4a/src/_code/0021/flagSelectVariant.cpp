/* Returns 1 or 2 depending on which of the two flags (0x4c8, 0x4c9) is set, else 0. */
#include "common.h"

extern "C" {

s32 FUN_0018719c(u32 flag);

u32 flagSelectVariant(void)
{
    if (FUN_0018719c(0x4c8) != 0) {
        return 1;
    }
    if (FUN_0018719c(0x4c9) != 0) {
        return 2;
    }
    return 0;
}

} /* extern "C" */
