#include "map/LmapGlobals.h"
#include "ui/UiControl.h"
#include "map/MapSceneAccess.h"

extern "C" {


u32 lmapSceneGetUnk0(void)
{
    return g_lmapScene->mode;
}

} /* extern "C" */
