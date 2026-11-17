#include "shard/Shard0034.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
extern void scrSetResult(s32 value);

/* Script command: result is the player's unk2A. */
u32 FUN_0034e6a8(void)
{
    scrSetResult(gameGetPlayerData()->hp);
    return 1;
}

} /* extern "C" */
