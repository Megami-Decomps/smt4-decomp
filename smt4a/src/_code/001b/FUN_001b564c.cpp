#include "common.h"

extern "C" {

u32 *FUN_001bcea0(void);

/* Returns entry `index` of the table FUN_001bcea0 returns. */
u32 FUN_001b564c(s32 index)
{
    u32 *table = FUN_001bcea0();
    return table[index];
}

} /* extern "C" */
