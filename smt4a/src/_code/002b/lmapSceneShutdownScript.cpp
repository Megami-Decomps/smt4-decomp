#include "map/LmapGlobals.h"

extern "C" {

void resourceOwnerReleaseAll(LmapScript *script);


/* Shuts the scene's script down. */
void lmapSceneShutdownScript(void)
{
    resourceOwnerReleaseAll(g_lmapScene->playerModel);
    if (g_lmapScene->playerModel != NULL) {
        g_lmapScene->playerModel->vtable[1](g_lmapScene->playerModel);
    }
    g_lmapScene->playerModel = NULL;
}

} /* extern "C" */
