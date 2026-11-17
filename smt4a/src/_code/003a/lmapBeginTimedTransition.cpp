#include "map/LmapGlobals.h"

extern "C" {
void mapSetSceneState(s32 state);
void titleSetSlotValueState2(u32 index, s32 frames);
void FUN_00303460(u32 state);

// Start the scene transition, configure both delays and queue its next state.
void lmapBeginTimedTransition()
{
    mapSetSceneState(31);
    LmapSceneA *scene = g_lmapScene;
    scene->state = 8;
    scene->stateTime = 0;
    titleSetSlotValueState2(0, 10);
    titleSetSlotValueState2(1, 10);
    scene = g_lmapScene;
    scene->moveMode = 35;
    scene->moveSpeed = 0.0f;
    FUN_00303460(22);
}
}
