#include "frame_tex/FrameTexA.h"
#include "camp/RenderCtxA.h"

extern "C" {

s32 stateValuesGetBySelector(u32 arg);
u8 gxCopyFramebufferToSurface(u32 arg, AsdTexture *surface);
void surfaceCopy(AsdTexture *dest, AsdTexture *source);

/* "CAMPCR" capture: marks the right capture pending while a state selector is set; otherwise, once the CAMP effect is enabled, captures the right screen into the right texture at half size. Always returns 0. */
s32 jobRenderOnce(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);

    if (stateValuesGetBySelector(0) != 0) {
        work->campPendingRight = 1;
    } else if (work->campEnabled == 0) {
        return work->campEnabled;
    } else if (work->campCapturedRight == 0 && work->campPendingRight == 0) {
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        work->surfaceRight->dimensions.width = 0x200;
        work->surfaceRight->dimensions.height = 0x200;
        work->campCaptureResult = gxCopyFramebufferToSurface(0, work->surfaceRight);
        surfaceCopy(work->surfaceRight, work->surfaceRight);
        work->surfaceRight->dimensions.width = work->surfaceRight->dimensions.width >> 1;
        work->surfaceRight->dimensions.height = work->surfaceRight->dimensions.height >> 1;
        work->campCapturedRight = 1;
    }
    return 0;
}

} /* extern "C" */
