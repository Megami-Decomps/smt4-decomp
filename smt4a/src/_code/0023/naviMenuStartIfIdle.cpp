#include "common.h"

extern "C" {

typedef struct NaviMain {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ s32 busy;
    /* 0x5c */ u8 unk5c[0xc];
    /* 0x68 */ u8 menu[1];
} NaviMain;

extern NaviMain *g_naviMain;

void FUN_00492088(u8 *menu);
s32 sceneTexturesAreLoaded(void);

/* When sceneTexturesAreLoaded holds and the navi is idle, runs FUN_00492088 on its menu. Always returns 0. */
u32 naviMenuStartIfIdle(void)
{
    if (sceneTexturesAreLoaded() == 0) {
        return 0;
    }
    if (g_naviMain->busy != 0) {
        return 0;
    }
    FUN_00492088(g_naviMain->menu);
    return 0;
}

} /* extern "C" */
