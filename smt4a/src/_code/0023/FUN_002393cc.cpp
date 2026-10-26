#include "common.h"

struct GameEntryState {
    u8 unk00[0x15E4];
    s8 entryFlags[10]; // 0x15E4
};

struct GameDataBlock {
    u8 unk00[0x3E74];
    GameEntryState entryState; // 0x3E74
};

struct GameDataBlocks {
    u32 unk00;           // 0x00
    GameDataBlock* data; // 0x04
};

extern "C" {
extern GameDataBlocks g_gameDataBlocks;

u8 FUN_002393cc(s32 entryIndex)
{
    GameEntryState *state = &g_gameDataBlocks.data->entryState;
    if (entryIndex < 10 && state->entryFlags[entryIndex] == 1) {
        return 1;
    }
    return 0;
}
}
