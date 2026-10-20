#include "shard/Shard0038.h"

extern "C" {

extern void *btlGetMainState(void);
extern void FUN_003f2498(void *state, s32 message);

/* Script command: runs FUN_003f2498 on the battle state with message 0x100002B. */
u32 scrCommBattleMessage2B(void)
{
    FUN_003f2498(btlGetMainState(), 0x100002B);
    return 1;
}

} /* extern "C" */
