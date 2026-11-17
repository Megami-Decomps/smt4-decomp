#include "mapnavi/NaviMainGlobals.h"

extern "C" {
void byteScreenFadeUpdateDraw(void *fade);

/* "NAVI FADE DRAW" task: advances and draws the navi screen's fade, if the navi object exists; returns 0. */
s32 naviMainDrawFade(u32 handle)
{
    if (g_naviMain == NULL) {
        return 0;
    }
    byteScreenFadeUpdateDraw(g_naviMain->slider);
    return 0;
}

} /* extern "C" */
