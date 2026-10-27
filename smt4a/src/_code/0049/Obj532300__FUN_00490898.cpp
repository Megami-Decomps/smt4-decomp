/* NON_MATCHING: retail computes the scene address before the position call and keeps it in r4, copies the position pair with two ldr/str pairs (the copy is overwritten right after), loads 1.0f separately from the sprite fade value and loads g_gameState once up front; this build copies with ldrd/strd, shares the 1.0f in s16 and reloads g_gameState. */
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "map/NavigationFadeWork.h"

struct GameStateFade {
    /* 0x000 */ u8 unk000[0x21];
    /* 0x021 */ u8 fadeInDialog;
    /* 0x022 */ u8 unk022[0x43E];
    /* 0x460 */ u8 sceneStateEnabled;
};

extern "C" {
extern GameStateFade g_gameState;
void uiPlayGatedActionFeedback(void);
void FUN_00163aa4(UiAnimatedSprite *sprite, f32 value);
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
            FUN_00163aa4(&work->sprites[i], 1.0f);
        }
        FUN_00163aa4(&work->footerSprite, 1.0f);
        FUN_00163aa4(&work->headerSprite, 1.0f);
        if (uiSpriteGetCompletionState(&work->sprites[5]) != 0) {
            if (g_gameState.fadeInDialog) {
                NavigationPoint point = *sub68OwnerGetBlock60(work->scene);
                point.x = 1.0f;
                point.y = 1.0f;
                naviMainSetValuePair(work->scene, &point);
                *(u8 *)&work->interpolation.unk02C[0x38] = (u8)work->cursorMode;
                work->flag7B90 = 1;
                work->flag7B91 = 1;
                if (g_gameState.sceneStateEnabled) {
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
