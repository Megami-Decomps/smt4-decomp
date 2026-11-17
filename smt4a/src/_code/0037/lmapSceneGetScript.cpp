#include "map/LmapGlobals.h"

extern "C" {


/* The scene's script object. */
LmapScript *lmapSceneGetScript(void)
{
    return g_lmapScene->playerModel;
}

} /* extern "C" */
