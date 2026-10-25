#include "shard/NaviMain.h"
#include "common.h"

extern "C" {
extern NaviMain *g_naviMain;

void FUN_003c28dc(void *fade);

/* "NAVI FADE DRAW" task: advances and draws the navi screen's fade, if the navi object exists; returns 0. */
s32 naviMainDrawFade(u32 handle)
{
    if (g_naviMain == NULL) {
        return 0;
    }
    FUN_003c28dc(g_naviMain->settings);
    return 0;
}

} /* extern "C" */
