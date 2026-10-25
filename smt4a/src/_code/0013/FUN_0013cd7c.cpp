/* NON_MATCHING: recovered minimum reduction-level clamp; grouped flag bases and surface-copy register allocation still differ. */
#include "gfx/FrameTextureWork.h"
#include "shard/JobWork.h"
#include "camp/RenderCtx.h"
/* The two intermediate surfaces lie beyond the shared work prefix. */
struct SurfaceReductionWork {
    FrameTextureWork frame;
    JobSurface *halfSurface;
    JobSurface *quarterSurface;
};
typedef char SurfaceReductionOffsets[(offsetof(SurfaceReductionWork, halfSurface) == 0x1498 && offsetof(SurfaceReductionWork, quarterSurface) == 0x149C) ? 1 : -1];
extern "C" {
extern RenderCtxA *g_renderCtx;
s32 stateValuesGetBySelector(u32 selector);
void FUN_00157558(RenderCtxA *context);
u8 FUN_00154edc(u32 target, JobSurface *surface);
void surfaceCopy(JobSurface *source, JobSurface *destination);
}
static inline void reduceSurface(JobSurface *&source, JobSurface *&destination)
{
    surfaceCopy(source, destination);
    destination->width = source->width >> 1;
    destination->height = source->height >> 1;
}
extern "C" s32 FUN_0013cd7c(u32 job)
{
    SurfaceReductionWork *work = reinterpret_cast<SurfaceReductionWork *>(jobGetWork(job));
    FrameTextureWork *frame = &work->frame;
    frame->unkFAE = 0;
    if (stateValuesGetBySelector(0) || !frame->unkFA4 || !frame->unkFA5 || !frame->unk1490 || frame->unk148C)
        return 0;
    JobSurface *&surface = reinterpret_cast<JobSurface *&>(frame->unk1490);
    FUN_00157558(g_renderCtx);
    surface->width = 512;
    surface->height = 512;
    frame->unkFAC[0] = FUN_00154edc(0, surface);
    s32 selector = stateValuesGetBySelector(0);
    s32 levels = static_cast<s32>(frame->mode);
    if (!selector && levels > 1) {
        --levels;
        if (levels < 1)
            levels = 1;
    }
    if (frame->unk1494) {
        for (s32 level = 0; level < levels; ++level) {
            if (level == 0)
                reduceSurface(surface, work->halfSurface);
            else if (level == 1)
                reduceSurface(work->halfSurface, work->quarterSurface);
            else
                reduceSurface(work->quarterSurface, work->quarterSurface);
        }
    } else {
        for (s32 level = 0; level < levels; ++level)
            reduceSurface(surface, surface);
    }
    frame->unkFAE = 1;
    frame->unkFAC[1] = 0;
    return 0;
}
