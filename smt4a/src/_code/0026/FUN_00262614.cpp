/* NON_MATCHING: retail uses ldr r1, [pc, #44] where the compiled block uses ldr r1, [pc, #48]. */
#include "common.h"

struct GameDataFlagRegion {
    u8 unk00[0x15D8]; // 0x0000
    u8 flags[10];     // 0x15D8
};

struct GameDataBlock {
    u8 unk00[0x3E74];              // 0x0000
    GameDataFlagRegion flagRegion; // 0x3E74
};

struct GameDataBlocks {
    u32 unk00;           // 0x00
    GameDataBlock* data;  // 0x04
};

extern "C" {
extern GameDataBlocks g_gameDataBlocks;

u8 FUN_00262614(s32 index)
{
    GameDataFlagRegion* region = &g_gameDataBlocks.data->flagRegion;
    if (index >= 10) {
        return 0;
    }
    return region->flags[index] == 1;
}
}
