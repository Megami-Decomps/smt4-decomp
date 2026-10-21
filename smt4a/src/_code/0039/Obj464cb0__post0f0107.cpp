/* NON_MATCHING: retail forms the menu pointer (context + 0x60) once and reaches the selection with the 0x11f8 offset in a register; armcc folds the offsets differently here and spends two more registers. */
#include "classes/Obj464cb0.h"

/* The part of the render context the menu keeps: the current selection and a table of words per
 * selection. */
struct Obj464cb0Menu {
    /* 0x0000 */ u8 unk0000[0x11F8];
    /* 0x11F8 */ s32 selection;
    /* 0x11FC */ u32 unk11FC;
    /* 0x1200 */ u32 words[1];
};

struct Obj464cb0RenderContext {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ Obj464cb0Menu menu;
};

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void FUN_003c8538(s32 arg);
extern Obj464cb0RenderContext *g_renderCtx;
extern u32 *DAT_005b3fe4;
extern s32 DAT_005b3fe8;
}

/* Posts the object combined with the selected word, and message id 0xf0107. */
void Obj464cb0::post0f0107()
{
    Obj464cb0Menu *menu;

    cursorResetFromParam();
    menu = &g_renderCtx->menu;
    DAT_005b3fe4[DAT_005b3fe8] = (menu->words[menu->selection] & 0xfffff0ff) | (u32)this;
    DAT_005b3fe4[DAT_005b3fe8 + 1] = 0xf0107;
    DAT_005b3fe8 += 2;
    asdModelCommandBlockRelease();
    FUN_003c8538(1);
}
