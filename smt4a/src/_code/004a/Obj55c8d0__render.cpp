#include "common.h"
#include "camp/RenderCtxA.h"

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


void gxResetColorQuadToWhite(void);
void skinObjectUpdateMatrices(RenderCtxA *scene);
void renderCtxResetColorScale(RenderCtxA *scene);
void bibleAnalyzeDrawMenu(TitleMenu *menu);
void FUN_004a5344(TitleMenu *menu);

/* Draws the title menu's entries in compact or scrolling form, then refreshes the title scene. */
void _ZN9Obj55c8d06renderEv(TitleMenu *menu)
{
    if (menu->entryCount > 0) {
        gxResetColorQuadToWhite();
        switch (menu->compact) {
        case 0:
            menu->drawMode = 0x1f;
            FUN_004a5344(menu);
            break;
        default:
            menu->drawMode = 0x97;
            bibleAnalyzeDrawMenu(menu);
            break;
        }
        skinObjectUpdateMatrices(g_renderCtx);
        renderCtxResetColorScale(g_renderCtx);
    }
}

} /* extern "C" */
