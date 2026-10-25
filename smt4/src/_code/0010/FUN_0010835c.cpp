/* NON_MATCHING: retail minimum-pass clamp is recovered; capture-flag addressing, early return layout and surface size-update scheduling differ. */
#include "ui/FrameTex.h"
#include "shard/JobWork.h"
#include "shard/S1ListPanel.h"
#include "camp/RenderCtx.h"
extern "C" {
extern RenderCtx *g_titleScene;
u8 FUN_002bfadc(u32 screen, JobSurface *surface);
s32 FUN_002bff10(u32 screen);
void surfaceCopy(JobSurface *source, JobSurface *destination);

s32 FUN_0010835c(u32 job)
{
    // The extra source and ping-pong surfaces lie beyond FrameWork's recovered end.
    struct DownsampleView {
        FrameWork frame;
        JobSurface *source;
        u8 separateSurfaces;
        u8 unkFE1[3];
        JobSurface *first;
        JobSurface *second;
    };
    typedef char DownsampleSurfaceOffsets[offsetof(DownsampleView, source) == 0xFDC &&
        offsetof(DownsampleView, first) == 0xFE4 && offsetof(DownsampleView, second) == 0xFE8 ? 1 : -1];
    DownsampleView *work = (DownsampleView *)jobGetWork(job);
    work->frame.unkE95 = 0;
    if (!work->frame.unkE8C || !work->frame.quadActive || !work->source || work->frame.unkFD8)
        return 0;
    renderCtxSelectStereoLayout(g_titleScene);
    work->source->width = 512;
    work->source->height = 512;
    work->frame.unkE94 = FUN_002bfadc(0, work->source);
    s32 ready = FUN_002bff10(0);
    s32 passes = (s32)work->frame.unkE90;
    if (!ready && passes > 1) {
        --passes;
        if (passes < 1) {
            passes = 1;
        }
    }
    if (work->separateSurfaces) {
        for (s32 pass = 0; pass < passes; ++pass) {
            if (pass == 0) {
                surfaceCopy(work->source, work->first);
                work->first->width = work->source->width >> 1;
                work->first->height = work->source->height >> 1;
            } else if (pass == 1) {
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
        for (s32 pass = 0; pass < passes; ++pass) {
            surfaceCopy(work->source, work->source);
            work->source->width >>= 1;
            work->source->height >>= 1;
        }
    }
    work->frame.unkE95 = 1;
    work->frame.unkE96 = 0;
    return 0;
}
}
