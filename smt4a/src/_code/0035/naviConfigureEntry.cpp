#include "shard/NaviMain.h"

extern "C" {
extern NaviMainA *g_naviMain;
void FUN_004883c8(NaviTransitionState* state, u32 index, s32 mode,
                  s32 map, s32 room, s32 x, s32 y, s32 z, s32 visible);

void naviConfigureEntry(u32 index, s32 map, s32 room, s32 x, s32 y, s32 z,
                  s32 visible)
{
    NaviMainA *navi = g_naviMain;
    if (navi == NULL) {
        return;
    }
    FUN_004883c8(&navi->transition, index, 1,
                  map, room, x, y, z, visible);
}
} /* extern "C" */
