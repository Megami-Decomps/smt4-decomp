#include "common.h"

extern "C" {

struct ScenePanel {
    /* 0x00 */ u8 unk00[0xf];
    /* 0x0f */ u8 active;
    /* 0x10 */ u8 unk10[0xc];
    /* 0x1c */ s8 state;
};

struct SceneState {
    /* 0x0000 */ u8 unk0000[0x4b00];
    /* 0x4b00 */ ScenePanel panel;
};

s32 uiSceneGetActiveState(const SceneState *scene)
{
    const ScenePanel *panel = &scene->panel;
    return panel->active != 0 ? panel->state : 1;
}

} /* extern "C" */
