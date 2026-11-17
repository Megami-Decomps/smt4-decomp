#include "map/LmapGlobals.h"

extern "C" {


void FUN_00368374(u32 value)
{
    LmapSceneA *scene = g_lmapScene;

    g_lmapScene->movementState = value;
    scene->unk1D4 = 0;
}

} /* extern "C" */
