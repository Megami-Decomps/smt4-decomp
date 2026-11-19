#include "ui/UiSpriteApi.h"
#include "common.h"
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

/* Whether the first ENCEFF set still has to capture the left screen. */
static __inline int encEffLeftCapturePending(FrameTexWork *work)
{
    return work->encEffEnabled != 0 && work->encEffCapturedLeft == 0 && work->encEffAlternate == 0;
}

extern int surfaceCopy(AsdTexture *dst, AsdTexture *src);
extern int gxCopyFramebufferToSurface(int arg, AsdTexture *surface);

/* First ENCEFF set's left capture: renders the scene into the left surface once, then halves the surface size. */
u32 titleBackdropRender(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);

    if (!encEffLeftCapturePending(work)) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    work->surfaceLeft->dimensions.width = 0x200;
    work->surfaceLeft->dimensions.height = 0x200;
    work->encEffCaptureResult = gxCopyFramebufferToSurface(0, work->surfaceLeft);
    surfaceCopy(work->surfaceLeft, work->surfaceLeft);
    work->surfaceLeft->dimensions.width >>= 1;
    work->surfaceLeft->dimensions.height >>= 1;
    work->encEffCapturedLeft = 1;
    return 0;
}

} /* extern "C" */
