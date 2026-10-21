#include "nn/Result.h"

struct RuntimeInitFlags {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 initialized;
};

extern "C" {
extern RuntimeInitFlags DAT_0044e360;
extern u8 DAT_004c641c[];
s32 FUN_00110170(void);
void FUN_00129584(void* buffer, u32 size);
s32 FUN_0011034c(u32 mode, u32 address, u32 flags);

// Initialize the runtime buffer once and preserve a failed setup result.
s32 FUN_001023e0(u32 address)
{
    if (FUN_00110170() == 0) {
        address &= ~7u;
        DAT_0044e360.initialized = 1;
        FUN_00129584(DAT_004c641c, 0x100);
        s32 result = FUN_0011034c(0x300, address, 0x0f);
        if (!nnResultIsSuccess(result))
            return result;
    }
    return 0;
}
}
