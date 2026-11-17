#include "ui/UiSpriteApi.h"
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

s32 surfaceCopy(AsdTexture *dest, AsdTexture *src);
s32 FUN_002bfadc(s32 arg, AsdTexture *surface);
s32 stateValuesGetBySelector(s32 arg);

/* Second ENCEFF set's right capture: captures the right screen once (at half size), or marks the capture pending while a state selector is set. */
s32 FUN_0010b2d0(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);

    if (stateValuesGetBySelector(0) != 0) {
        work->encEffPendingRight = 1;
        return 0;
    }
    if (work->encEffEnabled == 0) {
        return 0;
    }
    if (work->encEffCapturedRight != 0 || work->encEffPendingRight != 0) {
        return 0;
    }
    if (work->encEffAlternate == 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    work->surfaceRight->dimensions.width = 0x200;
    work->surfaceRight->dimensions.height = 0x200;
    work->encEffCaptureResult = FUN_002bfadc(0, work->surfaceRight);
    surfaceCopy(work->surfaceRight, work->surfaceRight);
    work->surfaceRight->dimensions.width >>= 1;
    work->surfaceRight->dimensions.height >>= 1;
    work->encEffCapturedRight = 1;
    return 0;
}

} /* extern "C" */
