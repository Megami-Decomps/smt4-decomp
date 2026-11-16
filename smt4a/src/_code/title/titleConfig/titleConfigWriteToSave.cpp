#include "common.h"

struct TitleConfigValues {
    u8 first;
    u8 second;
    u8 third;
    u8 fourth;
};
struct TitleConfigSaveView {
    u8 unk00000[0x27e90];
    TitleConfigValues values;
    u8 initialized;
};

extern "C" {
extern TitleConfigValues g_titleConfigValues;
u8* gameDataBlocksGetSaveData(void);

void titleConfigWriteToSave(void)
{
    TitleConfigSaveView* save = (TitleConfigSaveView*)gameDataBlocksGetSaveData();
    if (save) {
        save->values.first = g_titleConfigValues.first;
        save->values.second = g_titleConfigValues.second;
        save->values.third = g_titleConfigValues.third;
        save->values.fourth = g_titleConfigValues.fourth;
        save->initialized = 1;
    }
}
}
