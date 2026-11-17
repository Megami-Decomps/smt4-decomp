/* NON_MATCHING: VFP register allocation of the easing temporaries, the table-copy (ldm/str pairs vs retail's grouped stm) and the early-return merging differ; the transition logic is the same. */
#include "common.h"
#include "frame_tex/FrameTex.h"

extern "C" {

s32 uiSpriteAdvanceAnimation(void *widget);
void soundPlaySeUnpanned(u32 sound);
void FUN_0011340c(s32 arg);
s8 uiSpriteGetCompletionState(const UiSpriteState *sprite);

/* Ticks the menu's open/close transition: eases the two scales, steps the item animations and
 * their widgets, and finishes by notifying the controller. Always returns 0. */
s32 FUN_0010889c(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);

    if (work->campEnabled == 0) {
        return 0;
    }
    if (work->campCapturedLeft == 0) {
        return 0;
    }
    if (work->campActive == 0) {
        return 0;
    }
    /* The frame at which each item appears or disappears. */
    s8 frames[24] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 8, 8, 9};
    if (work->campClosing != 0) {
        work->campFrame++;
        if (work->campWidthScale > 0.25f) {
            work->campWidthScale -= 0.13f / work->campSpeed;
        }
        work->campWidthScale = work->campWidthScale > 0.25f ? work->campWidthScale : 0.25f;
        if (work->campHeightScale > 0.25f) {
            work->campHeightScale -= 0.11f / work->campSpeed;
        }
        work->campHeightScale = work->campHeightScale > 0.25f ? work->campHeightScale : 0.25f;
        for (s32 i = 0; i < 24; i++) {
            if (work->campFrame >= frames[i]) {
                work->campItems[i].visibility.active = 0;
            }
        }
        if (work->campItems[23].visibility.active == 0) {
            uiSpriteAdvanceAnimation(&work->campFrameWidget);
        }
    } else {
        if (work->campWidthScale < 0.38f) {
            work->campWidthScale += 0.13f / work->campSpeed;
        }
        work->campWidthScale = work->campWidthScale > 0.38f ? 0.38f : work->campWidthScale;
        if (work->campHeightScale < 0.36f) {
            work->campHeightScale += 0.11f / work->campSpeed;
        }
        work->campHeightScale = work->campHeightScale > 0.36f ? 0.36f : work->campHeightScale;
        if (uiSpriteAdvanceAnimation(&work->campFrameWidget) == 0) {
            FUN_0011340c(1);
            return 0;
        }
        work->campFrame++;
        if (work->campFrame == 1) {
            soundPlaySeUnpanned(0x100025A);
        }
        for (s32 i = 0; i < 24; i++) {
            if (work->campFrame >= frames[i]) {
                uiSpriteAdvanceAnimation(&work->campItems[i]);
            }
        }
        if (uiSpriteGetCompletionState(&work->campItems[23]) != 0) {
            uiSpriteAdvanceAnimation(&work->campCloseWidget);
        }
    }
    FUN_0011340c(1);
    return 0;
}

}
