#include "common.h"

extern "C" {

typedef struct Banner {
    /* 0x000 */ u8 unk000[0x68];
    /* 0x068 */ u32 id;
    /* 0x06C */ u32 timeStart;
    /* 0x070 */ u8 unk070[8];
    /* 0x078 */ u32 timeCurrent;
    /* 0x07C */ u8 active;
    /* 0x07D */ u8 unk07D;
    /* 0x07E */ u8 visible;
    /* 0x07F */ u8 unk07F[0x25];
    /* 0x0A4 */ u8 text[0x6B0];
    /* 0x754 */ u8 window[4];
} Banner;

typedef struct Globals {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Banner *banner;
} Globals;

extern Globals g_messageMain;

int pairSetFirstResetSecond(void *window, int arg);
int FUN_002bd954(void *window, int arg1, u32 arg2, void *text, float scale, int arg5);
int FUN_002bee58(void *window, int arg);
u32 FUN_0028fb40(void);

/* Script command: shows the banner with `id`: stamps the time, sets up its window with the text and starts it. */
u32 bannerShow(u32 id)
{
    Banner *banner = g_messageMain.banner;
    u32 now;

    banner->visible = 1;
    banner->active = 1;
    banner->id = id;
    now = FUN_0028fb40();
    banner->timeStart = now;
    banner->timeCurrent = now;
    FUN_002bd954(banner->window, 14, 0xffffffff, banner->text, 1.0f, 11);
    pairSetFirstResetSecond(banner->window, 10);
    FUN_002bee58(banner->window, 6);
    return 1;
}

} /* extern "C" */
