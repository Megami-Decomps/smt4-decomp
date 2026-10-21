/* NON_MATCHING: stack argument loads are hoisted above the null guard and grouped into VFP transfers, preventing retail's shrink-wrapped return and scalar stack copies. */
#include "shard/NaviMain.h"

extern "C" {
void FUN_004882c0(NaviTransitionState* state, u32 index, s32 mode,
                  s32 map, s32 room, s32 x, s32 y, s32 z, s32 visible);

void FUN_00357b18(u32 index, s32 map, s32 room, s32 x, s32 y, s32 z,
                  s32 visible)
{
    if (g_naviMain == NULL) {
        return;
    }
    FUN_004882c0(&g_naviMain->stateView.transition, index, 1,
                  map, room, x, y, z, visible);
}
} /* extern "C" */
