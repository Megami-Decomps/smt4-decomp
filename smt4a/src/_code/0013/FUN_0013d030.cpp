#include "frame_tex/FrameTexA.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {

u8 gxCopyFramebufferToSurface(u32 mode, AsdTexture *surface);
s32 stateValuesGetBySelector(void);


/* "ZanCR" capture: captures the right screen into the afterimage's right texture when the layer is ready, capture is unblocked and no state selector is active. */
s32 FUN_0013d030(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);

    work->zan.capturedRight = 0;
    if (stateValuesGetBySelector() != 0 || !work->zan.enabled) {
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
    work->zanSurfaceRight->dimensions.width = 512;
    work->zanSurfaceRight->dimensions.height = 512;
    work->zan.captureResult = gxCopyFramebufferToSurface(0, work->zanSurfaceRight);
    work->zan.capturedRight = 1;
    return 0;
}

} /* extern "C" */
