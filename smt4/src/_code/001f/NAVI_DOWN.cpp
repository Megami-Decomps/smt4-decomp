#include "common.h"

extern "C" {

typedef struct NaviMain {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ s32 busy;
    /* 0x34 */ u8 unk34[0xC];
    /* 0x40 */ u8 discovery[1];
} NaviMain;

extern NaviMain *g_naviMain;

s32 FUN_00287758(void);
int NaviMain_UpdateDiscovery(void *discovery);

/* Navi task: while FUN_00287758 reports ready and the navi object isn't busy, updates its discovery state; always returns 0. */
u32 NAVI_DOWN(void)
{
    if (FUN_00287758() == 0) {
        return 0;
    }
    if (g_naviMain->busy != 0) {
        return 0;
    }
    NaviMain_UpdateDiscovery(g_naviMain->discovery);
    return 0;
}

} /* extern "C" */
