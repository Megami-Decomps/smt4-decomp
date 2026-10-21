#include "common.h"

namespace {
struct NaviMain {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u32 state;
};
}

extern "C" {
extern NaviMain *g_naviMain;
void FUN_0039c064(u32 *state, s32 value);

/* Updates the navigation state when its owner exists. */
void FUN_002f49ec(s32 value)
{
    if (g_naviMain != NULL) {
        FUN_0039c064(&g_naviMain->state, value);
    }
}
}
