#include "shard/W5_W5Match7_SceneState.h"

extern "C" {


void lmapSceneSetPosition(f32 x, f32 y, f32 z, f32 w)
{
    g_lmapScene->effectPosition[0] = x;
    g_lmapScene->effectPosition[1] = y;
    g_lmapScene->effectPosition[2] = z;
    g_lmapScene->effectPosition[3] = w;
}

} /* extern "C" */
