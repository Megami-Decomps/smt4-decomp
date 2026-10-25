#include "common.h"

extern "C" {

/* The scene's selection block (at 0x4b00). */
struct SceneSelection {
    /* 0x00 */ u8 unk00[0xf];
    /* 0x0f */ u8 active;
    /* 0x10 */ u8 unk10[0xe];
    /* 0x1e */ s16 selection;
};

struct SceneState {
    /* 0x0000 */ u8 unk0000[0x4b00];
    /* 0x4b00 */ SceneSelection selection;
};

s32 uiSceneHasSelection(const SceneState *scene)
{
    const SceneSelection *block = &scene->selection;
    return block->active != 0 && block->selection != -1;
}

} /* extern "C" */
