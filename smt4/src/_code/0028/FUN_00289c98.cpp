/* NON_MATCHING: global/zero saved registers and the selection-array address scratch register differ. */
#include "ui/ButtonHelp.h"

extern "C" {

extern ButtonHelpGlobals g_buttonHelp;

void spriteStartAnimationByIndex(ButtonHelpDisplayUnit *part, s32 hidden);
void ifTouchDecrementTimer(void);
void timerStart(ButtonHelpDisplayUnit *part, s32 kind, s32 arg);
void FUN_002a9fdc(ButtonHelpDisplayUnit *part, s32 arg1, s32 arg2);

/* Hide the button help panel: hide its buttons, drop (or just count down) its touch regions, close its arrows. */
void FUN_00289c98(s32 clearTouches)
{
    ButtonHelpWork *panel = g_buttonHelp.work;
    ButtonHelpSelectionViewIV *selection = reinterpret_cast<ButtonHelpSelectionViewIV *>(panel);
    for (s32 i = 0; i < 6; ++i) {
        spriteStartAnimationByIndex(&selection->units[i], 1);
        if (selection->kinds[i].kind) {
            if (clearTouches) {
                selection->kinds[i].kind = 0;
            }
            ifTouchDecrementTimer();
        }
    }
    for (s32 i = 0; i < 2; ++i) {
        if (panel->mode == 1) {
            timerStart(&panel->units[i], 3, 0);
        } else {
            FUN_002a9fdc(&panel->units[i], 0, 1);
        }
    }
    g_buttonHelp.work->transition.phase = 0;
    g_buttonHelp.work->state = 3;
}

} /* extern "C" */
