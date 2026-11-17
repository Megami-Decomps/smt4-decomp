#include "common.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);

/* Script command: reports one of the five player stats picked by the first argument. */
u32 FUN_003808c0(void)
{
    switch (scrGetArg(0)) {
    case 0:
        scrSetResult(gameGetPlayerData()->stats[0]);
        break;
    case 1:
        scrSetResult(gameGetPlayerData()->stats[1]);
        break;
    case 2:
        scrSetResult(gameGetPlayerData()->stats[2]);
        break;
    case 3:
        scrSetResult(gameGetPlayerData()->stats[3]);
        break;
    case 4:
        scrSetResult(gameGetPlayerData()->stats[4]);
        break;
    }
    return 1;
}

} /* extern "C" */
