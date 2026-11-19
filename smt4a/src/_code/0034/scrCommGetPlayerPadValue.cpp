#include "shard/Shard0034.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
extern void scrSetResult(s32 value);

/* Script command: result is the player's unk2C. */
u32 scrCommGetPlayerPadValue(void)
{
    scrSetResult(gameGetPlayerData()->mp);
    return 1;
}

} /* extern "C" */
