/* NON_MATCHING: retail tests the fade flags off one work+0x1400 base and stores skipped/captured through recomputed addresses (same pattern as FUN_0013dc70) */
#include "shard/JobWork.h"

extern "C" {

void FUN_00157558(u32 renderCtx);
u8 FUN_00154edc(u32 mode, JobSurface *surface);
s32 stateValuesGetBySelector(u32 selector);

extern u32 g_renderCtx;

/* Captures the screen once (512x512 into the job's surface) while fading; a state selector skips it. */
s32 FUN_0013e848(u32 job)
{
    JobWork *work = jobGetWork(job);

    if (stateValuesGetBySelector(0) != 0) {
        work->fadeCaptureSkipped = 1;
        return 0;
    }
    if (!work->fadeActive || work->fadeCaptured || work->fadeCaptureSkipped) {
        return 0;
    }
    FUN_00157558(g_renderCtx);
    work->surface->width = 512;
    work->surface->height = 512;
    work->fadeCaptureResult = FUN_00154edc(0, work->surface);
    work->fadeCaptured = 1;
    return 0;
}

} /* extern "C" */
