#include "shard/Shard0039.h"

extern "C" {

extern void *btlGetMainState(void);
extern s32 FUN_003ec7b0(void *state);
extern void scrSetResult(s32 value);

/* Script command: result is whether FUN_003ec7b0 accepts the battle state. */
u32 FUN_0039d400(void)
{
    scrSetResult(FUN_003ec7b0(btlGetMainState()) != 0);
    return 1;
}

} /* extern "C" */
