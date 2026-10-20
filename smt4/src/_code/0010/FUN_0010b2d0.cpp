/* NON_MATCHING: scheduling/branch layout only: retail forms the pointer to work+0xF00 (`add r0, r4, #3840`) between the active test and the captured test, and exits the ready test through its own return; built reads the captured byte from the work base and shares one exit. */
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
    /* 0x64 */ u8 captured;
    /* 0x65 */ u8 busy;
    /* 0x66 */ u8 unk66[0x33];
    /* 0x99 */ u8 ready;
} TitleState;

typedef struct TitleWork {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ Surface *surface;
    /* 0x00C */ u8 unk00C[0xEF4];
    /* 0xF00 */ TitleState state;
} TitleWork;

extern u32 g_titleScene;

s32 surfaceCopy(Surface *dest, Surface *src);
s32 FUN_002bfadc(s32 arg, Surface *surface);
s32 FUN_002c39a4(u32 scene);
s32 FUN_002bff10(s32 arg);
TitleWork *jobGetWork(void);

/* Title job step: once idle and ready, renders the scene into the surface at half size and marks it captured. */
u8 FUN_0010b2d0(void)
{
    TitleWork *work = jobGetWork();
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
