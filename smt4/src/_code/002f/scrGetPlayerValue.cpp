#include "common.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
}

/* Script command: returns one of the player's five values, chosen by the first argument. */
extern "C" s32 scrGetPlayerValue(void)
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
