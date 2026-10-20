#include "map/lmapMain.h"

extern "C" {

extern LmapSceneA *g_lmapScene;

void FUN_00368374(u32 value)
{
    LmapSceneA *scene = g_lmapScene;

    g_lmapScene->unk1D0 = value;
    scene->unk1D4 = 0;
}

} /* extern "C" */
