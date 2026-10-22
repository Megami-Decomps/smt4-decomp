#include "common.h"

struct SaveDataConfigView {
    u8 unk00000[0x24b7c];
    u8 options[4];
    u8 hasConfig;
};

extern "C" {
extern u8 g_titleConfigValues[4];
SaveDataConfigView* gameDataBlocksGetSaveData(void);

void FUN_002e0cc8(void)
{
    SaveDataConfigView* data = gameDataBlocksGetSaveData();
    if (data != NULL) {
        data->options[0] = g_titleConfigValues[0];
        data->options[1] = g_titleConfigValues[1];
        data->options[2] = g_titleConfigValues[2];
        data->options[3] = g_titleConfigValues[3];
        data->hasConfig = 1;
    }
}
}
