/* NON_MATCHING: the gated return and float-to-integer coordinate load schedule differ. */
#include "map/mapIf.h"
#include "shard/W5_W5Match7_SceneState.h"

extern "C" {
void FUN_002342d0(s32 first, s32 second);
void FUN_002b6cb0();
void FUN_002b968c(MapIfGlobalsA *globals);
void FUN_002cf8e4();
void transitionDrawExpandingImages(u32 frame);
extern MapIfGlobalsA g_mapIf;

u32 FUN_0029d760()
{
    MapIfStateA *state = g_mapIf.state;
    if (g_gameState.controllerFlags.secondary == 0) {
        FUN_002b968c(&g_mapIf);
        if (g_gameState.mode < 100) {
            FUN_002b6cb0();
            FUN_002cf8e4();
        }
        if (state->unkCD08) {
            transitionDrawExpandingImages(state->unkCD0C);
            ++state->unkCD0C;
        }
        FUN_002342d0((s32)state->unkCD20, (s32)state->unkCD24);
    }
    return 0;
}
}
