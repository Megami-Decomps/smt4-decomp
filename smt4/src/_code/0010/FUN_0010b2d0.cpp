/* NON_MATCHING: canonical job/surface/context contracts recovered; state-base formation and captured/ready guard exits differ. */
#include "shard/JobWork.h"
#include "camp/RenderCtx.h"

extern "C" {

typedef struct TitleState {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u8 active;
    /* 0x61 */ u8 unk61;
    /* 0x62 */ u8 unk62;
    /* 0x63 */ u8 unk63;
    /* 0x64 */ u8 captured;
    /* 0x65 */ u8 busy;
    /* 0x66 */ u8 unk66[0x33];
    /* 0x99 */ u8 ready;
} TitleState;

typedef struct TitleWork {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ JobSurface *surface;
    /* 0x00C */ u8 unk00C[0xEF4];
    /* 0xF00 */ TitleState state;
} TitleWork;

extern RenderCtx *g_titleScene;

s32 surfaceCopy(JobSurface *dest, JobSurface *src);
s32 FUN_002bfadc(s32 arg, JobSurface *surface);
void FUN_002c39a4(RenderCtx *scene);
s32 FUN_002bff10(s32 arg);

/* Title job step: once idle and ready, renders the scene into the surface at half size and marks it captured. */
s32 FUN_0010b2d0(u32 job)
{
    TitleWork *work = reinterpret_cast<TitleWork *>(jobGetWork(job));
    TitleState *state;

    if (FUN_002bff10(0) != 0) {
        work->state.busy = 1;
    } else if (work->state.active != 0) {
        state = &work->state;
        if (state->captured == 0 && state->busy == 0 && state->ready != 0) {
            FUN_002c39a4(g_titleScene);
            work->surface->width = 0x200;
            work->surface->height = 0x200;
            work->state.unk62 = FUN_002bfadc(0, work->surface);
            surfaceCopy(work->surface, work->surface);
            work->surface->width >>= 1;
            work->surface->height >>= 1;
            work->state.captured = 1;
        }
    }
    return 0;
}

} /* extern "C" */
