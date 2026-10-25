#include "common.h"

extern "C" {

typedef struct Surface {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
} Surface;

typedef struct TitleState {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u8 active;
    /* 0x61 */ u8 unk61;
    /* 0x62 */ u8 unk62;
    /* 0x63 */ u8 captured;
    /* 0x64 */ u8 unk64[0x35];
    /* 0x99 */ u8 ready;
} TitleState;

typedef struct TitleWork {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ Surface *surface;
    /* 0x008 */ u8 unk008[0xEF8];
    /* 0xF00 */ TitleState state;
} TitleWork;

extern u32 g_titleScene;

s32 surfaceCopy(Surface *dest, Surface *src);
s32 FUN_002bfadc(s32 arg, Surface *surface);
s32 FUN_002c39a4(u32 scene);
TitleWork *jobGetWork(u32 job);

/* Title job step: once active and ready, renders the scene into the surface at half size and marks it captured. */
s32 titleCaptureReadySurfaceOnce(u32 job)
{
    TitleWork *work = jobGetWork(job);
    TitleState *state = &work->state;

    if (state->active == 0) {
        return 0;
    }
    if (state->captured != 0) {
        return 0;
    }
    if (state->ready == 0) {
        return 0;
    }
    FUN_002c39a4(g_titleScene);
    work->surface->width = 0x200;
    work->surface->height = 0x200;
    work->state.unk62 = FUN_002bfadc(0, work->surface);
    surfaceCopy(work->surface, work->surface);
    work->surface->width >>= 1;
    work->surface->height >>= 1;
    work->state.captured = 1;
    return 0;
}

} /* extern "C" */
