#include "common.h"

extern "C" {

typedef struct Banner {
    /* 0x000 */ u8 unk000[0x190];
    /* 0x190 */ u8 flagA;
    /* 0x191 */ u8 flagB;
    /* 0x192 */ u8 flagC;
    /* 0x193 */ u8 unk193;
    /* 0x194 */ u8 text[0x168C];
    /* 0x1820 */ u8 window[4];
} Banner;

typedef struct Globals {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Banner *banner;
} Globals;

extern Globals DAT_0057f588;

int FUN_001846d0(void *window, int arg);
int FUN_00184b80(void *window, int arg);
int FUN_0014e188(void *window, int arg1, u32 arg2, void *text, float scale, int arg5);

/* Script command: turns on the banner's flags, sets up its window with the text and starts it. */
u32 bannerShow(void)
{
    Banner *banner = DAT_0057f588.banner;

    banner->flagA = 1;
    banner->flagB = 1;
    banner->flagC = 1;
    FUN_0014e188(banner->window, 19, 0xffffffff, banner->text, 1.0f, 11);
    FUN_00184b80(banner->window, 38);
    FUN_001846d0(banner->window, 28);
    return 1;
}

} /* extern "C" */
