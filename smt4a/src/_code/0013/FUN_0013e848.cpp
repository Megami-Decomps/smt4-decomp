#include "frame_tex/FrameTexA.h"
#include "camp/RenderCtxA.h"

extern "C" {

u8 gxCopyFramebufferToSurface(u32 mode, AsdTexture *surface);
s32 stateValuesGetBySelector(u32 selector);

/* "XFADECR" capture: captures the right screen once (512x512 into the right texture) while the cross-fade is enabled; a state selector marks it pending. */
s32 FUN_0013e848(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);

    if (stateValuesGetBySelector(0) != 0) {
        work->fadePendingRight = 1;
        return 0;
    }
    if (!work->fadeEnabled || work->fadeCapturedRight || work->fadePendingRight) {
        return 0;
    }
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    work->surfaceRight->dimensions.width = 512;
    work->surfaceRight->dimensions.height = 512;
    work->fadeCaptureResult = gxCopyFramebufferToSurface(0, work->surfaceRight);
    work->fadeCapturedRight = 1;
    return 0;
}

} /* extern "C" */
