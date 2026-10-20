#include "map/lmapMain.h"

extern "C" {

extern LmapSceneA *g_lmapScene;

void FUN_00379344(u32 value)
{
    LmapSceneA *scene = g_lmapScene;

    g_lmapScene->unk228 = value;
    scene->unk22C = 1;
}

} /* extern "C" */
