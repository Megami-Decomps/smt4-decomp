#include "map/lmapMain.h"

extern "C" {

void FUN_00152bec(u32 handle);
void FUN_00335144(LmapScript *script);

extern LmapScene *g_lmapScene;

void lmapSceneUpdateHandles(void)
{
    FUN_00335144(g_lmapScene->script);
    if (g_lmapScene->handleA != 0) {
        FUN_00152bec(g_lmapScene->handleA);
    }
    if (g_lmapScene->handleB != 0) {
        FUN_00152bec(g_lmapScene->handleB);
    }
    if (g_lmapScene->handleC != 0) {
        FUN_00152bec(g_lmapScene->handleC);
    }
    if (g_lmapScene->handleD != 0) {
        FUN_00152bec(g_lmapScene->handleD);
    }
}

} /* extern "C" */
