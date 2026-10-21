#include "common.h"

extern "C" {

struct SceneState {
    /* 0x0000 */ u8 unk0000[0x38ba];
    /* 0x38ba */ u8 selection;
};

void uiSceneMarkSelection(SceneState *state)
{
    state->selection = 1;
}

} /* extern "C" */
