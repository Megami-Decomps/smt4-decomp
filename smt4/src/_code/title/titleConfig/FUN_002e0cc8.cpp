#include "common.h"

struct SaveDataConfigView {
    u8 unk00000[0x24b7c];
    u8 options[4];
    u8 hasConfig;
};

extern "C" {
extern u8 DAT_0044e0f8[4];
SaveDataConfigView* gameDataBlocksGetSaveData(void);

void FUN_002e0cc8(void)
{
    SaveDataConfigView* data = gameDataBlocksGetSaveData();
    if (data != NULL) {
        data->options[0] = DAT_0044e0f8[0];
        data->options[1] = DAT_0044e0f8[1];
        data->options[2] = DAT_0044e0f8[2];
        data->options[3] = DAT_0044e0f8[3];
        data->hasConfig = 1;
    }
}
}
