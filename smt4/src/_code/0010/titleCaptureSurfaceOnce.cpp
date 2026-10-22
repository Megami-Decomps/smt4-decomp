#include "common.h"

extern "C" {

typedef struct Surface {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
} Surface;

typedef struct TitleState {
    /* 0x00 */ u8 unk00[0x9A];
    /* 0x9A */ u8 active;
    /* 0x9B */ u8 unk9B;
    /* 0x9C */ u8 unk9C;
    /* 0x9D */ u8 captured;
    /* 0x9E */ u8 unk9E;
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
extern void FUN_002c39a4(u32 scene);
extern u8 FUN_002bfadc(s32 arg, Surface *surface);

/* Title screen step: captures the screen surface once the title is active. */
s32 titleCaptureSurfaceOnce(void)
{
    TitleWork *work = jobGetWork();

    if (FUN_002bff10(0) != 0) {
        work->state.unk9E = 1;
    } else {
        TitleState *state = &work->state;

        if (work->state.active != 0 && state->captured == 0 && state->unk9E == 0) {
            FUN_002c39a4(g_titleScene);
            work->surface->width = 0x200;
            work->surface->height = 0x200;
            work->state.unk9B = FUN_002bfadc(0, work->surface);
            work->state.captured = 1;
        }
    }
    return 0;
}

} /* extern "C" */
