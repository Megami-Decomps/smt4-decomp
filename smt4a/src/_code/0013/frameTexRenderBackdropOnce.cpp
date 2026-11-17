#include "common.h"
#include "frame_tex/FrameTexA.h"
#include "camp/RenderCtxA.h"

extern "C" {

extern int surfaceCopy(AsdTexture *dst, AsdTexture *src);
extern int gxCopyFramebufferToSurface(int arg, AsdTexture *surface);

/* "CAMPCL" capture: renders the scene into the left texture once, then halves the texture size. */
s32 frameTexRenderBackdropOnce(u32 handle)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(handle);

    if (work->campEnabled == 0)
        return 0;
    if (work->campCapturedLeft != 0)
        return 0;
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    work->surfaceLeft->dimensions.width = 0x200;
    work->surfaceLeft->dimensions.height = 0x200;
    work->campCaptureResult = gxCopyFramebufferToSurface(0, work->surfaceLeft);
    surfaceCopy(work->surfaceLeft, work->surfaceLeft);
    work->surfaceLeft->dimensions.width >>= 1;
    work->surfaceLeft->dimensions.height >>= 1;
    work->campCapturedLeft = 1;
    return 0;
}

} /* extern "C" */
