#include "map/MapIfGlobals.h"
#include "game/GameStateA.h"
#include "shard/W5_W5Match7_SceneState.h"

extern "C" {
void FUN_002342d0(s32 first, s32 second);
void mapEnemyDrawEdgeIndicators();
void mapDrawTargetDirectionIndicator();
void transitionDrawExpandingImages(u32 frame);

/* Draws the upper-screen map interface once the map has loaded. */
s32 MAPIF_DrawUp(u32 handle)
{
    MapIfStateA *state = g_mapIf.state;
    if (g_gameState.loading != 0) {
        return 0;
    }
    FUN_002b968c();
    if (g_gameState.mapId < 100) {
        mapEnemyDrawEdgeIndicators();
        mapDrawTargetDirectionIndicator();
    }
    if (state->unkCD08) {
        transitionDrawExpandingImages(state->unkCD0C);
        ++state->unkCD0C;
    }
    FUN_002342d0((s32)state->unkCD20, (s32)state->unkCD24);
    return 0;
}
} /* extern "C" */
