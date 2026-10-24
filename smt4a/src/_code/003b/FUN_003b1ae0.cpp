#include "common.h"

struct BtlCameraView {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 mode;
};

extern "C" BtlCameraView *g_btlCamera;

extern "C" s32 FUN_003b1ae0(void)
{
    if (g_btlCamera->mode == 3) {
        return 0;
    }
    return 1;
}
