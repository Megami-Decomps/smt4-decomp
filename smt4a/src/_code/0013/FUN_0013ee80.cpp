#include "common.h"
#include "shard/JobWork.h"

struct CaptureSurface {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
};

struct CaptureState {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u8 active;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 result;
    /* 0x17 */ u8 captured;
    /* 0x18 */ u8 unk18[0x35];
    /* 0x4D */ u8 variant;          /* which of the two capture jobs handles this capture */
};

/* The work block of the screen capture job. */
struct CaptureJobWork {
    /* 0x0000 */ u8 unk0000[4];
    /* 0x0004 */ CaptureSurface *surface;
    /* 0x0008 */ u8 unk0008[0x13f8];
    /* 0x1400 */ CaptureState capture;
};

extern "C" {
extern void *g_renderCtx;
void FUN_00157558(void *context);
u8 FUN_00154edc(u32 mode, CaptureSurface *surface);
void surfaceCopy(CaptureSurface *destination, CaptureSurface *source);

static __inline bool captureIsPending(const CaptureState *capture)
{
    return capture->active && !capture->captured && !capture->variant;
}

/* Job step for the first capture variant: once active, captures the screen into the job's 512x512
 * surface and then halves the surface's recorded size; runs only once. */
u32 FUN_0013ee80(u32 job)
{
    CaptureJobWork *work = (CaptureJobWork *)jobGetWork(job);

    if (!captureIsPending(&work->capture)) {
        return 0;
    }
    FUN_00157558(g_renderCtx);
    work->surface->width = 0x200;
    work->surface->height = 0x200;
    work->capture.result = FUN_00154edc(0, work->surface);
    surfaceCopy(work->surface, work->surface);
    work->surface->width >>= 1;
    work->surface->height >>= 1;
    work->capture.captured = 1;
    return 0;
}

} /* extern "C" */
