#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

typedef struct Screen2c39a4 {
    /* 0x000 */ u8 unk000[0x528];
    /* 0x528 */ u32 phase;
    /* 0x52C */ u32 unk52c;
    /* 0x530 */ u8 unk530[0xC4];
    /* 0x5F4 */ u8 mode;        /* 0, 1 or 2: which layout is loaded */
    /* 0x5F5 */ u8 unk5f5[3];
    /* 0x5F8 */ u8 layoutA[0x40];
    /* 0x638 */ u8 layoutB[0x40];
    /* 0x678 */ u8 unk678[0xB14];
    /* 0x118C */ u8 unk118c[1];
} Screen2c39a4;

extern s32 FUN_002bbbc8(Screen2c39a4 *screen, u8 *layout, s32 arg, u8 *unk530);
extern s32 FUN_002bbb74(u32 value, u8 *unk118c);

/* Switches the screen to the layout of its current phase when that isn't the loaded mode yet. */
void renderCtxSelectStereoLayout(RenderCtx *context)
{
    Screen2c39a4 *screen = reinterpret_cast<Screen2c39a4 *>(context);
    u8 *layout = NULL;
    u8 mode;

    switch (screen->phase) {
    case 0:
    case 1:
        mode = 1;
        layout = screen->layoutA;
        break;
    case 2:
        mode = 2;
        layout = screen->layoutB;
        break;
    default:
        mode = 0;
        break;
    }
    if (screen->mode != mode) {
        FUN_002bbbc8(screen, layout, 0, screen->unk530);
        FUN_002bbb74(screen->unk52c, screen->unk118c);
        screen->mode = mode;
    }
}

}
