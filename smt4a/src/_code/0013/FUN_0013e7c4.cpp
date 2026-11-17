#include "common.h"
#include "frame_tex/FrameTexA.h"
#include "camp/RenderCtxA.h"

extern "C" {

u8 gxCopyFramebufferToSurface(s32 mode, AsdTexture *target);

/* "XFADECL" capture: while the cross-fade is enabled and the left screen not yet captured, captures it into the 512x512 left texture. */
u32 FUN_0013e7c4(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);

    if (work->fadeEnabled != 0 && work->fadeCapturedLeft == 0) {
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        work->surfaceLeft->dimensions.width = 0x200;
        work->surfaceLeft->dimensions.height = 0x200;
        work->fadeCaptureResult = gxCopyFramebufferToSurface(0, work->surfaceLeft);
        work->fadeCapturedLeft = 1;
        return 0;
    }
    return 0;
}

} /* extern "C" */
