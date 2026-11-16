#include "shard/JobWork.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {

u8 gxCopyFramebufferToSurface(u32 mode, JobSurface *surface);


/* Starts a 512x512 capture into the job's surface once one is requested and nothing blocks it. */
s32 FUN_0013cf80(u32 job)
{
    JobWork *work = jobGetWork(job);

    work->captured = 0;
    if (!work->captureEnabled) {
        return 0;
    }
    if (!work->captureRequested) {
        return 0;
    }
    if (work->captureTarget == NULL) {
        return 0;
    }
    if (work->captureBlocked || work->enabled) {
        return 0;
    }
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    ((JobSurface *)work->bufferB)->width = 512;
    ((JobSurface *)work->bufferB)->height = 512;
    work->captureResult = gxCopyFramebufferToSurface(0, (JobSurface *)work->bufferB);
    work->captured = 1;
    return 0;
}

} /* extern "C" */
