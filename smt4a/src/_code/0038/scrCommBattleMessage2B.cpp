#include "shard/Shard0038.h"

extern "C" {

extern void *btlGetMainState(void);
extern void btlSwitchId4CE4(void *state, s32 message);

/* Script command: displays battle message 0x100002B. */
u32 scrCommBattleMessage2B(void)
{
    btlSwitchId4CE4(btlGetMainState(), 0x100002B);
    return 1;
}

} /* extern "C" */
