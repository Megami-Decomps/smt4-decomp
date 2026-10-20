#include "common.h"

extern "C" {

s32 FUN_0018719c(u32 id);

/* Returns the limit 99, or 999 when FUN_0018719c reports 0x534 unlocked. */
u32 FUN_00203b1c(void)
{
    s32 unlocked;
    u32 limit;

    unlocked = FUN_0018719c(0x534);
    if (unlocked == 0) {
        limit = 99;
    } else {
        limit = 999;
    }
    return limit;
}

} /* extern "C" */
