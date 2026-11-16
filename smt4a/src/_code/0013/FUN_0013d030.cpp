#include "shard/JobWork.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {

u8 FUN_00154edc(u32 mode, JobSurface *surface);
s32 stateValuesGetBySelector(void);


/* Starts a 512x512 capture into the job's second surface when requested, unblocked and no state selector is active. */
s32 FUN_0013d030(u32 job)
{
    JobWork *work = jobGetWork(job);

    work->capturedC = 0;
    if (stateValuesGetBySelector() != 0 || !work->captureEnabled) {
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
    FUN_00157558(g_renderCtx);
    ((JobSurface *)work->bufferC)->width = 512;
    ((JobSurface *)work->bufferC)->height = 512;
    work->captureResult = FUN_00154edc(0, (JobSurface *)work->bufferC);
    work->capturedC = 1;
    return 0;
}

} /* extern "C" */
