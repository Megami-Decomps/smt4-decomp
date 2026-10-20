#include "map/lmapMain.h"

extern "C" {

extern LmapScene *g_lmapScene;

/* The scene's embedded object. */
LmapObj *lmapSceneGetObj(void)
{
    return &g_lmapScene->obj;
}

} /* extern "C" */
