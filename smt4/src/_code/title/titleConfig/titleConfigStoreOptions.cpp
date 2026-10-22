#include "title/titleConfig.h"
#include "shard/GameDataBlocks.h"

extern "C" {
extern TitleConfigValues g_titleConfigValues;
GameSaveData* gameDataBlocksGetSaveData(void);

void titleConfigStoreOptions(void)
{
    GameSaveData* data = gameDataBlocksGetSaveData();
    if (data != NULL) {
        data->configOptions[0] = g_titleConfigValues.music;
        data->configOptions[1] = g_titleConfigValues.sound;
        data->configOptions[2] = g_titleConfigValues.voice;
        data->configOptions[3] = g_titleConfigValues.auxiliary;
        data->hasConfig = 1;
    }
}
}
