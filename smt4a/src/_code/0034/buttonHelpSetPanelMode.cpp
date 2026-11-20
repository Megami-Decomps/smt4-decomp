#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {
void uiStoreTextureEntryCenter(UiSpriteState *sprite, s32 table, s32 flags);

/* Stores the help mode, resetting the four panel sprites for modes 0 and 2 or hiding them. */
void buttonHelpSetPanelMode(u8 mode)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    work->mode = mode;
    if (mode == 0 || mode == 2) {
        for (s32 i = 0; i < 4; ++i) {
            spriteSetLayer(&work->panelSprites[i], 2);
            uiStoreTextureEntryCenter(&work->panelSprites[i], 10, 0);
            spriteSetVisible(&work->panelSprites[i], 1);
            work->panelSprites[i].x = 0;
            work->panelSprites[i].y = 0;
            work->panelSprites[i].z = 0;
        }
    } else {
        for (s32 i = 0; i < 4; ++i) {
            spriteSetVisible(&work->panelSprites[i], 0);
        }
    }
}
}
