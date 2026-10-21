/* NON_MATCHING: retail uses `add r0, r0, #19200` where armcc emits `ldrb r1, [r1, r0]`. */
#include "common.h"

extern "C" {

struct SceneState {
    /* 0x0000 */ u8 unk0000[0x4b0f];
    /* 0x4b0f */ u8 active;
    /* 0x4b10 */ u8 unk4b10[0xc];
    /* 0x4b1c */ s8 state;
};

s32 uiSceneGetActiveState(const SceneState *scene)
{
    return scene->active != 0 ? scene->state : 1;
}

} /* extern "C" */
