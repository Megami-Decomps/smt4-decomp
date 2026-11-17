#include "common.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"
#include "frame_tex/FrameTexA.h"

/* Whether the first ENCEFF set still has to capture the right screen. */
static __inline bool encEffRightCapturePending(const FrameTexWorkA *work)
{
    return work->encEffEnabled != 0 && work->encEffCapturedRight == 0 && work->encEffPendingRight == 0 &&
           work->encEffAlternate == 0;
}

extern "C" {

s32 stateValuesGetBySelector(u32 selector);
s32 gxCopyFramebufferToSurface(s32 mode, AsdTexture *surface);
s32 surfaceCopy(AsdTexture *destination, AsdTexture *source);

/* "ENCEFFCR" capture of the first set: captures the right screen once (at half size), or marks the capture pending while a state selector is set. */
u32 surfaceCaptureUpdate(u32 process)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(process);

    if (stateValuesGetBySelector(0) != 0) {
        work->encEffPendingRight = 1;
    } else if (encEffRightCapturePending(work)) {
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        work->surfaceRight->dimensions.width = 512;
        work->surfaceRight->dimensions.height = 512;
        work->encEffCaptureResult = static_cast<u8>(gxCopyFramebufferToSurface(0, work->surfaceRight));
        surfaceCopy(work->surfaceRight, work->surfaceRight);
        work->surfaceRight->dimensions.width >>= 1;
        work->surfaceRight->dimensions.height >>= 1;
        work->encEffCapturedRight = 1;
    }
    return 0;
}

}
