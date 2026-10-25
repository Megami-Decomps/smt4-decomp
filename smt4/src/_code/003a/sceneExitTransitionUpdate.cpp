#include "ui/SceneExitTransition.h"

extern "C" {
void pointConvertToFloat(f32 *position, s32 x, s32 y);
void FUN_00233240(void *transition, s32 mode);
void FUN_00297684(void *script);
void FUN_0029ee6c(s32 mode, u32 color);
void *lmapSceneGetScript(void);
s32 FUN_002bf818(SceneSprite *animation);
s8 uiSpriteGetCompletionState(const void *record);
s32 objSlotsAllEmpty(void *script);
s32 vec2GetYInt(const SceneSprite *animation);
s32 vec2GetXInt(const SceneSprite *animation);

/* Finish the animated exit, then wait for the scene script's objects to disappear. */
void sceneExitTransitionUpdate(SceneExitTransition *work)
{
    if (lmapSceneGetScript() != NULL)
        FUN_00297684(lmapSceneGetScript());

    switch (work->phase) {
    case 0:
        FUN_00233240(work->transition, 1);
        work->phase = 1;
        FUN_0029ee6c(0, 0x323232ff);
        return;
    case 1: {
        SceneSprite *animation = &work->animation;
        FUN_002bf818(animation);
        s32 y = vec2GetYInt(animation);
        s32 x = vec2GetXInt(animation);
        pointConvertToFloat(work->position, x, y);
        if (uiSpriteGetCompletionState(animation) == 0)
            return;
        work->flags &= ~0xe00;
        if (lmapSceneGetScript() == NULL) {
            work->state = 18;
            work->phase = 0;
            return;
        }
        work->phase = 2;
        break;
    }
    case 2:
        break;
    default:
        return;
    }
    if (objSlotsAllEmpty(lmapSceneGetScript())) {
        work->state = 18;
        work->phase = 0;
    }
}
}
