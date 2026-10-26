#include "common.h"

extern "C" {

struct TitleMenu {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 entryCount;
    /* 0x018 */ u8 unk018[0x594 - 0x18];
    /* 0x594 */ s32 drawMode;
    /* 0x598 */ u8 unk598[0x5a4 - 0x598];
    /* 0x5a4 */ u8 compact;
};

struct TitleScene;

extern TitleScene *g_titleScene;

void FUN_002bed3c(void);
void renderCtxApplyTransforms(TitleScene *scene);
void FUN_002c18e4(TitleScene *scene);
void FUN_003a9648(TitleMenu *menu);
void scrollMenuDrawVisibleEntries(TitleMenu *menu);

/* Draws the title menu's entries in compact or scrolling form, then refreshes the title scene. */
void titleMenuDraw(TitleMenu *menu)
{
    if (menu->entryCount > 0) {
        FUN_002bed3c();
        switch (menu->compact) {
        case 0:
            menu->drawMode = 0x1f;
            scrollMenuDrawVisibleEntries(menu);
            break;
        default:
            menu->drawMode = 0x97;
            FUN_003a9648(menu);
            break;
        }
        renderCtxApplyTransforms(g_titleScene);
        FUN_002c18e4(g_titleScene);
    }
}

} /* extern "C" */
