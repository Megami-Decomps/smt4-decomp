#include "frame_tex/FrameTexA.h"
#include "camp/RenderCtxA.h"

extern "C" {

extern void FUN_00150d38(s32 arg);

/* "ZanDL" draw: draws the afterimage layer on the left screen once its left capture is done and the scene texture exists, unless capture is blocked. */
s32 FUN_0013c764(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);

    if (work->zan.enabled != 0 && work->zan.ready != 0 && work->zan.capturedLeft != 0 &&
        work->sceneSurface != NULL) {
        if (work->captureBlocked != 0)
            return 0;
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        FUN_00150d38(1);
        return 0;
    }
    return 0;
}

} /* extern "C" */
