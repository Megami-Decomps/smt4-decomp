#include "common.h"

/* The state fields shared by the scene objects (flags, state, substate, previous state). */
struct SceneStateView {
    /* 0x00 */ u32 flags;
    /* 0x04 */ s32 state;
    /* 0x08 */ u32 substate;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ s32 previousState;
};

static __inline void sceneEnterState(SceneStateView *scene, s32 next)
{
    scene->previousState = scene->state;
    scene->state = next;
    scene->substate = 0;
}

extern "C" {

/* Virtual slot: marks the scene active and enters command state 21, remembering the previous state. */
void FUN_00497044(SceneStateView *scene)
{
    scene->flags |= 1;
    sceneEnterState(scene, 21);
}

} /* extern "C" */
