#include "shard/Shard0034.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
extern void scrSetResult(s32 value);

/* Script command: result is the player's unk62. */
u32 FUN_0034e6c0(void)
{
    scrSetResult(gameGetPlayerData()->level);
    return 1;
}

} /* extern "C" */
