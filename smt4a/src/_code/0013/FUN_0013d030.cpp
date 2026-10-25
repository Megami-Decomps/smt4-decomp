/* NON_MATCHING: retail addresses captureRequested via a 0xf00 base and returns the zero flag/pointer it tested instead of a separate mov r0, #0 (same shape as FUN_0013cf80). */
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
    if (stateValuesGetBySelector() == 0 && work->captureEnabled && work->captureRequested &&
        work->captureTarget != NULL && !work->captureBlocked && !work->enabled) {
        FUN_00157558(g_renderCtx);
        ((JobSurface *)work->bufferC)->width = 512;
        ((JobSurface *)work->bufferC)->height = 512;
        work->captureResult = FUN_00154edc(0, (JobSurface *)work->bufferC);
        work->capturedC = 1;
    }
    return 0;
}

} /* extern "C" */
