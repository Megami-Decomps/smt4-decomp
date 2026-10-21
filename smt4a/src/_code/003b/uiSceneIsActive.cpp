/* NON_MATCHING: retail uses `add r0, r0, #732` where armcc emits `ldrb r0, [r0, #870]`. */
#include "common.h"

extern "C" {

struct SceneState {
    /* 0x000 */ u8 unk000[0x366];
    /* 0x366 */ s8 active;
};

s32 uiSceneIsActive(const SceneState *scene)
{
    return scene->active != 0;
}

} /* extern "C" */
