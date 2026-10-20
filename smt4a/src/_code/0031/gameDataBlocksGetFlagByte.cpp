#include "common.h"

extern "C" {

typedef struct SaveData {
    /* 0x00000 */ u8 bytes[1];
} SaveData;

typedef struct DataBlocks {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ SaveData save;
} DataBlocks;

typedef struct DataBlocksHolder {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ DataBlocks *blocks;
} DataBlocksHolder;

extern DataBlocksHolder g_gameDataBlocks;

static __inline SaveData *saveDataGet(void)
{
    return &g_gameDataBlocks.blocks->save;
}

/* Reads a flag byte of the game's save data. */
u8 gameDataBlocksGetFlagByte(void)
{
    SaveData *save = saveDataGet();

    return save->bytes[0x27E0F];
}

} /* extern "C" */
