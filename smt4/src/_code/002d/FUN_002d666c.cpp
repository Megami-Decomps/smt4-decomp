/* NON_MATCHING: retail recomputes the unit address (add #892; field offsets +58/+60) for each access and keeps the zero in r7 shared with the loop counter; ours folds the field offsets into one store address and keeps constants 2/1 in saved registers. */
#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;
void FUN_00295eb0(ButtonHelpDisplayUnit *unit, s32 value, s32 option);

// Address of one of the two display units.
static ButtonHelpDisplayUnit *buttonHelpUnitAt(ButtonHelpWork *work, s32 index)
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
            buttonHelpUnitAt(work, i)->value = 2;
            FUN_00295eb0(buttonHelpUnitAt(work, i), 18, 0);
            buttonHelpUnitAt(work, i)->active = 1;
            buttonHelpUnitAt(work, i)->unk0C = 0;
            buttonHelpUnitAt(work, i)->unk10 = 0;
            buttonHelpUnitAt(work, i)->unk14 = 0;
        }
    } else {
        for (s32 i = 0; i < 2; ++i) {
            buttonHelpUnitAt(work, i)->active = 0;
        }
    }
}
}
