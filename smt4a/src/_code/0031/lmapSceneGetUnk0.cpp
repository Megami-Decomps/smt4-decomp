#include "map/lmapMain.h"
#include "util/BannerShow.h"

extern "C" {

extern LmapSceneA *g_lmapScene;

u32 lmapSceneGetUnk0(void)
{
    return g_lmapScene->mainState;
}

} /* extern "C" */
