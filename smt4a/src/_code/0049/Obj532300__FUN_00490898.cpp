/* NON_MATCHING: retail computes the scene address before the position call and keeps it in r4, copies the position pair with two ldr/str pairs (the copy is overwritten right after), loads 1.0f separately from the sprite fade value and loads g_gameState once up front; this build copies with ldrd/strd, shares the 1.0f in s16 and reloads g_gameState. */
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "game/GameStateA.h"
#include "map/NavigationFadeWork.h"

extern "C" {
void uiPlayGatedActionFeedback(void);
void uiSpriteAdvanceAnimation(UiAnimatedSprite *sprite, f32 value);
NavigationPoint *sub68OwnerGetBlock60(void *scene);
void naviMainSetValuePair(void *scene, const NavigationPoint *position);
void FUN_002d22c0(s32 value);
void lmapEnableSceneState(void);
void dialogClose(s32 immediate);

// Navigation fade step: the first call plays the feedback sound; the second fades the sprites in
// and, when the last one finished, resets the cursor and moves on.
void _ZN9Obj53230012FUN_00490898Ev(NavigationFadeWork *work)
{
    switch (work->interpolation.progress.substep) {
    case 0:
        uiPlayGatedActionFeedback();
        work->interpolation.progress.substep = 1;
        return;
    case 1:
        for (s32 i = 0; i < 6; ++i) {
            uiSpriteAdvanceAnimation(&work->sprites[i], 1.0f);
        }
        uiSpriteAdvanceAnimation(&work->footerSprite, 1.0f);
        uiSpriteAdvanceAnimation(&work->headerSprite, 1.0f);
        if (uiSpriteGetCompletionState(&work->sprites[5]) != 0) {
            if (g_gameState.paused) {
                NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                point.x = 1.0f;
                point.y = 1.0f;
                naviMainSetValuePair(work->scene, &point);
                *(u8 *)&work->interpolation.unk02C[0x38] = (u8)work->cursorMode;
                work->flag7B90 = 1;
                work->flag7B91 = 1;
                if (g_gameState.alternateNaviMap) {
                    FUN_002d22c0(0);
                    lmapEnableSceneState();
                    return;
                }
                FUN_002d22c0(0);
                dialogClose(1);
            }
            work->interpolation.progress.step = 2;
            work->interpolation.progress.substep = 0;
        }
        return;
    }
}

} /* extern "C" */
