#include "frame_tex/FrameTexA.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {

u8 gxCopyFramebufferToSurface(u32 mode, AsdTexture *surface);


/* "ZanCL" capture: captures the left screen into the afterimage's left texture once the layer is ready and nothing blocks it. */
s32 FUN_0013cf80(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);

    work->zan.capturedLeft = 0;
    if (!work->zan.enabled) {
        return 0;
    }
    if (!work->zan.ready) {
        return 0;
    }
    if (work->sceneSurface == NULL) {
        return 0;
    }
    if (work->captureBlocked || work->campEnabled) {
        return 0;
    }
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    work->zanSurfaceLeft->dimensions.width = 512;
    work->zanSurfaceLeft->dimensions.height = 512;
    work->zan.captureResult = gxCopyFramebufferToSurface(0, work->zanSurfaceLeft);
    work->zan.capturedLeft = 1;
    return 0;
}

} /* extern "C" */
