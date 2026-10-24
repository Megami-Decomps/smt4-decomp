/* NON_MATCHING: retail reads work+0xE8D and work+0xFE0 through hoisted bases (add r0,r5,#0xE00 / add r4,r5,#0xF00); source has no known form that makes armcc do that */
#include "common.h"

extern "C" {

typedef struct Surface {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
} Surface;

typedef struct ScreenWork {
    /* 0x000 */ u8 unk000[0xE8C];
    /* 0xE8C */ u8 enabled;
    /* 0xE8D */ u8 ready;
    /* 0xE8E */ u8 unkE8E[2];
    /* 0xE90 */ s32 levels;
    /* 0xE94 */ u8 result;
    /* 0xE95 */ u8 busy;
    /* 0xE96 */ u8 done;
    /* 0xE97 */ u8 unkE97[0x141];
    /* 0xFD8 */ u8 locked;
    /* 0xFD9 */ u8 unkFD9[3];
    /* 0xFDC */ Surface *base;
    /* 0xFE0 */ u8 chained;
    /* 0xFE1 */ u8 unkFE1[3];
    /* 0xFE4 */ Surface *second;
    /* 0xFE8 */ Surface *third;
} ScreenWork;

ScreenWork *jobGetWork(void);
s32 FUN_002bff10(u32 arg);
s32 FUN_002bfadc(u32 arg, Surface *surface);
void FUN_002c39a4(u32 scene);
void surfaceCopy(Surface *src, Surface *dst);

extern u32 g_titleScene;

/* Builds the successive half-size copies of the work's base surface (a chain through two further surfaces when `chained`). */
u32 FUN_0010854c(void)
{
    ScreenWork *work = jobGetWork();
    work->done = 0;
    if (FUN_002bff10(0) != 0 || work->enabled == 0 || work->ready == 0 || work->base == NULL || work->locked != 0) {
        return 0;
    }
    FUN_002c39a4(g_titleScene);
    work->base->width = 0x200;
    work->base->height = 0x200;
    work->result = FUN_002bfadc(0, work->base);
    s32 skipped = FUN_002bff10(0);
    s32 levels = work->levels;
    if (skipped == 0 && levels > 1) {
        levels--;
        if (levels < 1) {
            levels = 1;
        }
    }
    if (work->chained != 0) {
        for (s32 i = 0; i < levels; i++) {
            if (i == 0) {
                surfaceCopy(work->base, work->second);
                work->second->width = work->base->width >> 1;
                work->second->height = work->base->height >> 1;
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
            surfaceCopy(work->base, work->base);
            work->base->width >>= 1;
            work->base->height >>= 1;
        }
    }
    work->done = 1;
    work->busy = 0;
    return 0;
}

} /* extern "C" */
