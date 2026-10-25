#include "common.h"

extern "C" {

struct ScenePanel {
    /* 0x00 */ u8 unk00[0xe8];
    /* 0xe8 */ u8 flags[5];
};

struct SceneState {
    /* 0x0000 */ u8 unk0000[0x4100];
    /* 0x4100 */ ScenePanel panel;
};

s32 uiSceneAreFlagsClear(const SceneState *state)
{
    const ScenePanel *panel = &state->panel;
    return panel->flags[0] == 0 && panel->flags[1] == 0 &&
        panel->flags[2] == 0 && panel->flags[3] == 0 && panel->flags[4] == 0;
}

} /* extern "C" */
