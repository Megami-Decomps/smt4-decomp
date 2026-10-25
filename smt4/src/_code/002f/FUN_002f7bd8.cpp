#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

void *gameGetPlayerData(void);
s32 btlSourceGetMaxHp(void *data);

/* Script command: reports the player's maximum HP. */
u32 FUN_002f7bd8(void)
{
    scrSetResult(btlSourceGetMaxHp(gameGetPlayerData()));
    return 1;
}

} /* extern "C" */
