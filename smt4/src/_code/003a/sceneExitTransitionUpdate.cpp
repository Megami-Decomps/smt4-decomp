#include "ui/SceneExitTransition.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void pointConvertToFloat(f32 *position, s32 x, s32 y);
void uiSceneApplySpritePreset(void *transition, s32 mode);
void lmapPlayerModelDestroy(void *script);
void buttonHelpSetText(s32 mode, u32 color);
void *lmapSceneGetScript(void);
s32 objSlotsAllEmpty(void *script);

/* Finish the animated exit, then wait for the scene script's objects to disappear. */
void sceneExitTransitionUpdate(SceneExitTransition *work)
{
    if (lmapSceneGetScript() != NULL)
        lmapPlayerModelDestroy(lmapSceneGetScript());

    switch (work->phase) {
    case 0:
        uiSceneApplySpritePreset(work->transition, 1);
        work->phase = 1;
        buttonHelpSetText(0, 0x323232ff);
        return;
    case 1: {
        SceneSprite *animation = &work->animation;
        uiSpriteAdvanceAnimation((UiSpriteState *)animation);
        s32 y = vec2GetYInt((const UiSpriteState *)animation);
        s32 x = vec2GetXInt((const UiSpriteState *)animation);
        pointConvertToFloat(work->position, x, y);
        if (uiSpriteGetCompletionState((const UiSpriteState *)animation) == 0)
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
