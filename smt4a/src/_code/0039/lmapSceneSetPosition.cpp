#include "map/LmapGlobals.h"

extern "C" {


void lmapSceneSetPosition(f32 x, f32 y, f32 z, f32 w)
{
    g_lmapScene->actorDestination.x = x;
    g_lmapScene->actorDestination.y = y;
    g_lmapScene->actorDestination.z = z;
    g_lmapScene->actorYaw = w;
}

} /* extern "C" */
