/* NON_MATCHING: job flag guards merge, distant surface flags use literal offsets, and dimension registers differ; -O2 candidate. */
#include "shard/JobWork.h"
#include "camp/RenderCtx.h"

struct DownsampleWork {
    u8 unk0000[0xfa4];
    u8 active; // 0xfa4
    u8 enabled; // 0xfa5
    u8 unkfa6[2];
    s32 levels; // 0xfa8
    u8 copyResult; // 0xfac
    u8 done; // 0xfad
    u8 pending; // 0xfae
    u8 unkfaf[0x4dd];
    u8 blocked; // 0x148c
    u8 unk148d[3];
    JobSurface *source; // 0x1490
    u8 separateBuffers; // 0x1494
    u8 unk1495[3];
    JobSurface *first; // 0x1498
    JobSurface *second; // 0x149c
};
extern "C" {
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *);
u8 FUN_00154edc(u32, JobSurface *);
s32 stateValuesGetBySelector(u32);
void surfaceCopy(JobSurface *, JobSurface *);

u32 renderSurfaceDownsampleJob()
{
    DownsampleWork *work = (DownsampleWork *)jobGetWork();
    work->done = 0;
    if (!work->active || !work->enabled || !work->source || work->blocked)
        return 0;
    FUN_00157558(g_renderCtx);
    work->source->width = 512;
    work->source->height = 512;
    work->copyResult = FUN_00154edc(0, work->source);
    s32 mode = stateValuesGetBySelector(0);
    s32 levels = work->levels;
    if (!mode && levels > 1) {
        --levels;
        if (levels < 1)
            levels = 1;
    }
    if (work->separateBuffers) {
        for (s32 i = 0; i < levels; ++i) {
            if (i == 0) {
                surfaceCopy(work->source, work->first);
                work->first->width = work->source->width >> 1;
                work->first->height = work->source->height >> 1;
            } else if (i == 1) {
                surfaceCopy(work->first, work->second);
                work->second->width = work->first->width >> 1;
                work->second->height = work->first->height >> 1;
            } else {
                surfaceCopy(work->second, work->second);
                work->second->width >>= 1;
                work->second->height >>= 1;
            }
        }
    } else {
        for (s32 i = 0; i < levels; ++i) {
            surfaceCopy(work->source, work->source);
            work->source->width >>= 1;
            work->source->height >>= 1;
        }
    }
    work->done = 1;
    work->pending = 0;
    return 0;
}
}
