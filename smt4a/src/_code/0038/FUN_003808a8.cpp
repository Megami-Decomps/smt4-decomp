#include "shard/Shard0038.h"

extern "C" {

extern PlayerData *FUN_001801a4(void);
extern void scrSetResult(s32 value);

/* Script command: result is the player's value at +0x1E. */
u32 FUN_003808a8(void)
{
    scrSetResult(FUN_001801a4()->unk1E);
    return 1;
}

} /* extern "C" */
