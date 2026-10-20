#include "map/lmapMain.h"

extern "C" {

void FUN_00288728(LmapScript *script);
void asdMdlManagerDestroy(u32 handle);

extern LmapScene *g_lmapScene;

/* Shuts the scene's script down and releases its handles. */
void lmapSceneShutdownScript(void)
{
    FUN_00288728(g_lmapScene->script);
    if (g_lmapScene->script != NULL) {
        g_lmapScene->script->vtable[1](g_lmapScene->script);
    }
    g_lmapScene->script = NULL;
    if (g_lmapScene->handleA != 0) {
        asdMdlManagerDestroy(g_lmapScene->handleA);
        g_lmapScene->handleA = 0;
    }
    if (g_lmapScene->handleB != 0) {
        asdMdlManagerDestroy(g_lmapScene->handleB);
        g_lmapScene->handleB = 0;
    }
    if (g_lmapScene->handleC != 0) {
        asdMdlManagerDestroy(g_lmapScene->handleC);
        g_lmapScene->handleC = 0;
    }
    if (g_lmapScene->handleD != 0) {
        asdMdlManagerDestroy(g_lmapScene->handleD);
        g_lmapScene->handleD = 0;
    }
}

} /* extern "C" */
