#include "shard/NaviMain.h"
#include "common.h"

extern "C" {
extern NaviMainA *g_naviMain;

void stateHandlerCallExtended(u8 *menu);
s32 sceneTexturesAreLoaded(void);

/* When sceneTexturesAreLoaded holds and the navi is idle, runs stateHandlerCallExtended on its menu. Always returns 0. */
u32 naviMenuStartIfIdle(void)
{
    if (sceneTexturesAreLoaded() == 0) {
        return 0;
    }
    if (g_naviMain->busy != 0) {
        return 0;
    }
    stateHandlerCallExtended(g_naviMain->panel);
    return 0;
}

} /* extern "C" */
