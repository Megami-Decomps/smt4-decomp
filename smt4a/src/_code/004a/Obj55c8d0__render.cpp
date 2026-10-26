#include "common.h"

extern "C" {

struct TitleMenu {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 entryCount;
    /* 0x018 */ u8 unk018[0x850 - 0x18];
    /* 0x850 */ s32 drawMode;
    /* 0x854 */ u8 unk854[0x860 - 0x854];
    /* 0x860 */ u8 compact;
};

struct TitleScene;

extern TitleScene *g_renderCtx;

void FUN_00183bb0(void);
void skinObjectUpdateMatrices(TitleScene *scene);
void renderCtxResetColorScale(TitleScene *scene);
void FUN_004a559c(TitleMenu *menu);
void FUN_004a5344(TitleMenu *menu);

/* Draws the title menu's entries in compact or scrolling form, then refreshes the title scene. */
void _ZN9Obj55c8d06renderEv(TitleMenu *menu)
{
    if (menu->entryCount > 0) {
        FUN_00183bb0();
        switch (menu->compact) {
        case 0:
            menu->drawMode = 0x1f;
            FUN_004a5344(menu);
            break;
        default:
            menu->drawMode = 0x97;
            FUN_004a559c(menu);
            break;
        }
        skinObjectUpdateMatrices(g_renderCtx);
        renderCtxResetColorScale(g_renderCtx);
    }
}

} /* extern "C" */
