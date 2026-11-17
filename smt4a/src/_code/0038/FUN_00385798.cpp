#include "map/LmapGlobals.h"

extern "C" {


void FUN_00385798(u32 value)
{
    LmapSceneA *scene = g_lmapScene;

    g_lmapScene->unk238 = value;
    scene->unk23C = 1;
}

} /* extern "C" */
