#include "shard/W5_W5Match7_SceneState.h"

extern "C" {

struct LmapMainState {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u32 map;
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u32 area;
};
extern LmapMainState *g_lmapMainState;

void lmapSnapshotTransitionState(void)
{
    LmapMainState *state = g_lmapMainState;
    g_gameState.transitionActive = 1;
    g_gameState.sourceMap = state->map;
    g_gameState.sourceArea = state->area;
    g_gameState.sourceObjectId = g_gameState.currentObjectId;
    g_gameState.sourcePosition = g_lmapScene->position;
    g_gameState.sourceHeading = g_lmapScene->heading;
    g_gameState.destinationMap = state->map;
    g_gameState.destinationArea = state->area;
    g_gameState.destinationPosition = g_lmapScene->position;
    g_gameState.destinationHeading = g_lmapScene->heading;
}

} /* extern "C" */
