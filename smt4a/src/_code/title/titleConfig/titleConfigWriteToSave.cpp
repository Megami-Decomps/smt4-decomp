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
extern TitleConfigValues DAT_00588fc0;
u8* gameDataBlocksGetSaveData(void);

void titleConfigWriteToSave(void)
{
    TitleConfigSaveView* save = (TitleConfigSaveView*)gameDataBlocksGetSaveData();
    if (save) {
        save->values.first = DAT_00588fc0.first;
        save->values.second = DAT_00588fc0.second;
        save->values.third = DAT_00588fc0.third;
        save->values.fourth = DAT_00588fc0.fourth;
        save->initialized = 1;
    }
}
}
