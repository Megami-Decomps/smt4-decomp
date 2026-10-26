#include "common.h"

/* The Apocalypse navi object, seen only down to its fade state. */
struct NaviMainView {
    /* 0x00000 */ u8 unk00000[0x206bc];
    /* 0x206bc */ u8 fade[1];
};

extern "C" {
extern NaviMainView *g_naviMain;

void FUN_004cf9ac(void *fade);

/* "NAVI FADE DRAW" task: advances and draws the navi screen's fade, if the navi object exists; returns 0. */
s32 naviMainDrawFade(u32 handle)
{
    if (g_naviMain == NULL) {
        return 0;
    }
    FUN_004cf9ac(g_naviMain->fade);
    return 0;
}

} /* extern "C" */
