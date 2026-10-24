#include "common.h"

/* A sub-record of the game data block at 0x3e74, holding a byte array of ten entries at 0x15e4. */
struct GameDataBytesSub {
    u8 unk00[0x15e4];
    u8 bytes[10];
};

struct GameDataBlockBytesView {
    u8 unk00[0x3e74];
    GameDataBytesSub sub;
};

struct GameDataBlocksBytesView {
    u8 unk00[4];
    GameDataBlockBytesView *block;
};

extern "C" GameDataBlocksBytesView g_gameDataBlocks;

/* Sets entry `index` (0-9) of the sub-record's byte array. */
extern "C" void FUN_0026847c(s32 index, u8 value)
{
    GameDataBytesSub *sub = &g_gameDataBlocks.block->sub;
    if (index < 10) {
        sub->bytes[index] = value;
    }
}
