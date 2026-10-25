#include "common.h"

extern "C" {

typedef struct TitleFlags {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u8 flagA;
    /* 0x61 */ u8 unk61[2];
    /* 0x63 */ u8 flagB;
} TitleFlags;

typedef struct TitleWork {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00c */ u8 ready;
    /* 0x00d */ u8 unk00d[0xef3];
    /* 0xf00 */ TitleFlags flags;
} TitleWork;

extern u32 g_titleScene;

void FUN_001137fc(s32 arg);
void renderCtxSelectStereoLayout(u32 scene);
s32 FUN_002bff10(s32 arg);
TitleWork *jobGetWork(void);

/* When both flags are set, FUN_002bff10 is idle and the work is ready, runs the title scene step. Returns 0. */
u8 FUN_0010a110(void)
{
    TitleWork *work = jobGetWork();
    TitleFlags *flags = &work->flags;

    if (flags->flagA == 0) {
        return 0;
    }
    if (flags->flagB == 0) {
        return 0;
    }
    if (FUN_002bff10(0) == 0 && work->ready != 0) {
        renderCtxSelectStereoLayout(g_titleScene);
        FUN_001137fc(0);
    }
    return 0;
}

} /* extern "C" */
