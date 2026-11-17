#include "gamedata/GameSaveBlocks.h"
#include "gamedata/GameDataAccess_Smt4.h"

extern "C" {

s32 sleepModeSetEnabled(s32 arg);

/* Adds sleep holds (clearing the "no sleep holds" byte) and disables sleep mode. */
void gameDataFlagsSetBits(u32 flags)
{
    g_gameDataBlocks.noSleepHolds = 0;
    g_gameDataBlocks.sleepHolds |= flags;
    sleepModeSetEnabled(0);
}

}
