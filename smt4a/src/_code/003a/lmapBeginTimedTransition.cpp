#include "shard/W5_W5Match7_SceneState.h"

struct LmapTransitionState {
    u32 unk00;       // 0x00
    u32 state;       // 0x04
    u32 substate;    // 0x08
    u8 unk0c[0x48]; // 0x0c
    u32 transition;  // 0x54
    f32 timer;       // 0x58
};

extern "C" {
void FUN_00313648(u32 event);
void FUN_003d54f8(u32 index, s32 frames);
void FUN_00303460(u32 state);

// Start the scene transition, configure both delays and queue its next state.
void lmapBeginTimedTransition()
{
    FUN_00313648(31);
    LmapTransitionState* scene = (LmapTransitionState*)g_lmapScene;
    scene->state = 8;
    scene->substate = 0;
    FUN_003d54f8(0, 10);
    FUN_003d54f8(1, 10);
    scene = (LmapTransitionState*)g_lmapScene;
    scene->transition = 35;
    scene->timer = 0.0f;
    FUN_00303460(22);
}
}
