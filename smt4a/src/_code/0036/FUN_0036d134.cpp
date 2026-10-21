/* NON_MATCHING: division/remainder arithmetic is scheduled after the save-data getter, eliminating retail's saved index registers. */
#include "common.h"

struct SavedFlagBlock {
    u8 unk00000[0x282fc];
    u8 flags[0x10]; // 0x282fc
};

extern "C" {
SavedFlagBlock *gameDataBlocksGetSaveData(void);

u32 FUN_0036d134(void)
{
    for (s32 bit = 0; bit < 0x80; ++bit) {
        if ((gameDataBlocksGetSaveData()->flags[bit / 8] & (1u << (bit % 8))) != 0)
            return 1;
    }
    return 0;
}
}
