/* NON_MATCHING: The hide loop is unrolled and the reset loop retains constant values across its helper call. */
#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;
void FUN_00295eb0(ButtonHelpDisplayUnit *unit, s32 value, s32 option);

/* Resets the two display units for the default help mode, or hides them. */
void FUN_002d666c(s32 mode)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    work->mode = mode;
    if (mode == 0) {
        for (s32 i = 0; i < 2; ++i) {
            work->units[i].value = 2;
            FUN_00295eb0(&work->units[i], 18, 0);
            work->units[i].active = 1;
            work->units[i].unk0C = 0;
            work->units[i].unk10 = 0;
            work->units[i].unk14 = 0;
        }
    } else {
        for (s32 i = 0; i < 2; ++i) {
            work->units[i].active = 0;
        }
    }
}
}
