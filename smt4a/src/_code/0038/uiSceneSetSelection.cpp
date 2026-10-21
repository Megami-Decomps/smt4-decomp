#include "common.h"

extern "C" {

struct SceneState {
    /* 0x0000 */ u8 unk0000[0x4b1e];
    /* 0x4b1e */ s16 selection;
};

void uiSceneSetSelection(SceneState *state, s16 selection)
{
    state->selection = selection;
}

} /* extern "C" */
