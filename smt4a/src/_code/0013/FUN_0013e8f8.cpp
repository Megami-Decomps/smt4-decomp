/* NON_MATCHING: the g_frameTex clear now matches; retail returns through a shared `mov r0, #0` (the cleared path branches to it, the `!shown` test straight to the pop), built gives the cleared path its own return. */
#include "common.h"
#include "camp/RenderCtxA.h"
#include "frame_tex/FrameTexA.h"
#include "camp/RenderCtx.h"

/* Frames a fade-out lasts before the frame texture is released. */
#define FRAME_TEX_FADE_OUT_FRAMES 30

extern "C" {

void FUN_0014b01c(s32 value);

/* "ENCEFFDL" draw: advances the ENCEFF fade in or out, clearing the effect once a fade-out ends. */
u8 FUN_0013e8f8(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);

    if (!work->encEffEnabled) {
        return 0;
    }
    if (!work->encEffCapturedLeft) {
        return 0;
    }
    if (work->encEffFadeActive) {
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        if (work->encEffFadeInFrames > 0 || work->encEffFadeOutFrames > 0) {
            work->encEffFrame++;
            if (work->encEffFadeOutFrames <= 0) {
                work->encEffFadeInFrames++;
            } else {
                work->encEffFadeOutFrames++;
                if (work->encEffFadeOutFrames > FRAME_TEX_FADE_OUT_FRAMES) {
                    g_frameTex->encEffFadeActive = 0;
                    g_frameTex->encEffFadeInFrames = 0;
                    g_frameTex->encEffFadeOutFrames = 0;
                    g_frameTex->encEffFrame = 0;
                    g_frameTex->encEffEnabled = 0;
                    g_frameTex->encEffCapturedLeft = 0;
                    g_frameTex->encEffCapturedRight = 0;
                    g_frameTex->encEffPendingRight = 0;
                    g_frameTex->unk144C = 0;
                    return 0;
                }
            }
            FUN_0014b01c(1);
        }
    }
    return 0;
}

} /* extern "C" */
