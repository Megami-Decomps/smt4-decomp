#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {
void naviSetSecondaryMarkerSlot(NaviTransitionState* state, u32 index, s32 mode,
                  s32 map, s32 room, s32 x, s32 y, s32 z, s32 visible);

void naviConfigureEntry(u32 index, s32 map, s32 room, s32 x, s32 y, s32 z,
                  s32 visible)
{
    NaviMainA *navi = g_naviMain;
    if (navi == NULL) {
        return;
    }
    naviSetSecondaryMarkerSlot(&navi->transition, index, 1,
                  map, room, x, y, z, visible);
}
} /* extern "C" */
