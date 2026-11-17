#include "ui/UiSpriteApi.h"
#include "common.h"
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

s32 surfaceCopy(AsdTexture *dest, AsdTexture *src);
s32 FUN_002bfadc(s32 arg, AsdTexture *surface);

/* Second ENCEFF set's left capture: renders the scene into the left surface once, then halves the surface size. */
s32 titleCaptureReadySurfaceOnce(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);

    if (work->encEffEnabled == 0) {
        return 0;
    }
    if (work->encEffCapturedLeft != 0) {
        return 0;
    }
    if (work->encEffAlternate == 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    work->surfaceLeft->dimensions.width = 0x200;
    work->surfaceLeft->dimensions.height = 0x200;
    work->encEffCaptureResult = FUN_002bfadc(0, work->surfaceLeft);
    surfaceCopy(work->surfaceLeft, work->surfaceLeft);
    work->surfaceLeft->dimensions.width >>= 1;
    work->surfaceLeft->dimensions.height >>= 1;
    work->encEffCapturedLeft = 1;
    return 0;
}

} /* extern "C" */
