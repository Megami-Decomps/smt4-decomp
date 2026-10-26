#include "common.h"

struct SaveToggleFlags {
    u8 unk00000[0x282fc]; // 0x00000
    u8 flags[1];           // 0x282fc
};

extern "C" SaveToggleFlags* gameDataBlocksGetSaveData();

// Set or clear one bit in the saved toggle-flag bank.
extern "C" void gameDataToggleFlagSet(s32 flagIndex, s32 enabled)
{
    s32 byteIndex = flagIndex / 8;
    s32 bit = flagIndex % 8;
    SaveToggleFlags* save = gameDataBlocksGetSaveData();
    u8* byte = &save->flags[byteIndex];
    if (enabled != 0) {
        *byte |= 1 << bit;
    } else {
        *byte &= ~(1 << bit);
    }
}
