#include "shard/Shard0034.h"

extern "C" {

extern PlayerData *FUN_001801a4(void);
extern void scrSetResult(s32 value);

/* Script command: result is the player's unk2A. */
u32 FUN_0034e6a8(void)
{
    scrSetResult(FUN_001801a4()->unk2A);
    return 1;
}

} /* extern "C" */
