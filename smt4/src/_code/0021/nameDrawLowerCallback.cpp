#include "common.h"

struct NameDrawState {
    /* 0x00 */ u8 unk00[0xd];
    /* 0x0D */ u8 hidden;
    /* 0x0E */ u8 unk0e[2];
    /* 0x10 */ u8 drawing[1];
};
struct NameDrawGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ NameDrawState *work;
};

extern "C" NameDrawGlobals g_name;
extern "C" void FUN_0039723c(void *drawing);

/* Draw the lower name-entry view unless it is hidden. */
extern "C" s32 nameDrawLowerCallback(void)
{
    if (g_name.work->hidden == 1)
        FUN_0039723c(g_name.work->drawing);
    return 0;
}
