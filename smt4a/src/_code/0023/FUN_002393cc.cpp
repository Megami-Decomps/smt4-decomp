/* NON_MATCHING: retail uses ldr r1, [pc, #44] where the compiled block uses bge 24. */
#include "common.h"

struct GameEntryState {
    u8 unk00[0x15E4];
    u8 entryFlags[10]; // 0x15E4
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
    if (entryIndex < 10 && g_gameDataBlocks.data->entryState.entryFlags[entryIndex] == 1) {
        return 1;
    }
    return 0;
}
}
