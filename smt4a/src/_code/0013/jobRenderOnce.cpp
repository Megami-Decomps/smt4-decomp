#include "shard/JobWork.h"

extern "C" {

s32 stateValuesGetBySelector(u32 arg);
u8 FUN_00154edc(u32 arg, JobSurface *surface);
void surfaceCopy(JobSurface *dest, JobSurface *source);
void FUN_00157558(u32 renderCtx);
extern u32 g_renderCtx;

/* Per-frame job step: marks a pending request when stateValuesGetBySelector asks for one; otherwise, if enabled and neither done nor pending, renders once into a 0x200 x 0x200 surface, halves its size and sets `done`. Always returns 0. */
u8 jobRenderOnce(void)
{
    JobWork *work = jobGetWork();

    if (stateValuesGetBySelector(0) != 0) {
        work->pending = 1;
    } else if (work->enabled == 0) {
        return work->enabled;
    } else if (work->done == 0 && work->pending == 0) {
        FUN_00157558(g_renderCtx);
        work->surface->width = 0x200;
        work->surface->height = 0x200;
        work->handle = FUN_00154edc(0, work->surface);
        surfaceCopy(work->surface, work->surface);
        work->surface->width = work->surface->width >> 1;
        work->surface->height = work->surface->height >> 1;
        work->done = 1;
    }
    return 0;
}

} /* extern "C" */
