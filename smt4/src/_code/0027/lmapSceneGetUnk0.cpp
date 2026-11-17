#include "map/LmapGlobals.h"

extern "C" {


u32 lmapSceneGetUnk0(void)
{
    return g_lmapScene->mode;
}

} /* extern "C" */
