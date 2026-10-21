#include "common.h"

struct GameValueBlock {
    u8 unk00[0x15D8]; // 0x0000
    u8 values[10];   // 0x15D8
};

struct GameData {
    u8 unk00[0x3E74];          // 0x0000
    GameValueBlock valueBlock; // 0x3E74
};

struct GameDataBlocks {
    u32 unk00;      // 0x00
    GameData* data; // 0x04
};

extern "C" {
extern GameDataBlocks g_gameDataBlocks;

void FUN_002854a8(s32 index, u8 value)
{
    GameValueBlock* block = &g_gameDataBlocks.data->valueBlock;
    if (index < 10) {
        block->values[index] = value;
    }
}
}
