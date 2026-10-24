/* NON_MATCHING: not mid-flow: the original reads uninitialised locals (r4 as the base of four byte-field stores, s16/s17 as the last two floats) and armcc leaves them undefined in retail; built defines them as constants and saves s16-s18 */
#include "common.h"

extern "C" {

struct PackedBytes {
    u32 a : 8;
    u32 b : 8;
    u32 c : 8;
    u32 d : 8;
};

struct SaveBlock27E98 {
    /* 0x00 */ PackedBytes bytes;
    /* 0x04 */ f32 x;
    /* 0x08 */ f32 y;
    /* 0x0c */ f32 z;
    /* 0x10 */ f32 w;
    /* 0x14 */ f32 v;
};

struct SaveData {
    u8 unk00000[0x27e98];
    SaveBlock27E98 block;
};

SaveData *gameDataBlocksGetSaveData(void);

/* Rebuilds the save block from a partly uninitialised local copy (the original reads uninitialised floats). */
void FUN_004731d8(void)
{
    PackedBytes bytes;
    f32 w;
    f32 v;
    SaveBlock27E98 local;

    bytes.a = 0;
    bytes.b = 0;
    bytes.c = 0;
    bytes.d = 0;
    local.bytes = bytes;
    local.x = 0.0f;
    local.y = 0.0f;
    local.z = 0.0f;
    local.w = w;
    local.v = v;
    gameDataBlocksGetSaveData()->block = local;
}

} /* extern "C" */
