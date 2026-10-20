#include "shard/Shard0034.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);
extern void scrSetResult(s32 value);

/* Script command: result is the player's unk2A. */
u32 FUN_0034e6a8(void)
{
    scrSetResult(gameGetPlayerData()->unk2A);
    return 1;
}

} /* extern "C" */
