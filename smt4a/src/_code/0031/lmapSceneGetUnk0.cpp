#include "map/lmapMain.h"

extern "C" {

extern LmapSceneA *g_lmapScene;

u32 lmapSceneGetUnk0(void)
{
    return g_lmapScene->unk000;
}

} /* extern "C" */
