#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard0048.h"

extern "C" {

static __inline void naviMarkerEnable(NaviMainA *navi, s32 slot, u32 id, f32 x, f32 y, f32 z, u32 sub, s32 flagged)
{
    naviSetSpatialMarkerSlot((Block66Owner *)navi->panel, slot, 1, id, x, y, z, sub, flagged);
}

/* Enables map marker `slot` of the navigation screen at (x, y, z), if the navigation screen exists. */
void naviEnableSpatialMarkerSlot(s32 slot, u32 id, f32 x, f32 y, f32 z, u32 sub, s32 flagged)
{
    if (NaviMainA *navi = g_naviMain) {
        naviMarkerEnable(navi, slot, id, x, y, z, sub, flagged);
    }
}
}
