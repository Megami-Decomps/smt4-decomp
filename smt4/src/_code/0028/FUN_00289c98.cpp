/* NON_MATCHING: global/zero saved registers and the selection-array address scratch register differ. */
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"
#include "font/ComWin/ComWin.h"

extern "C" {


void ifTouchDecrementTimer(void);
void uiSpriteSetScaleKeyframe(UiSpriteState *part, s32 arg1, s32 arg2);

/* Hide the button help panel: hide its buttons, drop (or just count down) its touch regions, close its arrows. */
void FUN_00289c98(s32 clearTouches)
{
    ButtonHelpWork *panel = g_buttonHelp.work;
    for (s32 i = 0; i < 6; ++i) {
        spriteStartAnimationByIndex(&panel->slotSprites[i], 1);
        if (panel->slots[i].kind) {
            if (clearTouches) {
                panel->slots[i].kind = 0;
            }
            ifTouchDecrementTimer();
        }
    }
    for (s32 i = 0; i < 2; ++i) {
        if (panel->mode == 1) {
            uiSpriteSetKeyframe(&panel->panelSprites[i], 3, 0);
        } else {
            uiSpriteSetScaleKeyframe(&panel->panelSprites[i], 0, 1);
        }
    }
    g_buttonHelp.work->phase = 0;
    g_buttonHelp.work->state = 3;
}

} /* extern "C" */
