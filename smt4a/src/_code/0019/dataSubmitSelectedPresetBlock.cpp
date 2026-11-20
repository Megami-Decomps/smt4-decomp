#include "common.h"
#include "shard/W6_W6Match2_HelpResources.h"

struct ModeData32LocalView {
    u32 unk00[8]; // 0x00
};

struct ModeData40LocalView {
    u32 unk00[10]; // 0x00
};

struct ModeDataSourceLocalView {
    u8 unk00[0x10];                 // 0x00
    ModeData32LocalView unk10;      // 0x10
    ModeData32LocalView unk30;      // 0x30
    ModeData40LocalView unk50;      // 0x50
};

extern "C" {
extern const ModeDataSourceLocalView g_gpuCommandTemplates;
void gpuSubmitCommandBlock(void* data, u32 byteCount);
}

// Copy the three mode-specific data blocks and submit the selected block.
extern "C" void dataSubmitSelectedPresetBlock(s32 mode)
{
    ModeData32LocalView modeZeroData = g_gpuCommandTemplates.unk10;
    ModeData32LocalView modeOneData = g_gpuCommandTemplates.unk30;
    ModeData40LocalView modeTwoData = g_gpuCommandTemplates.unk50;

    if (mode == 0) {
        gpuSubmitCommandBlock(&modeZeroData, sizeof(modeZeroData));
        return;
    }

    if (mode == 1) {
        gpuSubmitCommandBlock(&modeOneData, sizeof(modeOneData));
    } else if (mode == 2) {
        gpuSubmitCommandBlock(&modeTwoData, sizeof(modeTwoData));
    }
}
