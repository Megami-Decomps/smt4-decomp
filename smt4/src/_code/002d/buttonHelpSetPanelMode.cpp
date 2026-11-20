#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {
void uiStoreTextureEntryCenter(UiSpriteState *unit, s32 value, s32 option); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Resets the two display units for the default help mode, or hides them. */
void buttonHelpSetPanelMode(u8 mode)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    work->mode = mode;
    if (mode == 0) {
        for (s32 i = 0; i < 2; ++i) {
            spriteSetLayer(&work->panelSprites[i], 2);
            uiStoreTextureEntryCenter(&work->panelSprites[i], 18, 0);
            spriteSetVisible(&work->panelSprites[i], 1);
            work->panelSprites[i].x = 0;
            work->panelSprites[i].y = 0;
            work->panelSprites[i].z = 0;
        }
    } else {
        for (s32 i = 0; i < 2; ++i) {
            spriteSetVisible(&work->panelSprites[i], 0);
        }
    }
}
}
