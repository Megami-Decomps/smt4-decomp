#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "frame_tex/FrameTexA.h"
#include "shard/JobWork.h"

enum { FRAME_TEX_FADE_OUT_FRAMES = 30 };

extern "C" {

void FUN_0014b01c(s32 value);

/* Advances and draws the left-screen encounter fade, clearing its state when fade-out ends. */
s32 frameTexAdvanceEncounterFade(u32 job)
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
            ++work->encEffFrame;
            bool ended = false;
            if (work->encEffFadeOutFrames <= 0) {
                ++work->encEffFadeInFrames;
            } else {
                ++work->encEffFadeOutFrames;
                ended = work->encEffFadeOutFrames > FRAME_TEX_FADE_OUT_FRAMES;
            }
            if (ended) {
                g_frameTex->encEffFadeActive = 0;
                g_frameTex->encEffFadeInFrames = 0;
                g_frameTex->encEffFadeOutFrames = 0;
                g_frameTex->encEffFrame = 0;
                g_frameTex->encEffEnabled = 0;
                g_frameTex->encEffCapturedLeft = 0;
                g_frameTex->encEffCapturedRight = 0;
                g_frameTex->encEffPendingRight = 0;
                g_frameTex->unk144C = 0;
            } else {
                FUN_0014b01c(1);
            }
        }
    }
    return 0;
}

} /* extern "C" */
