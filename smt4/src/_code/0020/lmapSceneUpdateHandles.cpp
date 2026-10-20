#include "map/lmapMain.h"

extern "C" {

void asdMdlManagerMarkDestroy(u32 handle);
void FUN_00335144(LmapScript *script);

extern LmapScene *g_lmapScene;

void lmapSceneUpdateHandles(void)
{
    FUN_00335144(g_lmapScene->script);
    if (g_lmapScene->handleA != 0) {
        asdMdlManagerMarkDestroy(g_lmapScene->handleA);
    }
    if (g_lmapScene->handleB != 0) {
        asdMdlManagerMarkDestroy(g_lmapScene->handleB);
    }
    if (g_lmapScene->handleC != 0) {
        asdMdlManagerMarkDestroy(g_lmapScene->handleC);
    }
    if (g_lmapScene->handleD != 0) {
        asdMdlManagerMarkDestroy(g_lmapScene->handleD);
    }
}

} /* extern "C" */
