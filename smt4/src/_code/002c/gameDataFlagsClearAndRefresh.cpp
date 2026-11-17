#include "gamedata/GameSaveBlocks.h"
#include "gamedata/GameDataAccess_Smt4.h"

extern "C" {

extern void sleepModeSetEnabled(void);

/* Releases sleep holds, records whether any is left and refreshes the sleep mode. */
void gameDataFlagsClearAndRefresh(u32 mask)
{
    g_gameDataBlocks.sleepHolds &= ~mask;
    if (g_gameDataBlocks.sleepHolds != 0) {
        g_gameDataBlocks.noSleepHolds = 0;
        sleepModeSetEnabled();
        return;
    }
    g_gameDataBlocks.noSleepHolds = 1;
    sleepModeSetEnabled();
}

} /* extern "C" */
