#include "map/lmapMain.h"
#include "shard/lmapSceneGetScript.h"

extern "C" {

extern LmapScene *g_lmapScene;

/* The scene's script object. */
LmapScript *lmapSceneGetScript(void)
{
    return g_lmapScene->script;
}

} /* extern "C" */
