/* NON_MATCHING: retail recomputes the unit address (add #892; field offsets +58/+60) for each access and keeps the zero in r7 shared with the loop counter; ours folds the field offsets into one store address and keeps constants 2/1 in saved registers. */
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {
void uiStoreTextureEntryCenter(UiSpriteState *unit, s32 value, s32 option);

// Address of one of the two display units.
static __inline UiSpriteState *buttonHelpUnitAt(ButtonHelpWork *work, s32 index)
{
    return &work->units[index];
}

/* Resets the two display units for the default help mode, or hides them. */
void FUN_002d666c(s32 mode)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    work->mode = mode;
    if (mode == 0) {
        for (s32 i = 0; i < 2; ++i) {
            buttonHelpUnitAt(work, i)->layer = 2;
            uiStoreTextureEntryCenter(buttonHelpUnitAt(work, i), 18, 0);
            buttonHelpUnitAt(work, i)->active = 1;
            buttonHelpUnitAt(work, i)->x = 0;
            buttonHelpUnitAt(work, i)->y = 0;
            buttonHelpUnitAt(work, i)->z = 0;
        }
    } else {
        for (s32 i = 0; i < 2; ++i) {
            buttonHelpUnitAt(work, i)->active = 0;
        }
    }
}
}
