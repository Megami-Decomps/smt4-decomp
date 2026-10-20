#include "common.h"

extern "C" {

typedef struct SaveData {
    /* 0x00000 */ u8 unk00000[0x27E3F];
    /* 0x27E3F */ u8 scriptValue;
} SaveData;

extern SaveData *gameDataBlocksGetSaveData(void);
extern u32 scrGetArg(u32 index);

/* Script command: stores its first argument into the save data byte at +0x27E3F. */
u32 scrSetSaveScriptValue(void)
{
    SaveData *save = gameDataBlocksGetSaveData();

    save->scriptValue = scrGetArg(0);
    return 1;
}

}
