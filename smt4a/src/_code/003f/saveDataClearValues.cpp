#include "common.h"

extern "C" {

/* The save data is stored packed: these words sit at halfword offsets. */
typedef __packed struct SaveSub {
    /* 0x00 */ u8 unk00[0xAA];
    /* 0xAA */ u32 value0;
    /* 0xAE */ u32 value1;
    /* 0xB2 */ u32 value2;
    /* 0xB6 */ u32 value3;
    /* 0xBA */ u16 value4;
} SaveSub;

typedef struct SaveData {
    /* 0x00000 */ u8 unk00000[0x22100];
    /* 0x22100 */ SaveSub sub;
} SaveData;

extern SaveData *gameDataBlocksGetSaveData(void);

static __inline void saveSubClear(SaveSub *sub)
{
    sub->value0 = 0;
    sub->value1 = 0;
    sub->value2 = 0;
    sub->value3 = 0;
    sub->value4 = 0;
}

/* Clears the five values at +0x221AA of the save data. */
void saveDataClearValues(void)
{
    saveSubClear(&gameDataBlocksGetSaveData()->sub);
}

} /* extern "C" */
