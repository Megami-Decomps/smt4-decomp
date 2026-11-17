#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "common.h"

extern "C" {

void byteScreenFadeUpdateDraw(void *fade);

/* "NAVI FADE DRAW" task: advances and draws the navi screen's fade, if the navi object exists; returns 0. */
s32 naviMainDrawFade(u32 handle)
{
    if (g_naviMain == NULL) {
        return 0;
    }
    byteScreenFadeUpdateDraw(g_naviMain->settings);
    return 0;
}

} /* extern "C" */
