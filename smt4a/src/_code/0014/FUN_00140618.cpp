#include "frame_tex/FrameTexA.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {

void *stateValuesGetBySelector(u32 selector);
u8 gxCopyFramebufferToSurface(u32 selector, AsdTexture *surface);
void surfaceCopy(AsdTexture *destination, AsdTexture *source);

/* "ENCEFFCR" capture of the second set: captures the right screen once (at half size), or marks the capture pending while a state selector is set. */
s32 FUN_00140618(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);
    if (stateValuesGetBySelector(0) != 0) {
        work->encEffPendingRight = 1;
        return 0;
    }
    if (!work->encEffEnabled) {
        return 0;
    }
    if (work->encEffCapturedRight) {
        return 0;
    }
    if (work->encEffPendingRight) {
        return 0;
    }
    if (!work->encEffAlternate) {
        return 0;
    }
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    work->surfaceRight->dimensions.width = 512;
    work->surfaceRight->dimensions.height = 512;
    work->encEffCaptureResult = gxCopyFramebufferToSurface(0, work->surfaceRight);
    surfaceCopy(work->surfaceRight, work->surfaceRight);
    work->surfaceRight->dimensions.width >>= 1;
    work->surfaceRight->dimensions.height >>= 1;
    work->encEffCapturedRight = 1;
    return 0;
}

}
