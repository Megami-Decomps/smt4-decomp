/* NON_MATCHING: retail uses `ldrb r1, [r0, #15]` where armcc emits `ldrb r1, [r1, r0]`. */
#include "common.h"

extern "C" {

struct SceneState {
    /* 0x0000 */ u8 unk0000[0x4b0f];
    /* 0x4b0f */ u8 active;
    /* 0x4b10 */ u8 unk4b10[0xe];
    /* 0x4b1e */ s16 selection;
};

s32 uiSceneHasSelection(const SceneState *scene)
{
    return scene->active != 0 && scene->selection != -1;
}

} /* extern "C" */
