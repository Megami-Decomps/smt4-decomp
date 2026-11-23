/* NON_MATCHING: 7 lines: retail addresses the queued values as kinds + 24 (the two arrays are same-file data in the
 * original: this unit and the slot setter that defines them were one file) where the build loads a second pool word; retail
 * also computes the touchPressed/touchSelected base twice (r1 and r0) around the six-byte clear. */
#include "ui/ButtonHelp.h"
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {

void buttonHelpUpdateTouch(void);
void FUN_002ae028(u8 *help); // declcheck: local (the shared declaration does not compile here or changes this unit)
void buttonHelpSetPreset(u32 preset); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Per-frame update of the button help: runs the current state (1 opens, 2 idles, 3 closes), applies
 * a preset that was waiting and the queued selections, then advances the frame counter. */
s32 buttonHelpCalc(u32 job)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    s32 last = 0;

    switch (work->state) {
    case 0:
        break;
    case 1:
        for (s32 i = 0; i < 2; i++) {
            if (work->mode == 1) {
                if (work->panelSliding != 0) {
                    uiSlidingSpriteAdvance(&work->panelSprites[i], 0);
                }
            } else {
                uiSpriteAdvanceAnimation(&work->panelSprites[i]);
            }
        }
        for (s32 i = 0; i < 6; i++) {
            if (work->slots[i].kind != 0) {
                if (i < work->phase) {
                    uiSpriteAdvanceAnimation(&work->slotSprites[i]);
                }
                last = i;
            }
        }
        if (work->phase > last && uiSpriteGetCompletionState(&work->slotSprites[last]) != 0) {
            g_buttonHelp.work->state = 2;
            g_buttonHelp.work->phase = 0;
        }
        break;
    case 2:
        buttonHelpUpdateTouch();
        break;
    case 3:
        for (s32 i = 0; i < 2; i++) {
            uiSpriteAdvanceAnimation(&work->panelSprites[i]);
        }
        for (s32 i = 0; i < 6; i++) {
            if (work->slots[i].kind != 0) {
                if (i < work->phase) {
                    uiSpriteAdvanceAnimation(&work->slotSprites[i]);
                }
                last = i;
            }
        }
        if (work->phase > last && uiSpriteGetCompletionState(&work->slotSprites[last]) != 0) {
            for (s32 i = 0; i < 6; i++) {
                work->touchPressed[i] = 0;
            }
            FUN_002ae028(work->touchSelected);
            g_buttonHelp.work->state = 0;
            g_buttonHelp.work->phase = 0;
        }
        break;
    }
    if (g_buttonHelp.pending >= 0) {
        buttonHelpSetPreset(g_buttonHelp.pending & 0xff);
        if (g_buttonHelp.pending < 0) {
            for (s32 i = 0; i < 6; i++) {
                if (g_buttonHelpQueuedKinds[i] >= 0) {
                    buttonHelpSetSlot(i, g_buttonHelpQueuedKinds[i], g_buttonHelpQueuedValues[i], 1);
                }
            }
        }
    }
    work->phase++;
    return 0;
}

}
