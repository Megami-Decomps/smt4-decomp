#include "map/LmapGlobals.h"

extern "C" {


/* The scene's embedded player pose. */
LmapScenePose *lmapSceneGetObj(void)
{
    return &g_lmapScene->pose;
}

} /* extern "C" */
