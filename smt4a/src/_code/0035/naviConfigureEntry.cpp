/* NON_MATCHING: compiler allocates the stack frame and coalesces incoming stack loads before the null guard; retail returns before its prologue and uses three separate VFP loads. */
#include "shard/NaviMain.h"

extern "C" {
void FUN_004883c8(NaviTransitionState *navigation, s32 slot, s32 active,
                  s32 category, s32 entry, s32 x, s32 y, s32 z, s32 highlighted);

// Configure an active navigation entry when the navigation screen is allocated.
void naviConfigureEntry(s32 slot, s32 category, s32 entry, s32 x, s32 y, s32 z,
                  s32 highlighted)
{
    if (g_naviMain == NULL) {
        return;
    }
    FUN_004883c8(&g_naviMain->stateView.transition, slot, 1, category, entry,
                 x, y, z, highlighted);
}
}
