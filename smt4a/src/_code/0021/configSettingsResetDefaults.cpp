#include "gamedata/GameSaveBlocks.h"

extern "C" {

void FUN_0022838c(void);
void clearTwoWords(u8 *settings);
void sysMemClear(void *block, s32 size);

/* Resets the five settings bytes at 0x80 of the game-data table to their defaults (2, 2, 2, 1, 1), then clears the table's first 0x80 bytes. */
void configSettingsResetDefaults(void)
{
    GameSaveDataA *table;
    u8 *settings;

    table = g_gameDataBlocks.saveBlock;
    settings = g_gameDataBlocks.saveBlock->settings;
    clearTwoWords(settings);
    settings[0] = 2;
    settings[1] = 2;
    settings[2] = 2;
    settings[3] = 1;
    settings[4] = 1;
    FUN_0022838c();
    sysMemClear(g_gameDataBlocks.saveBlock, 0x80);
}

} /* extern "C" */
