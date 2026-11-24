#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "frame_tex/FrameTex.h"
#include "shard/JobWork.h"

enum { FRAME_TEX_FADE_OUT_FRAMES = 30 };

extern "C" {

void FUN_001137fc(s32 mode);

/* Advances and draws the left-screen encounter fade, clearing its state when fade-out ends. */
s32 frameTexAdvanceEncounterFade(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);

    if (!work->encEffEnabled) {
        return 0;
    }
    if (!work->encEffCapturedLeft) {
        return 0;
    }
    if (work->encEffFadeActive) {
        renderCtxSelectStereoLayout(g_titleScene);
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
            } else {
                FUN_001137fc(1);
            }
        }
    }
    return 0;
}

} /* extern "C" */
