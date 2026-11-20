#include "gamedata/GameSaveBlocks.h"
#include "shard/GameDataBlocks.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

int gameWorldResetForNewGame(void);
int cecMessageIdClear(u8 *settings);

void configSettingsResetDefaults(void)
{
    u8 *settings = g_gameDataBlocks.saveBlock->settings;

    cecMessageIdClear(settings);
    settings[0] = 2;
    settings[1] = 2;
    settings[2] = 2;
    settings[3] = 1;
    settings[4] = 1;
    gameWorldResetForNewGame();
    reinterpret_cast<int>(memClear(g_gameDataBlocks.saveBlock, 0x80));
}

} /* extern "C" */
