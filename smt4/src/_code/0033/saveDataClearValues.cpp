#include "common.h"
#include "gamedata/GameDataAccess.h"

extern "C" {

/* The save data is stored packed: these words sit at halfword offsets. */
typedef __packed struct SaveSub {
    /* 0x00 */ u8 unk00[0x72];
    /* 0x72 */ u32 value0;
    /* 0x76 */ u32 value1;
    /* 0x7A */ u32 value2;
    /* 0x7E */ u32 value3;
    /* 0x82 */ u16 value4;
} SaveSub;

typedef struct SaveData {
    /* 0x00000 */ u8 unk00000[0x1F800];
    /* 0x1F800 */ SaveSub sub;
} SaveData;

static __inline void saveSubClear(SaveSub *sub)
{
    sub->value0 = 0;
    sub->value1 = 0;
    sub->value2 = 0;
    sub->value3 = 0;
    sub->value4 = 0;
}

/* Clears the five values at +0x1F872 of the save data. */
void saveDataClearValues(void)
{
    saveSubClear(&reinterpret_cast<SaveData *>(gameDataBlocksGetSaveData())->sub);
}

} /* extern "C" */
