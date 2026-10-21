/* NON_MATCHING: retail forms scene + 0x60 once and addresses the selection (offset in a register) and the word table from it; here armcc folds the offsets differently and spends two more registers. */
#include "classes/Obj464cb0.h"

/* The part of the title scene the menu keeps: the current selection and a table of words per
 * selection. */
struct Obj464cb0Menu {
    /* 0x0000 */ u8 unk0000[0x11EC];
    /* 0x11EC */ s32 selection;
    /* 0x11F0 */ u32 unk1190;
    /* 0x11F4 */ u32 words[1];
};

struct Obj464cb0TitleScene {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ Obj464cb0Menu menu;
};

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void FUN_00248ae8(s32 arg);
extern Obj464cb0TitleScene *g_titleScene;
extern u32 *DAT_004729e0;
extern s32 DAT_004729e4;
}

/* Posts the object combined with the selected title word, and message id 0xf0107. */
void Obj464cb0::post0f0107()
{
    Obj464cb0Menu *menu;

    cursorResetFromParam();
    menu = &g_titleScene->menu;
    DAT_004729e0[DAT_004729e4] = (menu->words[menu->selection] & 0xfffff0ff) | (u32)this;
    DAT_004729e0[DAT_004729e4 + 1] = 0xf0107;
    DAT_004729e4 += 2;
    asdModelCommandBlockRelease();
    FUN_00248ae8(1);
}
