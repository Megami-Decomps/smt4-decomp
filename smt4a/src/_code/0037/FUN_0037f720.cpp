#include "battle/BtlMainAccess.h"
#include "shard/Shard0037.h"

extern "C" {

extern s32 FUN_003ecd94(void *state);
extern void scrSetResult(s32 value);

/* Script command: result is whether FUN_003ecd94 accepts the battle state. */
u32 FUN_0037f720(void)
{
    scrSetResult(FUN_003ecd94(static_cast<void *>(btlGetMainState())) != 0);
    return 1;
}

} /* extern "C" */
