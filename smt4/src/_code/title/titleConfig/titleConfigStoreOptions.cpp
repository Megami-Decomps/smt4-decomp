#include "title/titleConfig.h"
#include "shard/GameDataBlocks.h"

extern "C" {
extern TitleConfigValues g_titleConfigValues;
GameSaveData* gameDataBlocksGetSaveData(void);

void titleConfigStoreOptions(void)
{
    GameSaveData* data = gameDataBlocksGetSaveData();
    if (data != NULL) {
        data->body.config.configOptions[0] = g_titleConfigValues.music;
        data->body.config.configOptions[1] = g_titleConfigValues.sound;
        data->body.config.configOptions[2] = g_titleConfigValues.voice;
        data->body.config.configOptions[3] = g_titleConfigValues.auxiliary;
        data->body.config.hasConfig = 1;
    }
}
}
