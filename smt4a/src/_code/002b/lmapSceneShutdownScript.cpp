#include "map/lmapMain.h"

extern "C" {

void resourceOwnerReleaseAll(LmapScript *script);

extern LmapSceneA *g_lmapScene;

/* Shuts the scene's script down. */
void lmapSceneShutdownScript(void)
{
    resourceOwnerReleaseAll(g_lmapScene->script);
    if (g_lmapScene->script != NULL) {
        g_lmapScene->script->vtable[1](g_lmapScene->script);
    }
    g_lmapScene->script = NULL;
}

} /* extern "C" */
