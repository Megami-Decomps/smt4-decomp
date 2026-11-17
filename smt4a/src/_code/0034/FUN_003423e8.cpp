/* NON_MATCHING: the loops now stay loops (element pointers) like retail; remaining: retail loads the global before its push, adds 892 to each entry address separately before the field offsets (and writes the three int fields through the row base), and keeps fewer saved registers. */
#include "ui/ButtonHelpGlobal.h"

extern "C" {
void uiStoreTextureEntryCenter(UiSpriteState *sprite, s32 table, s32 flags);

// Store the help mode, hiding the four panel sprites or resetting them for modes 0 and 2.
void FUN_003423e8(s32 mode)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    work->mode = static_cast<u8>(mode);

    if (mode != 0 && mode != 2) {
        for (s32 index = 0; index < 4; ++index) {
            UiSpriteState *sprite = &work->panelSprites[index];
            sprite->active = 0;
        }
        return;
    }

    for (s32 index = 0; index < 4; ++index) {
        UiSpriteState *sprite = &work->panelSprites[index];
        sprite->layer = 2;
        uiStoreTextureEntryCenter(sprite, 10, 0);
        sprite->active = 1;
        sprite->x = 0;
        sprite->y = 0;
        sprite->z = 0;
    }
}
}
