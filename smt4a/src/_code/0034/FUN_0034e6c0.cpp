#include "shard/Shard0034.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);
extern void scrSetResult(s32 value);

/* Script command: result is the player's unk62. */
u32 FUN_0034e6c0(void)
{
    scrSetResult(gameGetPlayerData()->unk62);
    return 1;
}

} /* extern "C" */
