#include "common.h"

struct SavedFlagBlock {
    u8 unk00000[0x282fc];
    u8 flags[0x10]; // 0x282fc
};

extern "C" {
SavedFlagBlock *gameDataBlocksGetSaveData(void);

static __inline bool savedFlagBitIsSet(s32 byte, s32 bit)
{
    u8 *flag = &gameDataBlocksGetSaveData()->flags[byte];
    return (*flag & (1u << bit)) != 0;
}

u32 FUN_0036d134(void)
{
    for (s32 bit = 0; bit < 0x80; ++bit) {
        if (savedFlagBitIsSet(bit / 8, bit % 8))
            return 1;
    }
    return 0;
}
}
