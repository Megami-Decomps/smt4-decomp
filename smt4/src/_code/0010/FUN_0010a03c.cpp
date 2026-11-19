/* NON_MATCHING: 17 lines from one instruction: armcc predicates the captured-left test into the enabled test
 * (ldrbne; cmpne), where retail branches on each and returns the zero flag in r0 directly; the rest shifts. */
#include "ui/UiSpriteApi.h"
#include "common.h"
#include "camp/RenderCtx.h"
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtxTitle.h"

/* Frames a fade-out lasts before the frame texture is released. */
#define FRAME_TEX_FADE_OUT_FRAMES 30

extern "C" {

void FUN_001137fc(s32 mode);

/* Job update of the frame texture fade: advances the fade-in or fade-out counter, and clears the state once a fade-out ends. */
u8 FUN_0010a03c(u32 job)
{
    FrameTexWork *tex = (FrameTexWork *)jobGetWork(job);

    if (tex->encEffEnabled == 0 || tex->encEffCapturedLeft == 0) {
        return 0;
    }
    if (tex->encEffFadeActive == 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    if (tex->encEffFadeInFrames <= 0 && tex->encEffFadeOutFrames <= 0) {
        return 0;
    }
    tex->encEffFrame++;
    if (tex->encEffFadeOutFrames > 0) {
        if (++tex->encEffFadeOutFrames > FRAME_TEX_FADE_OUT_FRAMES) {
            FrameTexWork *global = g_frameTex;
            global->encEffFadeActive = 0;
            global->encEffFadeInFrames = 0;
            global->encEffFadeOutFrames = 0;
            global->encEffFrame = 0;
            global->encEffEnabled = 0;
            global->encEffCapturedLeft = 0;
            global->encEffCapturedRight = 0;
            global->encEffPendingRight = 0;
            global->unkF98 = 0;
            return 0;
        }
    } else {
        tex->encEffFadeInFrames++;
    }
    FUN_001137fc(1);
    return 0;
}

} /* extern "C" */
