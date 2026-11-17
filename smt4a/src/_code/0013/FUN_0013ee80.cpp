#include "frame_tex/FrameTexA.h"
#include "camp/RenderCtxA.h"

extern "C" {

u8 gxCopyFramebufferToSurface(u32 mode, AsdTexture *surface);
void surfaceCopy(AsdTexture *destination, AsdTexture *source);

/* Whether the first ENCEFF set still has to capture the left screen. */
static __inline bool encEffLeftCapturePending(const FrameTexWorkA *work)
{
    return work->encEffEnabled && !work->encEffCapturedLeft && !work->encEffAlternate;
}

/* "ENCEFFCL" capture of the first set: captures the left screen once into the 512x512 left texture,
 * then halves the texture's recorded size. */
u32 FUN_0013ee80(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);

    if (!encEffLeftCapturePending(work)) {
        return 0;
    }
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
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
