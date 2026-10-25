/* NON_MATCHING: readiness branches target the preceding epilogue instruction; first downsample dimension copies reverse r0/r1. */
#include "shard/FrameWork.h"
#include "camp/RenderCtx.h"

extern "C" {

/* Additional copy controls inside the flags group's recovered padding. */
struct FrameCopyControlView {
    u8 unk00[0x90];
    s32 levels; // 0x90
    u8 result;  // 0x94
    u8 busy;    // 0x95
};

/* The two downsample surfaces follow FrameWork's known prefix. */
struct FrameCopyWork : FrameWork {
    JobSurface *second; // 0xFE4
    JobSurface *third;  // 0xFE8
};

typedef char FrameCopyLayoutCheck[
    offsetof(FrameCopyControlView, levels) == 0x90 &&
    offsetof(FrameCopyWork, second) == 0xFE4 &&
    offsetof(FrameCopyWork, third) == 0xFE8 && sizeof(FrameCopyWork) == 0xFEC ? 1 : -1];

s32 FUN_002bff10(u32 arg);
s32 FUN_002bfadc(u32 arg, JobSurface *surface);
void surfaceCopy(JobSurface *src, JobSurface *dst);

extern u32 g_titleScene;

/* Builds the successive half-size copies of the work's base surface (a chain through two further surfaces when `chained`). */
s32 FUN_0010854c(u32 job)
{
    FrameCopyWork *work = (FrameCopyWork *)jobGetWork(job);
    work->flags.surfaceReady = 0;
    if (FUN_002bff10(0) != 0) {
        return 0;
    }
    FrameReadyFlags *flags = &work->flags;
    if (flags->active == 0) {
        return 0;
    }
    if (flags->ready == 0 || work->frame.surface == NULL) {
        return 0;
    }
    FrameSurfaceState *frame = &work->frame;
    if (work->frame.blocked != 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(reinterpret_cast<RenderCtx *>(g_titleScene));
    work->frame.surface->width = 0x200;
    work->frame.surface->height = 0x200;
    reinterpret_cast<FrameCopyControlView *>(&work->flags)->result = FUN_002bfadc(0, work->frame.surface);
    s32 skipped = FUN_002bff10(0);
    s32 levels = reinterpret_cast<FrameCopyControlView *>(&work->flags)->levels;
    if (skipped == 0 && levels > 1) {
        levels--;
        if (levels < 1) {
            levels = 1;
        }
    }
    if (frame->unkE0 != 0) {
        for (s32 i = 0; i < levels; i++) {
            if (i == 0) {
                surfaceCopy(work->frame.surface, work->second);
                work->second->width = work->frame.surface->width >> 1;
                work->second->height = work->frame.surface->height >> 1;
            } else if (i == 1) {
                surfaceCopy(work->second, work->third);
                work->third->width = work->second->width >> 1;
                work->third->height = work->second->height >> 1;
            } else {
                surfaceCopy(work->third, work->third);
                work->third->width >>= 1;
                work->third->height >>= 1;
            }
        }
    } else {
        for (s32 i = 0; i < levels; i++) {
            surfaceCopy(work->frame.surface, work->frame.surface);
            work->frame.surface->width >>= 1;
            work->frame.surface->height >>= 1;
        }
    }
    work->flags.surfaceReady = 1;
    reinterpret_cast<FrameCopyControlView *>(&work->flags)->busy = 0;
    return 0;
}

} /* extern "C" */
