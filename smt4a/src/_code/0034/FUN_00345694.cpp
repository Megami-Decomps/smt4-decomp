#include "common.h"

struct MessageWork {
    /* 0x00 */ u8 unk00[0x8D];
    /* 0x8D */ u8 state;
};

struct MessageMainView {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ MessageWork *work;
};

extern "C" MessageMainView g_messageMain;

extern "C" s32 FUN_00345694(void)
{
    return g_messageMain.work->state == 2;
}
