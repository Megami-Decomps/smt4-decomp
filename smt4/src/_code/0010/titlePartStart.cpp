#include "common.h"

extern "C" {

typedef struct Part00109f40 {
    /* 0x00 */ u8 unk00[0x9a];
    /* 0x9a */ u8 ready;
    /* 0x9b */ u8 result;
    /* 0x9c */ u8 started;
} Part00109f40;

typedef struct Canvas00109f40 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 width;
    /* 0x18 */ u32 height;
} Canvas00109f40;

typedef struct Work00109f40 {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ Canvas00109f40 *canvas;
    /* 0x008 */ u8 unk008[0xef8];
    /* 0xf00 */ Part00109f40 part;
} Work00109f40;

Work00109f40 *jobGetWork(void);
void FUN_002c39a4(u32 scene);
u8 FUN_002bfadc(s32 mode, Canvas00109f40 *canvas);

extern u32 g_titleScene; /* 0x44ea00 */

/* Once the title part is ready and not yet started, sizes its canvas 512x512, runs FUN_002bfadc and marks it started. Always returns 0. */
u32 titlePartStart(void)
{
    Work00109f40 *work = jobGetWork();
    Part00109f40 *part = &work->part;

    if (part->ready == 0 || part->started != 0) {
        return 0;
    }
    FUN_002c39a4(g_titleScene);
    work->canvas->width = 0x200;
    work->canvas->height = 0x200;
    work->part.result = FUN_002bfadc(0, work->canvas);
    work->part.started = 1;
    return 0;
}

} /* extern "C" */
