#include "common.h"
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

void FUN_001137fc(s32 arg);
void renderCtxSelectStereoLayout(RenderCtx *scene);
s32 stateValuesGetBySelector(s32 arg);

/* ENCEFF right draw: once the effect is enabled, its left capture is done and its fade is active, draws it on the right screen unless a state selector is set. Returns 0. */
u8 FUN_0010a110(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);

    if (work->encEffEnabled == 0) {
        return 0;
    }
    if (work->encEffCapturedLeft == 0) {
        return 0;
    }
    if (stateValuesGetBySelector(0) == 0 && work->encEffFadeActive != 0) {
        renderCtxSelectStereoLayout(g_titleScene);
        FUN_001137fc(0);
    }
    return 0;
}

} /* extern "C" */
