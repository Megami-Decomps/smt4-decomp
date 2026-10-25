#include "common.h"
#include "shard/JobWork.h"

/* A render target size record. */
struct RenderTargetSize {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 width;
    /* 0x18 */ u32 height;
};

/* The flag bytes at +0x1400 of a render job's work block. */
struct RenderJobFlags {
    /* 0x00 */ u8 unk00[0x4E];
    /* 0x4E */ s8 pending;
    /* 0x4F */ u8 result;
    /* 0x50 */ s8 done;
};

/* A render job's work block; only the fields this step uses are named. */
struct RenderJobWork {
    /* 0x0000 */ u32 unk0000;
    /* 0x0004 */ RenderTargetSize *target;
    /* 0x0008 */ u8 unk0008[0x13F8];
    /* 0x1400 */ RenderJobFlags flags;
};

extern "C" {

extern u32 g_renderCtx; /* 0x59dbb4 */
void FUN_00157558(u32 context);
u8 FUN_00154edc(s32 mode, RenderTargetSize *target);

/* Job step: when a render is pending and not done, sizes the target 512x512, renders it and marks the job done. */
u32 FUN_0013e7c4(u32 job)
{
    RenderJobWork *work = (RenderJobWork *)jobGetWork(job);

    if (work->flags.pending != 0 && work->flags.done == 0) {
        FUN_00157558(g_renderCtx);
        work->target->width = 0x200;
        work->target->height = 0x200;
        work->flags.result = FUN_00154edc(0, work->target);
        work->flags.done = 1;
        return 0;
    }
    return 0;
}

} /* extern "C" */
