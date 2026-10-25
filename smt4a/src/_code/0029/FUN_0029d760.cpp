/* NON_MATCHING: unkCD08 is now s8 (literal offset) and the gated return matches; the state/global loads are scheduled after the gate where retail loads them before the branch, and the (s32) coordinate pair is two vldr instead of one vldmia. */
#include "map/mapIf.h"
#include "shard/W5_W5Match7_SceneState.h"

extern "C" {
void FUN_002342d0(s32 first, s32 second);
void FUN_002b6cb0();
void FUN_002b968c(MapIfGlobalsA *globals);
void FUN_002cf8e4();
void transitionDrawExpandingImages(u32 frame);
extern MapIfGlobalsA g_mapIf;

s32 FUN_0029d760(u32 handle)
{
    if (g_gameState.controllerFlags.secondary != 0) {
        return 0;
    }
    MapIfGlobalsA *globals = &g_mapIf;
    MapIfStateA *state = globals->state;
    FUN_002b968c(globals);
    if (g_gameState.mode < 100) {
        FUN_002b6cb0();
        FUN_002cf8e4();
    }
    if (state->unkCD08) {
        transitionDrawExpandingImages(state->unkCD0C);
        ++state->unkCD0C;
    }
    FUN_002342d0((s32)state->unkCD20, (s32)state->unkCD24);
    return 0;
}
}
