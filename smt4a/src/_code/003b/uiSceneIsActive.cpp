#include "common.h"

extern "C" {

struct SceneState {
    /* 0x000 */ u8 unk000[0x2DC];
    /* 0x2DC */ u8 sprite[0x8C];
};

s32 uiSpriteGetCompletionState(const void *sprite);

s32 uiSceneIsActive(const SceneState *scene)
{
    return uiSpriteGetCompletionState(scene->sprite) != 0;
}

} /* extern "C" */
