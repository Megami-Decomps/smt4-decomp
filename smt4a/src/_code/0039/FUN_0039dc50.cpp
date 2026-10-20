#include "shard/Shard0039.h"

extern "C" {

extern s32 FUN_001b4aa0(void);
extern void scrSetResult(s32 value);

/* Script command: result is whether FUN_001b4aa0 returns 4. */
u32 FUN_0039dc50(void)
{
    scrSetResult(FUN_001b4aa0() == 4);
    return 1;
}

} /* extern "C" */
