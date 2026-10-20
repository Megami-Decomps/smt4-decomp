#include "shard/Shard0034.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);
extern void scrSetResult(s32 value);

/* Script command: result is the player's unk2C. */
u32 FUN_0034e6d8(void)
{
    scrSetResult(gameGetPlayerData()->unk2C);
    return 1;
}

} /* extern "C" */
