#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "common.h"
#include "map/MapSceneAccess.h"
#include "shard/Shard0048.h"

extern "C" {

/* Clears a spatial marker slot if the navigation screen exists. */
void naviMainQueueRequest(u32 id)
{
    if (g_naviMain != NULL) {
        naviSetSpatialMarkerSlot((Block66Owner *)g_naviMain->panel, id, 0, 0, 0.0f, 0.0f, 0.0f, 0, 0);
    }
}

} /* extern "C" */
