/* NON_MATCHING: bit-index registers and enabled-test scheduling differ from retail. */
#include "common.h"

struct SaveToggleFlags {
    u8 unk00000[0x282fc]; // 0x00000
    u8 flags[1];           // 0x282fc
};

extern "C" SaveToggleFlags* gameDataBlocksGetSaveData();

// Set or clear one bit in the saved toggle-flag bank.
extern "C" void FUN_0032ef0c(s32 flagIndex, s32 enabled)
{
    s32 byteIndex = flagIndex / 8;
    SaveToggleFlags* save = gameDataBlocksGetSaveData();
    u8* byte = &save->flags[byteIndex];
    u32 mask = 1u << (flagIndex % 8);
    u32 bits = *byte;
    if (enabled != 0) {
        bits |= mask;
    } else {
        bits &= ~mask;
    }
    *byte = bits;
}
