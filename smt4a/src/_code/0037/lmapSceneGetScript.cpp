#include "map/lmapMain.h"

extern "C" {

extern LmapSceneA *g_lmapScene;

/* The scene's script object. */
LmapScript *lmapSceneGetScript(void)
{
    return g_lmapScene->script;
}

} /* extern "C" */
