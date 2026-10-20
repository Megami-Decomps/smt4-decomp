#include "shard/Shard0038.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);
extern void scrSetResult(s32 value);

/* Script command: result is the player's value at +0x1E. */
u32 FUN_003808a8(void)
{
    scrSetResult(gameGetPlayerData()->unk1E);
    return 1;
}

} /* extern "C" */
