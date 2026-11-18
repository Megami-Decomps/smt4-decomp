#include "map/LmapGlobals.h"

extern "C" {


/* The scene's embedded player pose. */
LmapScenePose *lmapSceneGetObj(const u16 *handle)
{
    return &g_lmapScene->pose;
}

} /* extern "C" */
