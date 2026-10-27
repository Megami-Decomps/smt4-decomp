#include "map/NavigationInterpolation.h"
#include "ui/UiSpriteState.h"

/* The navigation panel's work block (see NavigationFadeWork for the shared prefix). */
struct NavigationIntroWork {
    NavigationInterpolation interpolation;
    u8 unk164[0x368];
    /* 0x4CC */ u8 scene[0x18];
    /* 0x4E4 */ u8 spriteBank[0xAA4];
    /* 0xF88 */ UiSpriteState imageSprite;
    /* 0x1014 */ UiSpriteState keyframeSprite;
};
typedef char NavigationIntroWorkOffsets[
    offsetof(NavigationIntroWork, scene) == 0x4CC && offsetof(NavigationIntroWork, spriteBank) == 0x4E4 &&
    offsetof(NavigationIntroWork, imageSprite) == 0xF88 && offsetof(NavigationIntroWork, keyframeSprite) == 0x1014 ? 1 : -1];

extern "C" {
void uiSpriteBankApplyPreset(void *bank, s32 preset);
void uiSpriteSetKeyframe(UiSpriteState *sprite, s32 keyframe, s32 frame);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 keyframe, s32 frame);
void FUN_0048bdec(NavigationIntroWork *work);
NavigationPoint *sub68OwnerGetBlock60(void *scene);
u8 *lmapSceneGetObj(void *scene);
void naviMainSetValuePair(void *scene, const NavigationPoint *position);

// Navigation panel intro state: open the panel and reset the navigation value pair (0), wait for the
// animation (1), then finish (2).
void _ZN9Obj53230012FUN_0048a4c0Ev(NavigationIntroWork *work)
{
    switch (work->interpolation.progress.substep) {
    case 0: {
        work->interpolation.unk02C[0x32] = 0;
        work->interpolation.flags |= 0x1008;
        lmapSceneGetObj(work->scene);
        NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
        point.x = 0.0f;
        point.y = 0.0f;
        naviMainSetValuePair(work->scene, &point);
        uiSpriteBankApplyPreset(work->spriteBank, 0);
        uiSpriteBankApplyPreset(work->spriteBank, 1);
        uiSpriteSetImageKeyframe(&work->imageSprite, 1, 0);
        uiSpriteSetKeyframe(&work->keyframeSprite, 1, 0);
        work->interpolation.progress.substep = 1;
        break;
    }
    case 1:
        FUN_0048bdec(work);
        if ((work->interpolation.flags & 8) == 0)
            work->interpolation.progress.substep = 2;
        break;
    case 2:
        work->interpolation.progress.step = 2;
        work->interpolation.progress.substep = 0;
        break;
    }
}
}
