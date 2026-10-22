#include "common.h"

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
extern const ModeDataSourceLocalView DAT_0053d500;
void FUN_001b4120(void* data, u32 byteCount);
}

// Copy the three mode-specific data blocks and submit the selected block.
extern "C" void dataSubmitSelectedPresetBlock(s32 mode)
{
    ModeData32LocalView modeZeroData = DAT_0053d500.unk10;
    ModeData32LocalView modeOneData = DAT_0053d500.unk30;
    ModeData40LocalView modeTwoData = DAT_0053d500.unk50;

    if (mode == 0) {
        FUN_001b4120(&modeZeroData, sizeof(modeZeroData));
        return;
    }

    if (mode == 1) {
        FUN_001b4120(&modeOneData, sizeof(modeOneData));
    } else if (mode == 2) {
        FUN_001b4120(&modeTwoData, sizeof(modeTwoData));
    }
}
