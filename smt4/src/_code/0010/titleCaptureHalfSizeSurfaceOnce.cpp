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
    /* 0x63 */ u8 unk63;
    /* 0x64 */ u8 captured;   /* the surface has been copied */
    /* 0x65 */ u8 unk65;
    /* 0x66 */ u8 unk66[0x33];
    /* 0x99 */ u8 unk99;
} TitleState;

typedef struct TitleWork {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ Surface *surface;
    /* 0x00C */ u8 unk00C[0xEF4];
    /* 0xF00 */ TitleState state;
} TitleWork;

extern u32 g_titleScene;

extern TitleWork *jobGetWork(void);
extern s32 FUN_002bff10(s32 arg);
extern void renderCtxSelectStereoLayout(u32 scene);
extern u8 FUN_002bfadc(s32 arg, Surface *surface);
extern void surfaceCopy(Surface *dst, Surface *src);

/* Title screen step: captures the screen surface (at half size) once the title is active. */
s32 titleCaptureHalfSizeSurfaceOnce(void)
{
    TitleWork *work = jobGetWork();

    if (FUN_002bff10(0) != 0) {
        work->state.unk65 = 1;
    } else {
        TitleState *state = &work->state;

        if (work->state.active != 0 && state->captured == 0 && state->unk65 == 0 && state->unk99 == 0) {
            renderCtxSelectStereoLayout(g_titleScene);
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
